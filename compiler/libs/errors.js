const colors=require("colors");

var errors=0;
module.exports={
  hasErrors:() => errors,
  error:function(message){
    console.error("Xochitl:".red,message);
    errors++;
  },
  success:function(message){
    console.error("Xochitl:".green,message);
  }
}
