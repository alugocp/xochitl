const Acyclic=require("./cycle-detect.js");
const errors=require("./errors.js");
const color=require("colors");
const lib=require("../lib.js");
const path=require("path");

// Tree APIs
function traverse(node,f){
  if(node.type=="code" || f(node)){
    for(var a=0;a<node.childCount;a++) traverse(node.children[a],f);
  }
}
function addSibling(node,child){
  node.parent.children.splice(node.parent.children.indexOf(node),0,child);
  child.parent=node.parent;
  node.parent.childCount++;
}
function remove(node){
  node.parent.children.splice(node.parent.children.indexOf(node),1);
  node.parent.childCount--;
}

// Exports
var codetree={
  doErrors:function(tree){
    traverse(tree,function(n){
      if(n.type=="ERROR"){
        errors.error("Misformed Xochitl code");
        console.error("at row",lib.getLine(n),"and column",n.startPosition.column);
        console.error("in file",tree.src);
        console.error(n.text);
      }
      return true;
    });
  },
  doMixins:function(tree){
    traverse(tree,function(n){
      if(n.type=="mixin"){
        var msrc=n.children[1].text+".xtl";
        if(msrc==tree.src) process.exit(errors.error("Reflexive mixin at line "+lib.getLine(n)));
        if(n.children[0].text=="@import") msrc="/home/alexander/Desktop/folder/xochitl/lib/"+msrc;
        var mtree=lib.fromFile(msrc);
        codetree.doErrors(mtree);
        if(errors.hasErrors()) process.exit();
        codetree.doMixins(mtree);
        codetree.doMetas(mtree);
        for(var a=0;a<mtree.childCount;a++) addSibling(n,mtree.children[a]);
        remove(n);
      }
      return n.type=="meta_def" || n.type=="proc_def";
    });
  },
  doMetas:function(tree){
    traverse(tree,function(n){
      if(n.type=="meta_def"){
        var name=n.children[1];
        tree.metas[name]=[];
        for(var a=3;a<n.childCount-1;a++){
          tree.metas[name].push(n.children[a]);
        }
      }
    });
    traverse(tree,function(n){
      if(n.type=="meta"){
        var meta=tree.metas[n.children[1]];
        if(!meta) process.exit(errors.error("Referenced a non-existent meta"));
        for(var a=0;a<meta.length;a++) addSibling(n,meta[a]);
        remove(n);
      }
    });
  },
  doProcDefs:function(draw,tree){
    traverse(tree,function(n){
      if(n.type=="proc_def"){
        var props={},comps=[];
        var kids=n.children;
        for(var a=0;a<kids.length;a++){
          if(kids[a].type=="const_def" || kids[a].type=="call") comps.push(kids[a]);
          if(kids[a].type=="param") props[kids[a].children[0].text]=(
            kids[a].children.length==3?
            kids[a].children[2]:null
          );
        }
        draw.addProc(n.children[1].text,props,comps);
      }
    });
  },
  checkProcDefs:function(draw){
    var procs=draw.getProcs();
    var helper=function(procname,cycle){
      if(draw.isCore(procname)) return;
      var proc=procs[procname];
      cycle.check(procname);
      for(var a=0;a<proc.components.length;a++){
        if(proc.components[a].type=="call") helper(
          proc.components[a].children[0].text,
          cycle.branch()
        );
      }
    }
    for(k in procs) helper(k,new Acyclic("Cyclic proc calls detected"));
  },
  doNodes:function(draw,tree){
    traverse(tree,function(n){
      draw.graphifyNode(n);
    });
  }
}
module.exports=codetree;
