const errors=require("./errors.js");

function Acyclic(msg){
  this.elements=[];
  this.msg=msg;
  this.check=function(e){
    if(this.elements.includes(e)) process.exit(errors.error(this.msg));
    this.elements.push(e);
  }
  this.checkScoped=function(scope,e){
    this.check(scope.getPath()+" "+e);
  }
  this.branch=function(){
    var acyc=new Acyclic(this.msg);
    for(var a=0;a<this.elements.length;a++) acyc.elements.push(this.elements[a]);
    return acyc;
  }
}
module.exports=Acyclic;
