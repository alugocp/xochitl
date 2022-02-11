const Acyclic=require("./cycle-detect.js");
const errors=require("./errors.js");

// Check unset values
function checkUnsetValues(scope){
  for(k in scope.hash){
    if(scope.get(k)==null) process.exit(errors.error("You have unset values"));
    if(scope.get(k).isScope) checkUnsetValues(scope.get(k));
  }
  for(k in scope.props){
    if(scope.getProp(k)==null) process.exit(errors.error("You have unset property values"));
    if(scope.getProp(k).isScope) process.exit(errors.error("Cannot pass node into another node"));
  }
}

// Resolve references
function traverseScope(scope){
  for(k in scope.hash){
    if(scope.get(k).isScope) traverseScope(scope.get(k));
    else scope.set(k,pullReference(scope,k,new Acyclic("Cyclical draw graph detected")));
  }
  for(k in scope.props) scope.setProp(k,pullReference(scope,k,new Acyclic("Cyclical draw graph detected")));
}
function pullReference(scope,k,detector){
  if(scope.hasProp(k)){
    detector.checkScoped(scope,k);
    var value=scope.getProp(k);
    if(value.deformulize) scope.setProp(k,deformulize(scope.parent,value,detector));
    else if(typeof value=="string"){
      var outer=findOutOfScope(scope.parent,value);
      scope.setProp(k,deformulize(outer[0],outer[1],detector));
    }
    return scope.getProp(k);
  }
  var value=scope.get(k);
  detector.checkScoped(scope,k);
  if(value.deformulize) scope.set(k,deformulize(scope,value,detector));
  else if(typeof value=="string"){
    var outer=findOutOfScope(scope,value);
    scope.set(k,deformulize(outer[0],outer[1],detector));
  }
  return scope.get(k);
}
function findOutOfScope(scope,name){
  while(scope.parent && !scope.has(name) && !scope.hasProp(name)) scope=scope.parent;
  if(scope.hasProp(name)) return [scope,scope.getProp(name)];
  if(scope.has(name)) return [scope,scope.get(name)];
  process.exit(errors.error("Could not find variable "+name));
}
function deformulize(scope,f,d){
  if(f.isFormula){
    var op=f.operator;
    if(op=="+") return deformulize(scope,f.first,d.branch())+deformulize(scope,f.second,d.branch());
    if(op=="*") return deformulize(scope,f.first,d.branch())*deformulize(scope,f.second,d.branch());
    if(op=="**") return deformulize(scope,f.first,d.branch())**deformulize(scope,f.second,d.branch());
    if(op=="-"){
      var first=deformulize(scope,f.first,d.branch()),second=deformulize(scope,f.second,d.branch());
      //if(second>first) process.exit(errors.error("Negative numbers are not allowed in Xochitl"));
      return first-second;
    }
    if(op=="/"){
      var second=deformulize(scope,f.second,d.branch());
      if(second==0) process.exit(errors.error("Cannot divide by zero"));
      return deformulize(scope,f.first,d.branch())/second;
    }
    if(op=="%"){
      var first=deformulize(scope,f.first,d.branch()),second=deformulize(scope,f.second,d.branch());
      if(first<=0 || second<=0) process.exit(errors.error("Modulus arguments must be positive numerics"));
      while(first>second) first-=second;
      return first;
    }
  }
  if(f.isTuple){
    for(var a=0;a<f.elements.length;a++) f.elements[a]=deformulize(scope,f.elements[a],d.branch());
    return f.elements;
  }
  if(f.isAccessor){
    var node=findOutOfScope(scope,f.target)[1];
    if(!node.hasProp(f.prop)) process.exit(errors.error("Referenced node "+f.target+" does not have property "+f.prop));
    return pullReference(node,f.prop,d);
  }
  if(f.isTupleAccessor){
    var tuple=deformulize(scope,f.tuple,d);
    if(!Array.isArray(tuple)) process.exit(errors.error("Cannot perform tuple access on non-tuple entity"));
    if(f.index>=tuple.length) process.exit(errors.error("Index "+f.index+" is too large for the given "+tuple.length+"-tuple"));
    return tuple[f.index];
  }
  if(typeof f=="string") return pullReference(findOutOfScope(scope,f)[0],f,d);
  return f;
}

// Sort by z index
function sortCores(nodes){
  for(var a=1;a<nodes.length;a++){
    var b=a;
    while(b>0 && nodes[b].props.z<nodes[b-1].props.z){
      var temp=nodes[b-1];
      nodes[b-1]=nodes[b];
      nodes[b--]=temp;
    }
  }
}

// Exports
module.exports=function(draw){
  var root=draw.getNodes();
  checkUnsetValues(root);
  traverseScope(root);
  sortCores(draw.getCores());
}
