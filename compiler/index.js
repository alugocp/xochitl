const finalize=require("./libs/finalize.js");
const draw=require("./libs/draw-graph.js");
const code=require("./libs/code-tree.js");
const svgify=require("./libs/svgify.js");
const errors=require("./libs/errors.js");
const lib=require("./lib.js");
const fs=require("fs");

// Setup file output
var index,args=process.argv.splice(2);
if((index=args.indexOf("-o"))!=-1){
  if(args.length<=index+1) process.exit(errors.error("No output file specified"));
  var output=fs.createWriteStream(args[index+1]);
  process.stdout.write=output.write.bind(output);
}
if(!args.length) process.exit(errors.error("No input file specified"));

// Formation and metacode pass
var tree=lib.fromFile(args[0]);
code.doErrors(tree);
if(errors.hasErrors()) process.exit();
code.doMixins(tree);
code.doMetas(tree);

// Draw graph pass
code.doProcDefs(draw,tree);
code.checkProcDefs(draw);
code.doNodes(draw,tree);

// Finalization
finalize(draw);
svgify(draw);
