const corelib=require("./core-lib.js");
const errors=require("./errors.js");

// Helper classes
function Node(proc){
  this.properties={};
  var props=proc.properties;
  for(p in props) this.properties[props[p]]=null;
  this.name=proc.name;
}
function Proc(properties,components){
  this.components=components;
  this.properties=properties;
}

// Hidden API layer
function toPropHash(args,scope){
  var hash={};
  for(a in args){
    var kids=args[a].children;
    hash[kids[0].text]=formulize(kids[2],scope);
  }
  return hash;
}
function getProps(name){
  if(hash[name]) return hash[name].properties;
  var props={};
  for(k in hash){
    var i=k.indexOf(name+".");
    if(!i) props[k.substring(i+name.length+1)]=hash[k];
  }
  return props;
}
function hasProp(label,prop){
  if(hash[label]) return Object.keys(hash[label].properties).indexOf(prop)!=-1;
  return Object.keys(hash).indexOf(label+"."+prop)!=-1;
}
function setProp(label,prop,value){
  if(hash[label]) hash[label].properties[prop]=value;
  else hash[label+"."+prop]=value;
}
function formulize(node,scope){
  if(node.type=="parens") return formulize(node.children[1],scope);
  if(node.type.substring(0,4)=="math") return [
    formulize(node.children[0],scope),
    node.children[1].text,
    formulize(node.children[2],scope)
  ];
  if(node.type=="identifier") return scope?findScoped(scope+node.text):node.text;
  if(node.type=="numeric") return parseInt(node.text);
}
function findScoped(name){
  var scope=name.split(".."),thing=scope.pop();
  while(!Object.keys(hash).includes(name)){
    if(!scope.length) process.exit(errors.error("Could not find variable "+thing));
    name=name.replace(/\.\./g,".");
    if(hash[name]) return name;
    scope.pop();
    name=scope.length?scope.join("..")+".."+thing:thing;
  }
  return name;
}

var hash={};
var cores={};
var anon_index=0;
var procs=corelib();
var drawgraph={
  addProc:function(name,properties,components){
    if(procs[name]) process.exit(errors.error("Re-definition of proccess "+name));
    procs[name]=new Proc(properties,components);
  },
  isCore:(procname) => procs[procname] && procs[procname].core,
  addNode:function(name,proc,args,parent,scope){
    if(!procs[proc]) process.exit(errors.error("Non-existent proccess "+proc));
    if(name && hash[name]) process.exit(errors.error("Overloaded namespace "+name));
    var label=name?name:anon_index++,props=[];
    if(scope) label=scope+label;
    var procProps=procs[proc].properties;
    for(var a=0;a<procProps.length;a++) hash[label+"."+procProps[a]]=null;
    if(parent){
      if(scope) parent=scope+parent;
      props=getProps(parent);
      for(k in props){
        if(hasProp(label,k)) setProp(label,k,props[k]);
      }
    }
    props=toPropHash(args,label+"..");
    for(k in props){
      if(!hasProp(label,k)) process.exit(errors.error("Process "+proc+" does not have argument "+k));
      if(hash[label+"."+k]) process.exit(errors.error("Multiple definitions of argument "+k));
      setProp(label,k,props[k]);
    }
    var comps=procs[proc].components;
    for(a in comps) drawgraph.graphifyNode(comps[a],label+"..");
    if(drawgraph.isCore(proc)) cores[label]=proc;
  },
  graphifyNode:function(n,scope){
    if(n.type=="call"){
      var proc=n.children[0].text;
      var name=(n.children[1].type=="identifier")?n.children[1].text:undefined;
      var args=[],parent=undefined;
      for(var a=0;a<n.children.length;a++){
        if(n.children[a].type=="argument") args.push(n.children[a]);
        if(n.children[a].type=="parent") parent=n.children[a].children[1].text;
      }
      drawgraph.addNode(name,proc,args,parent,scope);
    }else if(n.type=="const_def") drawgraph.addConst(n.children[1].text,n.children[3],scope);
  },
  addConst:function(name,formula,scope){
    if(scope) name=scope+name;
    if(hash[name]!=undefined) process.exit(errors.error("Overloaded namespace "+name));
    hash[name]=formulize(formula,scope);
  },
  getNodes:() => hash,
  getProcs:() => procs,
  getCores:() => cores
}
module.exports=drawgraph;
