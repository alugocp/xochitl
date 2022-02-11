var corelib={
  "Padding":{"x":0,"y":0,"w":null,"h":null},
  "Rect":{"x":null,"y":null,"w":null,"h":null,"r":0},
  "Oval":{"x":null,"y":null,"w":null,"h":null},
  "CenterCirc":{"cx":null,"cy":null,"r":null},
  "Circle":{"x":null,"y":null,"r":null},
  "Polygon":{"points":null},
  "Segment":{"points":null},
  "Path":{"edges":null,"points":null}
};
var universal={
  "turn":[0,0,0],
  "stroke":[0,0,0],
  "fill":[0,0,0],
  "opacity":1,
  "sw":0,
  "z":10
};

module.exports=function(){
  var procs={};
  for(k in corelib){
    procs[k]={
      properties:[],
      core:true,
      name:k
    };
    for(u in universal) procs[k].properties[u]=universal[u];
    for(c in corelib[k]) procs[k].properties[c]=corelib[k][c];
  }
   /*procs[k]={
    properties:corelib[k],
    core:true,
    name:k
  };*/
  return procs;
}
