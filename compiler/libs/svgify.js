const colors=require("color-convert");
const errors=require("./errors.js");
var get=(scope,k) => scope.getProp(k);

// Viewbox and header
var vbox={left:Infinity,right:-Infinity,top:Infinity,bottom:-Infinity};
function box(left,top,right,bottom){
  vbox.bottom=(vbox.bottom>bottom)?vbox.bottom:bottom;
  vbox.right=(vbox.right>right)?vbox.right:right;
  vbox.left=(vbox.left<left)?vbox.left:left;
  vbox.top=(vbox.top<top)?vbox.top:top;
}
function header(){
  return "<svg width=\""+(vbox.right-vbox.left)+
    "\" height=\""+(vbox.bottom-vbox.top)+
    "\" viewbox=\""+vbox.left+" "+vbox.top+" "+(vbox.right-vbox.left)+" "+(vbox.bottom-vbox.top)+
    "\" xmlns=\"http://www.w3.org/2000/svg\">";
}

// Auto-SVGify and helpers
function hex(hsv){
  if(hsv=="transparent") return hsv;
  if(!Array.isArray(hsv) || hsv.length!=3) process.exit(errors.error("Invalid color given"));
  return "#"+colors.hsv.hex(hsv[0],hsv[1],hsv[2]);
}
var namehash={
  "turn":"transform",
  "sw":"stroke-width",
  "w":"width",
  "h":"height"
}
function autoSvgify(node,custom){
  var attrs="";
  for(p in node.props){
    var value=(custom && Object.keys(custom).includes(p)?custom[p]:node.props[p]);
  	if(p=="stroke") value=hex(value);
  	if(p=="fill") value=(value==-1?"none":hex(value));
    if(p=="turn") value="rotate("+value[0]+","+value[1]+","+value[2]+")"
    if(p=="z") value=null;
    if(value!=null) attrs+=" "+(namehash[p]||p)+"=\""+value+"\"";
  }
  attrs+=" stroke-linecap=\"round\"";
  return attrs;
}

// Main SVGify and helpers
module.exports=function(draw){
  var xml=[],nodes=draw.getCores();
  for(k in nodes){
    var node=nodes[k];
    if(node.type=="Rect"){
      var x=get(node,"x"),y=get(node,"y"),w=get(node,"w"),h=get(node,"h"),r=get(node,"r");
      xml.push("<rect rx=\""+r+"\" ry=\""+r+"\""+autoSvgify(node,{r:null})+" />");
      box(x,y,x+w,y+h);
    }
    if(node.type=="CenterCirc"){
      var cx=get(node,"cx"),cy=get(node,"cy"),r=get(node,"r");
      xml.push("<circle "+autoSvgify(node,null)+" />");
      box(cx-r,cy-r,cx+r,cy+r);
    }
    if(node.type=="Circle"){
      var x=get(node,"x"),y=get(node,"y"),r=get(node,"r");
      xml.push("<circle cx=\""+(x+r)+"\" cy=\""+(y+r)+"\""+autoSvgify(node,{x:null,y:null})+" />");
      box(x,y,x+r+r,y+r+r);
    }
    if(node.type=="Oval"){
      var x=get(node,"x"),y=get(node,"y"),w=get(node,"w"),h=get(node,"h"),rx=w/2,ry=h/2;
      xml.push("<ellipse cx=\""+(x+rx)+"\" cy=\""+(y+ry)+"\" rx=\""+rx+"\" ry=\""+ry+"\""+autoSvgify(node,{x:null,y:null,w:null,h:null})+" />");
      box(x,y,x+w,y+h);
    }
    if(node.type=="Padding"){
      var x=get(node,"x"),y=get(node,"y"),w=get(node,"w"),h=get(node,"h");
      box(x,y,x+w,y+h);
    }
    if(node.type=="Polygon"){
      var points=get(node,"points"),pointStr="",polybox={left:Infinity,top:Infinity,right:-Infinity,bottom:-Infinity,};
      for(p in points){
        pointStr+=" "+points[p][0]+","+points[p][1];
        polybox.bottom=(polybox.bottom>points[p][1])?polybox.bottom:points[p][1];
        polybox.right=(polybox.right>points[p][0])?polybox.right:points[p][0];
        polybox.left=(polybox.left<points[p][0])?polybox.left:points[p][0];
        polybox.top=(polybox.top<points[p][1])?polybox.top:points[p][1];
      }
      xml.push("<polygon points=\""+pointStr+"\""+autoSvgify(node,{points:null})+" />");
      box(polybox.left,polybox.top,polybox.right,polybox.bottom);
    }
    if(node.type=="Segment"){
      var points=get(node,"points"),pointStr="",polybox={left:Infinity,top:Infinity,right:-Infinity,bottom:-Infinity};
      node.props.fill="transparent";
      for(p in points){
        pointStr+=" "+points[p][0]+" "+points[p][1];
        polybox.bottom=(polybox.bottom>points[p][1])?polybox.bottom:points[p][1];
        polybox.right=(polybox.right>points[p][0])?polybox.right:points[p][0];
        polybox.left=(polybox.left<points[p][0])?polybox.left:points[p][0];
        polybox.top=(polybox.top<points[p][1])?polybox.top:points[p][1];
      }
      xml.push("<polyline points=\""+pointStr+"\""+autoSvgify(node,{points:null})+" />");
      box(polybox.left,polybox.top,polybox.right,polybox.bottom);
    }
    if(node.type=="Path"){
      var points=get(node,"points"),edges=get(node,"edges"),polybox={
        left:points[0][0],top:points[0][1],right:points[0][0],bottom:points[0][1]
      },pathStr="M"+points[0][0]+" "+points[0][1];
      if(edges.length!=points.length && edges.length!=points.length-1) process.exit(errors.error("Invalid number of edges"));
      for(p in points){
        polybox.bottom=(polybox.bottom>points[p][1])?polybox.bottom:points[p][1];
        polybox.right=(polybox.right>points[p][0])?polybox.right:points[p][0];
        polybox.left=(polybox.left<points[p][0])?polybox.left:points[p][0];
        polybox.top=(polybox.top<points[p][1])?polybox.top:points[p][1];
      }
      for(var e=0;e<edges.length;e++){
        var p=points[e],p1=points[e+1>=points.length?0:e+1],edge=edges[e];
        pathStr+=" C"+(p[0]+edge[0])+" "+(p[1]+edge[1])+", "+
          (p1[0]+edge[2])+" "+(p1[1]+edge[3])+", "+
          p1[0]+" "+p1[1];
      }
      xml.push("<path d=\""+pathStr+"\""+autoSvgify(node,{points:null,edges:null})+" />");
      box(polybox.left,polybox.top,polybox.right,polybox.bottom);
    }
  }

  // Print
  console.log(header());
  for(x in xml) console.log(xml[x]);
  console.log("</svg>");
}
