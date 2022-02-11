const Acyclic=require("./cycle-detect.js");
const errors=require("./errors.js");

function checkUnsetValues(nodes){
  var keys=Object.keys(nodes);
  for(var a=0;a<keys.length;a++){
    var k=keys[a];
    if(nodes[k]!=0 && !nodes[k]) process.exit(errors.error("You have unset values"));
    if(Array.isArray(nodes[k])) checkUnsetValues(nodes[k]);
  }
}
function pullReference(nodes,k,detector){
  detector.check(k);
  if(Array.isArray(nodes[k])) nodes[k]=deformulize(nodes,nodes[k],detector);
  else if(typeof nodes[k]=="string") nodes[k]=pullReference(nodes,nodes[k],detector);
  return nodes[k];
}
function deformulize(nodes,formula,detector){
  if(Array.isArray(formula)){
    var sign=formula[1];
    if(sign=="+") return deformulize(nodes,formula[0],detector)+deformulize(nodes,formula[2],detector);
    if(sign=="-") return deformulize(nodes,formula[0],detector)-deformulize(nodes,formula[2],detector);
    if(sign=="*") return deformulize(nodes,formula[0],detector)*deformulize(nodes,formula[2],detector);
    if(sign=="/"){
      var second=deformulize(nodes,formula[2],detector);
      if(second==0) process.exit(errors.error("Cannot divide by zero"));
      return deformulize(nodes,formula[0],detector)/second;
    }
    if(sign=="%") return deformulize(nodes,formula[0],detector)%deformulize(nodes,formula[2],detector);
    if(sign=="**") return deformulize(nodes,formula[0],detector)**deformulize(nodes,formula[2],detector);
  }
  if(typeof formula=="string") return pullReference(nodes,formula,detector);
  return formula;
}

module.exports=function(draw){
  var nodes=draw.getNodes();
  checkUnsetValues(nodes);
  for(k in nodes) nodes[k]=pullReference(nodes,k,new Acyclic("Cyclical draw graph detected"));
}
