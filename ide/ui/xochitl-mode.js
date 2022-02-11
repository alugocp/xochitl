CodeMirror.defineSimpleMode("xochitl",{
  start:[
    {regex:/~\//,token:"comment",next:"comment"},
    {regex:/~.*/,token:"comment"},
    {regex:/def|let|meta/,token:"keyword"},
    {regex:/(@mixin) ([\.\/_\-a-zA-Z0-9]+)/,token:["keyword","string"]},
    {regex:/@[a-zA-Z][a-zA-Z0-9]*/,token:"keyword"},
    {regex:/[\-\+\/\*=:%]+/,token:"operator"},
    {regex:/([0-9]+)(.[0-9]+)?/,token:"number"},
    {regex: /[a-z$][\w$]*/,token:"variable"}
  ],
  comment:[
    {regex:/.*?\/~/,token:"comment",next:"start"},
    {regex:/.*/,token:"comment"}
  ],
  meta:{
    dontIndentStates:["comment"],
    lineComment:"~"
  }
})
