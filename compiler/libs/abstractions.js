module.exports={
  Proc:function(properties,components){
    this.components=components;
    this.properties=properties;
  },
  Scope:function(name,parent,type){
    this.props={};
    this.hash={};
    this.name=name;
    this.type=type;
    this.isScope=true;
    this.parent=parent;
    if(parent) this.parent.set(name,this);
    this.has=(key) => Object.keys(this.hash).includes(key);
    this.set=(key,value) => this.hash[key]=value;
    this.get=(key) => this.hash[key];
    this.hasProp=(key) => Object.keys(this.props).includes(key);
    this.setProp=(key,value) => this.props[key]=value;
    this.getProp=(key) => this.props[key];
    this.getPath=function(){
      var scope=parent,path=name;
      while(scope){
        path=scope.name+"."+path;
        scope=scope.parent;
      }
      return path;
    }
  },
  Formula:function(first,operator,second){
    this.deformulize=true;
    this.isFormula=true;
    this.first=first;
    this.operator=operator;
    this.second=second;
  },
  Tuple:function(){
    this.deformulize=true;
    this.isTuple=true;
    this.elements=[];
    this.add=(e) => this.elements.push(e);
  },
  Accessor:function(target,prop){
    this.deformulize=true;
    this.isAccessor=true;
    this.target=target;
    this.prop=prop;
  },
  TupleAccessor:function(tuple,index){
    this.deformulize=true;
    this.isTupleAccessor=true;
    this.tuple=tuple;
    this.index=index;
  }
}
