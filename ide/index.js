const {app,BrowserWindow,Menu,MenuItem,dialog}=require("electron");
const compile=require("./libs/compiler.js");
const files=require("./libs/file-sys.js");
const {resolve}=require("path");
const {format}=require("url");
const debug=(process.argv[2]=="--debug");

// Define app properties
app.on("window-all-closed",app.quit);
app.once("ready",()=>{

  // Create window
  var window=new BrowserWindow({
    title:"Xochitl",
    width:1400,
    height:700,
    show:false
  });
  var contents=window.webContents;
  window.once("ready-to-show",window.show);
  window.loadURL(format({
    pathname:resolve(__dirname,"ui","index.html"),
    protocol:"file:",
    slashes:true
  }));

  // Create app menu
  var menu=new Menu();
  menu.append(new MenuItem({
    label:"File",
    submenu:[
      {label:"New",
      accelerator:"CmdOrCtrl+N",
      click:async function(){
        files.last=null;
        files.blank(contents);
      }},
      {label:"Save",
      accelerator:"CmdOrCtrl+S",
      click:async function(){
        if(!files.last) var selected=dialog.showSaveDialog(window,{defaultPath:"../src",filters:[{
          name:"Xochitl",extensions:["xtl"]
        }]});
        if(files.last || selected){
          if(selected) files.last=selected;
          var code=await files.getWrittenCode(contents);
          files.save(files.last,code);
          compile(files.last,(output) => files.displaySvg(contents,output),debug);
        }
      }},
      {label:"Save As",
      accelerator:"CmdOrCtrl+Shift+S",
      click:async function(){
        var selected=dialog.showSaveDialog(window,{defaultPath:"../src",filters:[{
          name:"Xochitl",extensions:["xtl"]
        }]});
        if(selected){
          files.last=selected;
          var code=await files.getWrittenCode(contents);
          files.save(files.last,code);
          compile(files.last,(output) => files.displaySvg(contents,output),debug);
        }
      }},
      {label:"Open",
      accelerator:"CmdOrCtrl+O",
      click:async function(){
        var selected=dialog.showOpenDialog(window,{defaultPath:"../src",properties:["openFile"],filters:[{
          name:"Xochitl",extensions:["xtl"]
        }]});
        if(selected) await files.openFile(contents,files.last=selected);
        compile(files.last,(output) => files.displaySvg(contents,output),debug);
      }}
    ]
  }));
  menu.append(new MenuItem({
    label:"Code",
    submenu:[
      {label:"Run",
      accelerator:"CmdOrCtrl+R",
      click:function(){
        if(files.last) compile(files.last,(output) => files.displaySvg(contents,output),debug);
      }}
    ]
  }));
  menu.append(new MenuItem({
    label:"Image",
    submenu:[
      {label:"Export",
      accelerator:"CmdOrCtrl+E",
      click:function(){
        var selected=dialog.showSaveDialog(window,{defaultPath:"../src",filters:[{
          name:"SVG",extensions: ["svg"]
        }]});
        if(selected) files.exportSvg(contents,selected);
      }}
    ]
  }));
  Menu.setApplicationMenu(menu);
  files.blank(contents);
  files.last=null;
});
