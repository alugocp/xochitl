const {Proc,Scope,Formula,Tuple,Accessor,TupleAccessor}=require("./abstractions.js");
const corelib=require("./core-lib.js");
const errors=require("./errors.js");

// Hidden API layer
function toPropHash(args,scope){
  var hash={};
  for(a in args) hash[args[a].children[0].text]=formulize(args[a].children[2],scope);
  return hash;
}
function getProps(scope,name){
  var parent=getScope(scope,name),props={};
  if(!parent.isNode) process.exit(errors.error("Cannot access values from non-node "+name));
  for(a in parent.properties) props[a]=parent.properties[a];
  return props;
}
function formulize(node,scope){
  if(node.type=="parens") return formulize(node.children[1],scope);
  if(node.type.substring(0,4)=="math") return new Formula(
    formulize(node.children[0],scope),
    node.children[1].text,
    formulize(node.children[2],scope)
  );
  if(node.type=="tuple"){
    var tuple=new Tuple(),kids=node.children;
    for(var a=0;a<node.childCount;a++) if(kids[a].text!="<" && kids[a].text!=">" && kids[a].text!=",") tuple.add(formulize(kids[a],scope));
    return tuple;
  }
  if(node.type=="tuple_access") return new TupleAccessor(formulize(node.children[0]),node.children[2].text);
  if(node.type=="accessor") return new Accessor(node.children[0].text,node.children[2].text);
  if(node.type=="numeric") return parseFloat(node.text);
  if(node.type=="identifier") return node.text;
  process.exit(errors.error("Cannot process value "+node.text));
}
function getScope(scope,name){
  while(scope.parent && scope.name!=name) scope=scope.parent;
  if(scope.name==name) return scope;
  process.exit(errors.error("Could not find referenced namespace "+name));
}

var hash=new Scope(":root:");
var cores=[];
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
    if(name && scope.has(name)) process.exit(errors.error("Overloaded namespace "+name));
    var label=name?name:anon_index++,props=[];
    var procScope=new Scope(label,scope,proc);
    var procProps=procs[proc].properties;
    for(k in procProps) procScope.setProp(k,(procProps[k] && procProps[k].type)?formulize(procProps[k],scope):procProps[k]);
    if(parent) for(k in procProps) procScope.setProp(k,new Accessor(parent,k));
    props=toPropHash(args,scope);
    for(k in props){
      if(!procScope.hasProp(k)) process.exit(errors.error("Process "+proc+" does not have argument "+k));
      procScope.setProp(k,props[k]);
    }
    var comps=procs[proc].components;
    for(a in comps) drawgraph.graphifyNode(comps[a],procScope);
    if(drawgraph.isCore(proc)) cores.push(procScope);
  },
  graphifyNode:function(n,scope){
    if(!scope) scope=hash;
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
    if(scope.has(name) || scope.hasProp(name)) process.exit(errors.error("Overloaded constant namespace "+name));
    scope.set(name,formulize(formula,scope));
  },
  getNodes:() => hash,
  getProcs:() => procs,
  getCores:() => cores
}
module.exports=drawgraph;
