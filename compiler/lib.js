const errors=require("./libs/errors.js");
const fs=require("fs");

// Set up parser
const parser=new require("tree-sitter")();
parser.setLanguage(
  require("../tree-sitter-xochitl")
);

// Hidden-layer functions
function mutify(tree,parent){
  var node={};
  if(parent) node.parent=parent;
  else node.metas={};
  node.text=tree.text;
  node.type=tree.type;
  node.startPosition=tree.startPosition;
  node.endPosition=tree.endPosition;
  node.childCount=tree.childCount;
  node.children=[];
  for(var a=0;a<tree.childCount;a++) node.children.push(mutify(tree.children[a],node));
  return node;
}

// Exports
module.exports={
  fromFile:function(src){
    try{
      var code=fs.readFileSync(src).toString();
    }catch{
      errors.error("Could not find file "+src);
      process.exit();
    }
    var t=mutify(parser.parse(code).rootNode);
    t.src=src;
    return t;
  },
  getLine:(n) => n.startPosition.row+1
}
