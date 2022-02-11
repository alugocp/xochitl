const fs=require("fs");

var filesys={
  // Code Saving
  last:null,
  save:function(filename,text){
    if(filename){
      if(Array.isArray(filename)) filename=filename[0];
      fs.writeFileSync(filename,text);
    }
  },
  getWrittenCode:async function(contents){
    return await contents.executeJavaScript(
      "editor.getValue()",true
    ).then((result) => result);
  },
  openFile:function(contents,filename){
    return new Promise(async function(resolve,reject){
      if(filename){
        if(Array.isArray(filename)) filename=filename[0];
        if(fs.existsSync(filename)){
          var code=fs.readFileSync(filename).toString();
          resolve(await contents.executeJavaScript(
            "editor.getDoc().setValue(\""+code.replace(/\n/g,"\\n")+"\")",true
          ));
        }
      }
      reject();
    });
  },
  blank:async function(contents){
    await contents.executeJavaScript("editor.getDoc().setValue(\"~ A pretty blank slate, just for you :)\")",true);
  },

  // SVG
  displaySvg:async function(contents,text){
    await contents.executeJavaScript(
      "document.getElementById('svg').innerHTML='"+text+"'",true
    );
  },
  exportSvg:async function(contents,filename){
    var svg=await contents.executeJavaScript("document.getElementById('svg').innerHTML",true);
    fs.writeFileSync(filename,svg);
  }
}
module.exports=filesys;
