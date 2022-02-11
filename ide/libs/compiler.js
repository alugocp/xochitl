const child_process=require("child_process");

module.exports=async function(filename,callback,debug){
  var child=child_process.spawnSync("node",["../compiler",filename,"--no-color"]);
  var out=child.stdout.toString(),err=child.stderr.toString();
  if(debug) console.log(err);
  callback(out.length?
    out.replace(/\n/g,""):
    "<div>"+err.replace(/\n/g,"<br>")+"</div>"
  );
}
