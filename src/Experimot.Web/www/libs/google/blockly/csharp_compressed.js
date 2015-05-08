// Do not edit this file; automatically generated by build.py.
"use strict";

Blockly.CSharp=new Blockly.Generator("CSharp");Blockly.CSharp.addReservedWords("abstract,as,base,bool,break,byte,case,catch,char,checked,class,const,continue,decimal,default,delegate,do,double,else,enum,event,explicit,extern,false,finally,fixed,float,for,foreach,goto,if,implicit,in,int,interface,internal,is,lock,long,namespace,new,null,object,operator,out,override,params,private,protected,public,readonly,ref,return,sbyte,sealed,short,sizeof,stackalloc,static,string,struct,switch,this,throw,true,try,typeof,uint,ulong,unchecked,unsafe,ushort,using,virtual,void,volatile,while");
Blockly.CSharp.ORDER_ATOMIC=0;Blockly.CSharp.ORDER_MEMBER=1;Blockly.CSharp.ORDER_NEW=1;Blockly.CSharp.ORDER_TYPEOF=1;Blockly.CSharp.ORDER_FUNCTION_CALL=1;Blockly.CSharp.ORDER_INCREMENT=1;Blockly.CSharp.ORDER_DECREMENT=1;Blockly.CSharp.ORDER_LOGICAL_NOT=2;Blockly.CSharp.ORDER_BITWISE_NOT=2;Blockly.CSharp.ORDER_UNARY_PLUS=2;Blockly.CSharp.ORDER_UNARY_NEGATION=2;Blockly.CSharp.ORDER_MULTIPLICATION=3;Blockly.CSharp.ORDER_DIVISION=3;Blockly.CSharp.ORDER_MODULUS=3;Blockly.CSharp.ORDER_ADDITION=4;
Blockly.CSharp.ORDER_SUBTRACTION=4;Blockly.CSharp.ORDER_BITWISE_SHIFT=5;Blockly.CSharp.ORDER_RELATIONAL=6;Blockly.CSharp.ORDER_EQUALITY=7;Blockly.CSharp.ORDER_BITWISE_AND=8;Blockly.CSharp.ORDER_BITWISE_XOR=9;Blockly.CSharp.ORDER_BITWISE_OR=10;Blockly.CSharp.ORDER_LOGICAL_AND=11;Blockly.CSharp.ORDER_LOGICAL_OR=12;Blockly.CSharp.ORDER_CONDITIONAL=13;Blockly.CSharp.ORDER_ASSIGNMENT=14;Blockly.CSharp.ORDER_COMMA=15;Blockly.CSharp.ORDER_NONE=99;Blockly.CSharp.INFINITE_LOOP_TRAP=null;
Blockly.CSharp.init=function(a){Blockly.CSharp.definitions_={};if(Blockly.Variables){Blockly.CSharp.variableDB_?Blockly.CSharp.variableDB_.reset():Blockly.CSharp.variableDB_=new Blockly.Names(Blockly.CSharp.RESERVED_WORDS_);var b=[];a=Blockly.Variables.allVariables(a);for(var c=0;c<a.length;c++)b[c]="dynamic "+Blockly.CSharp.variableDB_.getName(a[c],Blockly.Variables.NAME_TYPE)+";";Blockly.CSharp.definitions_.variables=b.join("\n")}};
Blockly.CSharp.finish=function(a){var b=[],c;for(c in Blockly.CSharp.definitions_)b.push(Blockly.CSharp.definitions_[c]);return b.join("\n\n")+"\n\n\n"+a};Blockly.CSharp.scrubNakedValue=function(a){return a+";\n"};Blockly.CSharp.quote_=function(a){return goog.string.quote(a)};
Blockly.CSharp.scrub_=function(a,b){if(null===b)return"";var c="";if(!a.outputConnection||!a.outputConnection.targetConnection){var d=a.getCommentText();d&&(c+=this.prefixLines(d,"// ")+"\n");for(var e=0;e<a.inputList.length;e++)a.inputList[e].type==Blockly.INPUT_VALUE&&(d=a.inputList[e].connection.targetBlock())&&(d=this.allNestedComments(d))&&(c+=this.prefixLines(d,"// "))}e=a.nextConnection&&a.nextConnection.targetBlock();e=this.blockToCode(e);return c+b+e};Blockly.CSharp.behavior_sleek=function(a){var b=a.getFieldValue("behavior_name"),c=a.getFieldValue("triggers"),d=a.getFieldValue("confidence_levels"),e=Blockly.CSharp.statementToCode(a,"DO");a=a.getFieldValue("priorities");var e=e.split(","),g="",g="{ name : '"+b+"' , trigger  : '"+c+"' , confidence  : '"+d+"' , priority : '"+a+"' , actions: [";e.forEach(function(a,b,c){a&&a.length&&(0!==b&&(g+=", "),g+="{ name : '"+a.trim()+"' }")});return g+="] }"};
Blockly.CSharp.behavior=function(a){var b=a.getFieldValue("NAME"),c=Blockly.CSharp.valueToCode(a,"when",Blockly.CSharp.ORDER_ATOMIC),d=Blockly.CSharp.valueToCode(a,"priority",Blockly.CSharp.ORDER_ATOMIC),e=Blockly.CSharp.statementToCode(a,"do"),e=Blockly.CSharp.addLoopTrap(e,a.id)||Blockly.CSharp.PASS;console.log(e);a=e.split(",");var g="",g="{ name : '"+b+"' , trigger  : '"+c+"' , priority : '"+d+"' , actions: [";a.forEach(function(a,b,c){a&&a.length&&(0!==b&&(g+=", "),g+="{ name : '"+a.trim()+"' }")});
g+="] }";return[g,Blockly.CSharp.ORDER_ATOMIC]};Blockly.CSharp.robot_action=function(a){return a.getFieldValue("actions")+","};Blockly.CSharp.trigger=function(a){return[a.getFieldValue("triggers"),Blockly.CSharp.ORDER_ATOMIC]};Blockly.CSharp.priority=function(a){return[a.getFieldValue("priorities"),Blockly.CSharp.ORDER_ATOMIC]};Blockly.CSharp.colour={};Blockly.CSharp.colour_picker=function(a){return['ColorTranslator.FromHtml("'+a.getFieldValue("COLOUR")+'")',Blockly.CSharp.ORDER_ATOMIC]};
Blockly.CSharp.colour_random=function(a){if(!Blockly.CSharp.definitions_.colour_random){a=Blockly.CSharp.variableDB_.getDistinctName("colour_random",Blockly.Generator.NAME_TYPE);Blockly.CSharp.colour_random.functionName=a;var b=[];b.push("var "+a+" = new Func<Color>(() => {");b.push("  var random = new Random();");b.push("  var res = Color.FromArgb(1, random.Next(256), random.Next(256), random.Next(256));");b.push("  return res;");b.push("});");Blockly.CSharp.definitions_.colour_random=b.join("\n")}return[Blockly.CSharp.colour_random.functionName+
"()",Blockly.CSharp.ORDER_FUNCTION_CALL]};
Blockly.CSharp.colour_rgb=function(a){var b=Blockly.CSharp.valueToCode(a,"RED",Blockly.CSharp.ORDER_COMMA)||0,c=Blockly.CSharp.valueToCode(a,"GREEN",Blockly.CSharp.ORDER_COMMA)||0;a=Blockly.CSharp.valueToCode(a,"BLUE",Blockly.CSharp.ORDER_COMMA)||0;if(!Blockly.CSharp.definitions_.colour_rgb){var d=Blockly.CSharp.variableDB_.getDistinctName("colour_rgb",Blockly.Generator.NAME_TYPE);Blockly.CSharp.colour_rgb.functionName=d;var e=[];e.push("var "+d+" = new Func<dynamic, dynamic, dynamic, Color>((r, g, b) => {");e.push("  r = (int)Math.Round(Math.Max(Math.Min((int)r, 100), 0) * 2.55);");
e.push("  g = (int)Math.Round(Math.Max(Math.Min((int)g, 100), 0) * 2.55);");e.push("  b = (int)Math.Round(Math.Max(Math.Min((int)b, 100), 0) * 2.55);");e.push("  var res = Color.FromArgb(1, r, g, b);");e.push("  return res;");e.push("});");Blockly.CSharp.definitions_.colour_rgb=e.join("\n")}return[Blockly.CSharp.colour_rgb.functionName+"("+b+", "+c+", "+a+")",Blockly.CSharp.ORDER_FUNCTION_CALL]};
Blockly.CSharp.colour_blend=function(a){var b=Blockly.CSharp.valueToCode(a,"COLOUR1",Blockly.CSharp.ORDER_COMMA)||"Color.Black",c=Blockly.CSharp.valueToCode(a,"COLOUR2",Blockly.CSharp.ORDER_COMMA)||"Color.Black";a=Blockly.CSharp.valueToCode(a,"RATIO",Blockly.CSharp.ORDER_COMMA)||.5;if(!Blockly.CSharp.definitions_.colour_blend){var d=Blockly.CSharp.variableDB_.getDistinctName("colour_blend",Blockly.Generator.NAME_TYPE);Blockly.CSharp.colour_blend.functionName=d;var e=[];e.push("var "+d+" = new Func<Color, Color, double, Color>((c1, c2, ratio) => {");
e.push("  ratio = Math.Max(Math.Min((double)ratio, 1), 0);");e.push("  var r = (int)Math.Round(c1.R * (1 - ratio) + c2.R * ratio);");e.push("  var g = (int)Math.Round(c1.G * (1 - ratio) + c2.G * ratio);");e.push("  var b = (int)Math.Round(c1.B * (1 - ratio) + c2.B * ratio);");e.push("  var res = Color.FromArgb(1, r, g, b);");e.push("  return res;");e.push("});");Blockly.CSharp.definitions_.colour_blend=e.join("\n")}return[Blockly.CSharp.colour_blend.functionName+"("+b+", "+c+", "+a+")",Blockly.CSharp.ORDER_FUNCTION_CALL]};Blockly.CSharp.lists={};Blockly.CSharp.lists_create_empty=function(a){return["null",Blockly.CSharp.ORDER_ATOMIC]};Blockly.CSharp.lists_create_with=function(a){for(var b=Array(a.itemCount_),c=0;c<a.itemCount_;c++)b[c]=Blockly.CSharp.valueToCode(a,"ADD"+c,Blockly.CSharp.ORDER_COMMA)||"null";b="new List<dynamic> {"+b.join(", ")+"}";return[b,Blockly.CSharp.ORDER_ATOMIC]};
Blockly.CSharp.lists_repeat=function(a){if(!Blockly.CSharp.definitions_.lists_repeat){var b=Blockly.CSharp.variableDB_.getDistinctName("lists_repeat",Blockly.Generator.NAME_TYPE);Blockly.CSharp.lists_repeat.repeat=b;var c=[];c.push("var "+b+" = new Func<dynamic, dynamic, List<dynamic>>((value, n) => {");c.push("  var array = new List<dynamic>(n);");c.push("  for (var i = 0; i < n; i++) {");c.push("    array.Add(value);");c.push("  }");c.push("  return array;");c.push("});");Blockly.CSharp.definitions_.lists_repeat=
c.join("\n")}b=Blockly.CSharp.valueToCode(a,"ITEM",Blockly.CSharp.ORDER_COMMA)||"null";a=Blockly.CSharp.valueToCode(a,"NUM",Blockly.CSharp.ORDER_COMMA)||"0";return[Blockly.CSharp.lists_repeat.repeat+"("+b+", "+a+")",Blockly.CSharp.ORDER_FUNCTION_CALL]};Blockly.CSharp.lists_length=function(a){return[(Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_FUNCTION_CALL)||"null")+".Count",Blockly.CSharp.ORDER_MEMBER]};
Blockly.CSharp.lists_isEmpty=function(a){return[(Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_MEMBER)||"null")+".Count == 0",Blockly.CSharp.ORDER_LOGICAL_NOT]};Blockly.CSharp.lists_indexOf=function(a){var b="FIRST"==a.getFieldValue("END")?"IndexOf":"LastIndexOf",c=Blockly.CSharp.valueToCode(a,"FIND",Blockly.CSharp.ORDER_NONE)||"null";return[(Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_MEMBER)||"null")+"."+b+"("+c+") + 1",Blockly.CSharp.ORDER_MEMBER]};
Blockly.CSharp.lists_getIndex=function(a){var b=a.getFieldValue("MODE")||"GET",c=a.getFieldValue("WHERE")||"FROM_START",d=Blockly.CSharp.valueToCode(a,"AT",Blockly.CSharp.ORDER_UNARY_NEGATION)||"1";a=Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_MEMBER)||"null";if("GET_REMOVE"==b){d="FIRST"==c?1:"LAST"==c?a+".Count - 1":Blockly.isNumber(d)?parseFloat(d)-1:"("+d+" - 1)";"FROM_END"==c&&(d="("+a+".Count) - "+(d+1));if(!Blockly.CSharp.definitions_.lists_get_remove_at){c=Blockly.CSharp.variableDB_.getDistinctName("lists_get_remove_at",
Blockly.Generator.NAME_TYPE);Blockly.CSharp.lists_getIndex.lists_get_remove_at=c;var e=[];e.push("var "+c+" = new Func<List<dynamic>, int, dynamic>((list, index) => {");e.push("  var res = list[index];");e.push("  list.RemoveAt(index);");e.push("  return res;");e.push("});");Blockly.CSharp.definitions_.lists_get_remove_at=e.join("\n")}d=Blockly.CSharp.lists_getIndex.lists_get_remove_at+"("+a+", "+d+")";return[d,Blockly.CSharp.ORDER_FUNCTION_CALL]}if("FIRST"==c){if("GET"==b)return[a+".First()",Blockly.CSharp.ORDER_MEMBER];
if("REMOVE"==b)return a+".RemoveAt(0);\n"}else if("LAST"==c){if("GET"==b)return[a+".Last()",Blockly.CSharp.ORDER_MEMBER];if("REMOVE"==b)return a+".RemoveAt("+a+".Count - 1);\n"}else if("FROM_START"==c){if("GET"==b)return[a+"["+d+"]",Blockly.CSharp.ORDER_MEMBER];if("REMOVE"==b)return a+".RemoveAt("+d+");\n"}else if("FROM_END"==c){if("GET"==b)return[a+"[list.Count - "+d+"]",Blockly.CSharp.ORDER_MEMBER];if("REMOVE"==b)return a+".RemoveAt(list.Count - "+d+");\n"}else if("RANDOM"==c){Blockly.CSharp.definitions_.lists_get_random_item||
(c=Blockly.CSharp.variableDB_.getDistinctName("lists_get_random_item",Blockly.Generator.NAME_TYPE),Blockly.CSharp.lists_getIndex.random=c,e=[],e.push("var "+c+" = new Func<List<dynamic>, bool, dynamic>((list, remove) => {"),e.push("  var x = (new Random()).Next(list.Count);"),e.push("  if (remove) {"),e.push("    var res = list[x];"),e.push("    list.RemoveAt(x);"),e.push("    return res;"),e.push("  } else {"),e.push("    return list[x];"),e.push("  }"),e.push("});"),Blockly.CSharp.definitions_.lists_get_random_item=
e.join("\n"));d=Blockly.CSharp.lists_getIndex.random+"("+a+", "+("GET"!=b)+")";if("GET"==b)return[d,Blockly.CSharp.ORDER_FUNCTION_CALL];if("REMOVE"==b)return d+";\n"}throw"Unhandled combination (lists_getIndex).";};
Blockly.CSharp.lists_setIndex=function(a){var b=Blockly.CSharp.valueToCode(a,"LIST",Blockly.CSharp.ORDER_MEMBER)||"null",c=a.getFieldValue("MODE")||"GET",d=a.getFieldValue("WHERE")||"FROM_START",e=Blockly.CSharp.valueToCode(a,"AT",Blockly.CSharp.ORDER_NONE)||"1";a=Blockly.CSharp.valueToCode(a,"TO",Blockly.CSharp.ORDER_ASSIGNMENT)||"null";if("FIRST"==d){if("SET"==c)return b+"[0] = "+a+";\n";if("INSERT"==c)return b+".Insert(0, "+a+");\n"}else if("LAST"==d){if("SET"==c)return b+"["+b+".Count - 1] = "+
a+";\n";if("INSERT"==c)return b+".Add("+a+");\n"}else if("FROM_START"==d){e=Blockly.isNumber(e)?parseFloat(e)-1:"("+b+".Count) - "+(e+1);if("SET"==c)return b+"["+e+"] = "+a+";\n";if("INSERT"==c)return b+".Insert("+e+", "+a+");\n"}else if("FROM_END"==d){if("SET"==c)return b+"["+b+".Count - "+e+"] = "+a+";\n";if("INSERT"==c)return b+".Insert("+b+".Count - "+e+", "+a+");\n"}else if("RANDOM"==d){d=Blockly.CSharp.variableDB_.getDistinctName("tmp_x",Blockly.Variables.NAME_TYPE);if("SET"==c)return b+"["+
d+"] = "+a+";\n";if("INSERT"==c)return b+".Insert("+d+", "+a+");\n"}throw"Unhandled combination (lists_setIndex).";};
Blockly.CSharp.lists_getSublist=function(a){var b=Blockly.CSharp.valueToCode(a,"LIST",Blockly.CSharp.ORDER_MEMBER)||"null",c=a.getFieldValue("WHERE1"),d=a.getFieldValue("WHERE2"),e=Blockly.CSharp.valueToCode(a,"AT1",Blockly.CSharp.ORDER_NONE)||"1";a=Blockly.CSharp.valueToCode(a,"AT2",Blockly.CSharp.ORDER_NONE)||"1";if("FIRST"==c&&"LAST"==d)b="new List<dynamic>("+b+")";else{if(!Blockly.CSharp.definitions_.lists_get_sublist){var g=Blockly.CSharp.variableDB_.getDistinctName("lists_get_sublist",Blockly.Generator.NAME_TYPE);
Blockly.CSharp.lists_getSublist.func=g;var f=[];f.push("var "+g+" = new Func<List<dynamic>, dynamic, int, dynamic, int, List<dynamic>>((list, where1, at1, where2, at2) => {");f.push("  var getIndex = new Func<dynamic, int, int>((where, at) => {");f.push('    if (where == "FROM_START") {');f.push("      at--;");f.push('    } else if (where == "FROM_END") {');f.push("      at = list.Count - at;");f.push('    } else if (where == "FIRST") {');f.push("      at = 0;");f.push('    } else if (where == "LAST") {');
f.push("      at = list.Count - 1;");f.push("    } else {");f.push('      throw new ApplicationException("Unhandled option (lists_getSublist).");');f.push("    }");f.push("    return at;");f.push("  });");f.push("  at1 = getIndex(where1, at1);");f.push("  at2 = getIndex(where2, at2);");f.push("  return list.GetRange(at1, at2 - at1 + 1);");f.push("});");Blockly.CSharp.definitions_.lists_get_sublist=f.join("\n")}b=Blockly.CSharp.lists_getSublist.func+"("+b+', "'+c+'", '+e+', "'+d+'", '+a+")"}return[b,
Blockly.CSharp.ORDER_FUNCTION_CALL]};Blockly.CSharp.logic={};Blockly.CSharp.controls_if=function(a){for(var b=0,c=Blockly.CSharp.valueToCode(a,"IF"+b,Blockly.CSharp.ORDER_NONE)||"false",d=Blockly.CSharp.statementToCode(a,"DO"+b),e="if ("+c+") {\n"+d+"}",b=1;b<=a.elseifCount_;b++)c=Blockly.CSharp.valueToCode(a,"IF"+b,Blockly.CSharp.ORDER_NONE)||"false",d=Blockly.CSharp.statementToCode(a,"DO"+b),e+=" else if ("+c+") {\n"+d+"}\n";a.elseCount_&&(d=Blockly.CSharp.statementToCode(a,"ELSE"),e+=" else {\n"+d+"}\n");return e+"\n"};
Blockly.CSharp.logic_compare=function(a){var b={EQ:"==",NEQ:"!=",LT:"<",LTE:"<=",GT:">",GTE:">="}[a.getFieldValue("OP")],c="=="==b||"!="==b?Blockly.CSharp.ORDER_EQUALITY:Blockly.CSharp.ORDER_RELATIONAL,d=Blockly.CSharp.valueToCode(a,"A",c)||"null";a=Blockly.CSharp.valueToCode(a,"B",c)||"null";return[d+" "+b+" "+a,c]};
Blockly.CSharp.logic_operation=function(a){var b="AND"==a.getFieldValue("OP")?"&&":"||",c="&&"==b?Blockly.CSharp.ORDER_LOGICAL_AND:Blockly.CSharp.ORDER_LOGICAL_OR,d=Blockly.CSharp.valueToCode(a,"A",c)||"false";a=Blockly.CSharp.valueToCode(a,"B",c)||"false";return[d+" "+b+" "+a,c]};Blockly.CSharp.logic_negate=function(a){var b=Blockly.CSharp.ORDER_LOGICAL_NOT;return["!"+(Blockly.CSharp.valueToCode(a,"BOOL",b)||"false"),b]};
Blockly.CSharp.logic_boolean=function(a){return["TRUE"==a.getFieldValue("BOOL")?"true":"false",Blockly.CSharp.ORDER_ATOMIC]};Blockly.CSharp.logic_null=function(a){return["null",Blockly.CSharp.ORDER_ATOMIC]};
Blockly.CSharp.logic_ternary=function(a){var b=Blockly.CSharp.valueToCode(a,"IF",Blockly.CSharp.ORDER_CONDITIONAL)||"false",c=Blockly.CSharp.valueToCode(a,"THEN",Blockly.CSharp.ORDER_CONDITIONAL)||"null";a=Blockly.CSharp.valueToCode(a,"ELSE",Blockly.CSharp.ORDER_CONDITIONAL)||"null";return[b+" ? "+c+" : "+a,Blockly.CSharp.ORDER_CONDITIONAL]};Blockly.CSharp.loops={};Blockly.CSharp.controls_repeat=function(a){var b=Number(a.getFieldValue("TIMES")),c=Blockly.CSharp.statementToCode(a,"DO");Blockly.CSharp.INFINITE_LOOP_TRAP&&(c=Blockly.CSharp.INFINITE_LOOP_TRAP.replace(/%1/g,"'"+a.id+"'")+c);a=Blockly.CSharp.variableDB_.getDistinctName("count",Blockly.Variables.NAME_TYPE);return"for (var "+a+" = 0; "+a+" < "+b+"; "+a+"++) {\n"+c+"}\n"};
Blockly.CSharp.controls_repeat_ext=function(a){var b=Blockly.CSharp.valueToCode(a,"TIMES",Blockly.CSharp.ORDER_ASSIGNMENT)||"0",c=Blockly.CSharp.statementToCode(a,"DO");Blockly.CSharp.INFINITE_LOOP_TRAP&&(c=Blockly.CSharp.INFINITE_LOOP_TRAP.replace(/%1/g,"'"+a.id+"'")+c);a="";var d=Blockly.CSharp.variableDB_.getDistinctName("count",Blockly.Variables.NAME_TYPE),e=b;b.match(/^\w+$/)||Blockly.isNumber(b)||(e=Blockly.CSharp.variableDB_.getDistinctName("repeat_end",Blockly.Variables.NAME_TYPE),a+="var "+
e+" = "+b+";\n");return a+("for (var "+d+" = 0; "+d+" < "+e+"; "+d+"++) {\n"+c+"}\n")};Blockly.CSharp.controls_whileUntil=function(a){var b="UNTIL"==a.getFieldValue("MODE"),c=Blockly.CSharp.valueToCode(a,"BOOL",b?Blockly.CSharp.ORDER_LOGICAL_NOT:Blockly.CSharp.ORDER_NONE)||"false",d=Blockly.CSharp.statementToCode(a,"DO");Blockly.CSharp.INFINITE_LOOP_TRAP&&(d=Blockly.CSharp.INFINITE_LOOP_TRAP.replace(/%1/g,"'"+a.id+"'")+d);b&&(c="!"+c);return"while ("+c+") {\n"+d+"}\n"};
Blockly.CSharp.controls_for=function(a){var b=Blockly.CSharp.variableDB_.getName(a.getFieldValue("VAR"),Blockly.Variables.NAME_TYPE),c=Blockly.CSharp.valueToCode(a,"FROM",Blockly.CSharp.ORDER_ASSIGNMENT)||"0",d=Blockly.CSharp.valueToCode(a,"TO",Blockly.CSharp.ORDER_ASSIGNMENT)||"0",e=Blockly.CSharp.valueToCode(a,"BY",Blockly.CSharp.ORDER_ASSIGNMENT)||"1",g=Blockly.CSharp.statementToCode(a,"DO");Blockly.CSharp.INFINITE_LOOP_TRAP&&(g=Blockly.CSharp.INFINITE_LOOP_TRAP.replace(/%1/g,"'"+a.id+"'")+g);
if(Blockly.isNumber(c)&&Blockly.isNumber(d)&&Blockly.isNumber(e)){var f=parseFloat(c)<=parseFloat(d);a="for ("+b+" = "+c+"; "+b+(f?" <= ":" >= ")+d+"; "+b;b=Math.abs(parseFloat(e));a=(1==b?a+(f?"++":"--"):a+((f?" += ":" -= ")+b))+(") {\n"+g+"}\n")}else a="",f=c,c.match(/^\w+$/)||Blockly.isNumber(c)||(f=Blockly.CSharp.variableDB_.getDistinctName(b+"_start",Blockly.Variables.NAME_TYPE),a+="var "+f+" = "+c+";\n"),c=d,d.match(/^\w+$/)||Blockly.isNumber(d)||(c=Blockly.CSharp.variableDB_.getDistinctName(b+
"_end",Blockly.Variables.NAME_TYPE),a+="var "+c+" = "+d+";\n"),d=Blockly.CSharp.variableDB_.getDistinctName(b+"_inc",Blockly.Variables.NAME_TYPE),a+="var "+d+" = ",a=Blockly.isNumber(e)?a+(Math.abs(e)+";\n"):a+("Math.Abs("+e+");\n"),a+="if ("+f+" > "+c+") {\n",a+="  "+d+" = -"+d+";\n",a+="}\n",a+="for ("+b+" = "+f+";\n     "+d+" >= 0 ? "+b+" <= "+c+" : "+b+" >= "+c+";\n     "+b+" += "+d+") {\n"+g+"}\n";return a};
Blockly.CSharp.controls_forEach=function(a){var b=Blockly.CSharp.variableDB_.getName(a.getFieldValue("VAR"),Blockly.Variables.NAME_TYPE),c=Blockly.CSharp.valueToCode(a,"LIST",Blockly.CSharp.ORDER_ASSIGNMENT)||"[]",d=Blockly.CSharp.statementToCode(a,"DO");Blockly.CSharp.INFINITE_LOOP_TRAP&&(d=Blockly.CSharp.INFINITE_LOOP_TRAP.replace(/%1/g,"'"+a.id+"'")+d);a=Blockly.CSharp.variableDB_.getDistinctName(b+"_index",Blockly.Variables.NAME_TYPE);if(c.match(/^\w+$/))b="foreach (var "+b+" in  "+c+") {\n"+
d+"}\n";else var e=Blockly.CSharp.variableDB_.getDistinctName(b+"_list",Blockly.Variables.NAME_TYPE),b="var "+e+" = "+c+";\nforeach (var "+a+" in "+e+") {\n"+("  "+b+" = "+e+"["+a+"];\n"+d)+"}\n";return b};Blockly.CSharp.controls_flow_statements=function(a){switch(a.getFieldValue("FLOW")){case "BREAK":return"break;\n";case "CONTINUE":return"continue;\n"}throw"Unknown flow statement.";};Blockly.CSharp.math={};Blockly.CSharp.math_number=function(a){return[window.parseFloat(a.getFieldValue("NUM")),Blockly.CSharp.ORDER_ATOMIC]};Blockly.CSharp.math_arithmetic=function(a){var b=a.getFieldValue("OP"),c=Blockly.CSharp.math_arithmetic.OPERATORS[b],b=c[0],c=c[1],d=Blockly.CSharp.valueToCode(a,"A",c)||"0.0";a=Blockly.CSharp.valueToCode(a,"B",c)||"0.0";return b?[d+b+a,c]:["Math.Pow("+d+", "+a+")",Blockly.CSharp.ORDER_FUNCTION_CALL]};
Blockly.CSharp.math_arithmetic.OPERATORS={ADD:[" + ",Blockly.CSharp.ORDER_ADDITION],MINUS:[" - ",Blockly.CSharp.ORDER_SUBTRACTION],MULTIPLY:[" * ",Blockly.CSharp.ORDER_MULTIPLICATION],DIVIDE:[" / ",Blockly.CSharp.ORDER_DIVISION],POWER:[null,Blockly.CSharp.ORDER_COMMA]};
Blockly.CSharp.math_single=function(a){var b=a.getFieldValue("OP"),c;if("NEG"==b)return a=Blockly.CSharp.valueToCode(a,"NUM",Blockly.CSharp.ORDER_UNARY_NEGATION)||"0.0","-"==a[0]&&(a=" "+a),["-"+a,Blockly.CSharp.ORDER_UNARY_NEGATION];a="SIN"==b||"COS"==b||"TAN"==b?Blockly.CSharp.valueToCode(a,"NUM",Blockly.CSharp.ORDER_DIVISION)||"0":Blockly.CSharp.valueToCode(a,"NUM",Blockly.CSharp.ORDER_NONE)||"0.0";switch(b){case "ABS":c="Math.Abs("+a+")";break;case "ROOT":c="Math.Sqrt("+a+")";break;case "LN":c=
"Math.Log("+a+")";break;case "LOG10":c="Math.Log10("+a+")";break;case "EXP":c="Math.Exp("+a+")";break;case "POW10":c="Math.Pow("+a+", 10)";break;case "ROUND":c="Math.Round("+a+")";break;case "ROUNDUP":c="Math.Ceil("+a+")";break;case "ROUNDDOWN":c="Math.Floor("+a+")";break;case "SIN":c="Math.Sin("+a+" / 180 * Math.PI)";break;case "COS":c="Math.Cos("+a+" / 180 * Math.PI)";break;case "TAN":c="Math.Tan("+a+" / 180 * Math.PI)"}if(c)return[c,Blockly.CSharp.ORDER_FUNCTION_CALL];switch(b){case "ASIN":c="Math.Asin("+
a+") / Math.PI * 180";break;case "ACOS":c="Math.Acos("+a+") / Math.PI * 180";break;case "ATAN":c="Math.Atan("+a+") / Math.PI * 180";break;default:throw"Unknown math operator: "+b;}return[c,Blockly.CSharp.ORDER_DIVISION]};Blockly.CSharp.math_constant=function(a){a=a.getFieldValue("CONSTANT");return Blockly.CSharp.math_constant.CONSTANTS[a]};
Blockly.CSharp.math_constant.CONSTANTS={PI:["Math.PI",Blockly.CSharp.ORDER_MEMBER],E:["Math.E",Blockly.CSharp.ORDER_MEMBER],GOLDEN_RATIO:["(1 + Math.Sqrt(5)) / 2",Blockly.CSharp.ORDER_DIVISION],SQRT2:["Math.Sqrt(2)",Blockly.CSharp.ORDER_MEMBER],SQRT1_2:["Math.Sqrt(1.0 / 2)",Blockly.CSharp.ORDER_MEMBER],INFINITY:["double.PositiveInfinity",Blockly.CSharp.ORDER_ATOMIC]};
Blockly.CSharp.math_number_property=function(a){var b=Blockly.CSharp.valueToCode(a,"NUMBER_TO_CHECK",Blockly.CSharp.ORDER_MODULUS)||"double.NaN",c=a.getFieldValue("PROPERTY"),d;if("PRIME"==c)return Blockly.CSharp.definitions_.isPrime||(a=Blockly.CSharp.variableDB_.getDistinctName("isPrime",Blockly.Generator.NAME_TYPE),Blockly.CSharp.logic_prime=a,c=[],c.push("var "+a+" = new Func<double, bool>((n) => {"),c.push("  // http://en.wikipedia.org/wiki/Primality_test#Naive_methods"),c.push("  if (n == 2.0 || n == 3.0)"),
c.push("    return true;"),c.push("  // False if n is NaN, negative, is 1, or not whole. And false if n is divisible by 2 or 3."),c.push("  if (double.IsNaN(n) || n <= 1 || n % 1 != 0.0 || n % 2 == 0.0 || n % 3 == 0.0)"),c.push("    return false;"),c.push("  // Check all the numbers of form 6k +/- 1, up to sqrt(n)."),c.push("  for (var x = 6; x <= Math.Sqrt(n) + 1; x += 6) {"),c.push("    if (n % (x - 1) == 0.0 || n % (x + 1) == 0.0)"),c.push("      return false;"),c.push("  }"),c.push("  return true;"),
c.push("});"),Blockly.CSharp.definitions_.isPrime=c.join("\n")),d=Blockly.CSharp.logic_prime+"("+b+")",[d,Blockly.CSharp.ORDER_FUNCTION_CALL];switch(c){case "EVEN":d=b+" % 2 == 0";break;case "ODD":d=b+" % 2 == 1";break;case "WHOLE":d=b+" % 1 == 0";break;case "POSITIVE":d=b+" > 0";break;case "NEGATIVE":d=b+" < 0";break;case "DIVISIBLE_BY":a=Blockly.CSharp.valueToCode(a,"DIVISOR",Blockly.CSharp.ORDER_MODULUS)||"double.NaN",d=b+" % "+a+" == 0"}return[d,Blockly.CSharp.ORDER_EQUALITY]};
Blockly.CSharp.math_change=function(a){var b=Blockly.CSharp.valueToCode(a,"DELTA",Blockly.CSharp.ORDER_ADDITION)||"0.0";a=Blockly.CSharp.variableDB_.getName(a.getFieldValue("VAR"),Blockly.Variables.NAME_TYPE);return a+" = ("+a+'.GetType().Name == "Double" ? '+a+" : 0.0) + "+b+";\n"};Blockly.CSharp.math_round=Blockly.CSharp.math_single;Blockly.CSharp.math_trig=Blockly.CSharp.math_single;
Blockly.CSharp.math_on_list=function(a){var b=a.getFieldValue("OP");switch(b){case "SUM":a=Blockly.CSharp.valueToCode(a,"LIST",Blockly.CSharp.ORDER_MEMBER)||"new List<dynamic>()";a+=".Aggregate((x, y) => x + y)";break;case "MIN":a=Blockly.CSharp.valueToCode(a,"LIST",Blockly.CSharp.ORDER_COMMA)||"new List<dynamic>()";a+=".Min()";break;case "MAX":a=Blockly.CSharp.valueToCode(a,"LIST",Blockly.CSharp.ORDER_COMMA)||"new List<dynamic>()";a+=".Max()";break;case "AVERAGE":a=Blockly.CSharp.valueToCode(a,"LIST",
Blockly.CSharp.ORDER_COMMA)||"new List<dynamic>()";a+=".Average()";break;case "MEDIAN":if(!Blockly.CSharp.definitions_.math_median){var c=Blockly.CSharp.variableDB_.getDistinctName("math_median",Blockly.Generator.NAME_TYPE);Blockly.CSharp.math_on_list.math_median=c;b=[];b.push("var "+c+" = new Func<List<dynamic>,dynamic>((vals) => {");b.push("  vals.Sort();");b.push("  if (vals.Count % 2 == 0)");b.push("    return (vals[vals.Count / 2 - 1] + vals[vals.Count / 2]) / 2;");b.push("  else");b.push("    return vals[(vals.Count - 1) / 2];");
b.push("});");Blockly.CSharp.definitions_.math_median=b.join("\n")}a=Blockly.CSharp.valueToCode(a,"LIST",Blockly.CSharp.ORDER_NONE)||"new List<dynamic>()";a=Blockly.CSharp.math_on_list.math_median+"("+a+")";break;case "MODE":Blockly.CSharp.definitions_.math_modes||(c=Blockly.CSharp.variableDB_.getDistinctName("math_modes",Blockly.Generator.NAME_TYPE),Blockly.CSharp.math_on_list.math_modes=c,b=[],b.push("var "+c+" = new Func<List<dynamic>,List<dynamic>>((values) => {"),b.push("  var modes = new List<dynamic>();"),
b.push("  var counts = new Dictionary<double, int>();"),b.push("  var maxCount = 0;"),b.push("  foreach (var value in values) {"),b.push("    int storedCount;"),b.push("    if (counts.TryGetValue(value, out storedCount)) {"),b.push("      maxCount = Math.Max(maxCount, ++counts[value]);"),b.push("    }"),b.push("    else {"),b.push("      counts.Add(value, 1);"),b.push("      maxCount = 1;"),b.push("    }"),b.push("  }"),b.push("  foreach (var pair in counts) {"),b.push("    if (pair.Value == maxCount)"),
b.push("      modes.Add(pair.Key);"),b.push("  }"),b.push("  return modes;"),b.push("});"),Blockly.CSharp.definitions_.math_modes=b.join("\n"));a=Blockly.CSharp.valueToCode(a,"LIST",Blockly.CSharp.ORDER_NONE)||"new List<dynamic>()";a=Blockly.CSharp.math_on_list.math_modes+"("+a+")";break;case "STD_DEV":Blockly.CSharp.definitions_.math_standard_deviation||(c=Blockly.CSharp.variableDB_.getDistinctName("math_standard_deviation",Blockly.Generator.NAME_TYPE),Blockly.CSharp.math_on_list.math_standard_deviation=
c,b=[],b.push("var "+c+" = new Func<List<dynamic>,double>((numbers) => {"),b.push("  var n = numbers.Count;"),b.push("  var mean = numbers.Average(val => val);"),b.push("  var variance = 0.0;"),b.push("  for (var j = 0; j < n; j++) {"),b.push("    variance += Math.Pow(numbers[j] - mean, 2);"),b.push("  }"),b.push("  variance = variance / n;"),b.push("  return Math.Sqrt(variance);"),b.push("});"),Blockly.CSharp.definitions_.math_standard_deviation=b.join("\n"));a=Blockly.CSharp.valueToCode(a,"LIST",
Blockly.CSharp.ORDER_NONE)||"new List<dynamic>()";a=Blockly.CSharp.math_on_list.math_standard_deviation+"("+a+")";break;case "RANDOM":Blockly.CSharp.definitions_.math_random_item||(c=Blockly.CSharp.variableDB_.getDistinctName("math_random_item",Blockly.Generator.NAME_TYPE),Blockly.CSharp.math_on_list.math_random_item=c,b=[],b.push("var "+c+" = new Func<List<dynamic>,dynamic>((list) => {"),b.push("  var x = (new Random()).Next(list.Count);"),b.push("  return list[x];"),b.push("});"),Blockly.CSharp.definitions_.math_random_item=
b.join("\n"));a=Blockly.CSharp.valueToCode(a,"LIST",Blockly.CSharp.ORDER_NONE)||"new List<dynamic>()";a=Blockly.CSharp.math_on_list.math_random_item+"("+a+")";break;default:throw"Unknown operator: "+b;}return[a,Blockly.CSharp.ORDER_FUNCTION_CALL]};Blockly.CSharp.math_modulo=function(a){var b=Blockly.CSharp.valueToCode(a,"DIVIDEND",Blockly.CSharp.ORDER_MODULUS)||"0.0";a=Blockly.CSharp.valueToCode(a,"DIVISOR",Blockly.CSharp.ORDER_MODULUS)||"0.0";return[b+" % "+a,Blockly.CSharp.ORDER_MODULUS]};
Blockly.CSharp.math_constrain=function(a){var b=Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_COMMA)||"0.0",c=Blockly.CSharp.valueToCode(a,"LOW",Blockly.CSharp.ORDER_COMMA)||"0.0";a=Blockly.CSharp.valueToCode(a,"HIGH",Blockly.CSharp.ORDER_COMMA)||"double.PositiveInfinity";return["Math.Min(Math.Max("+b+", "+c+"), "+a+")",Blockly.CSharp.ORDER_FUNCTION_CALL]};
Blockly.CSharp.math_random_int=function(a){var b=Blockly.CSharp.valueToCode(a,"FROM",Blockly.CSharp.ORDER_COMMA)||"0.0";a=Blockly.CSharp.valueToCode(a,"TO",Blockly.CSharp.ORDER_COMMA)||"0.0";if(!Blockly.CSharp.definitions_.math_random_int){var c=Blockly.CSharp.variableDB_.getDistinctName("math_random_int",Blockly.Generator.NAME_TYPE);Blockly.CSharp.math_random_int.random_function=c;var d=[];d.push("var "+c+" new Func<int,int,int>((a, b) => {");d.push("  if (a > b) {");d.push("    // Swap a and b to ensure a is smaller.");
d.push("    var c = a;");d.push("    a = b;");d.push("    b = c;");d.push("  }");d.push("  return (int)Math.Floor(a + (new Random()).Next(b - a));");d.push("});");Blockly.CSharp.definitions_.math_random_int=d.join("\n")}return[Blockly.CSharp.math_random_int.random_function+"("+b+", "+a+")",Blockly.CSharp.ORDER_FUNCTION_CALL]};Blockly.CSharp.math_random_float=function(a){return["(new Random()).NextDouble()",Blockly.CSharp.ORDER_FUNCTION_CALL]};Blockly.CSharp.procedures={};
Blockly.CSharp.procedures_defreturn=function(a){var b=Blockly.CSharp.variableDB_.getName(a.getFieldValue("NAME"),Blockly.Procedures.NAME_TYPE),c=Blockly.CSharp.statementToCode(a,"STACK");Blockly.CSharp.INFINITE_LOOP_TRAP&&(c=Blockly.CSharp.INFINITE_LOOP_TRAP.replace(/%1/g,"'"+a.id+"'")+c);var d=Blockly.CSharp.valueToCode(a,"RETURN",Blockly.CSharp.ORDER_NONE)||"";d&&(d="  return "+d+";\n");for(var e=[],g=0;g<a.arguments_.length;g++)e[g]=Blockly.CSharp.variableDB_.getName(a.arguments_[g],Blockly.Variables.NAME_TYPE);
for(var f="",g=0;g<e.length;g++)f=0==f.length?"dynamic":f+", dynamic";0!=d.length&&(f=0==f.length?"dynamic":f+", dynamic");c="var "+b+" = new "+(0==d.length?"Action":"Func<"+f+">")+"(("+e.join(", ")+") => {\n"+c+d+"});";c=Blockly.CSharp.scrub_(a,c);Blockly.CSharp.definitions_[b]=c;return null};Blockly.CSharp.procedures_defnoreturn=Blockly.CSharp.procedures_defreturn;
Blockly.CSharp.procedures_callreturn=function(a){for(var b=Blockly.CSharp.variableDB_.getName(a.getFieldValue("NAME"),Blockly.Procedures.NAME_TYPE),c=[],d=0;d<a.arguments_.length;d++)c[d]=Blockly.CSharp.valueToCode(a,"ARG"+d,Blockly.CSharp.ORDER_COMMA)||"null";return[b+"("+c.join(", ")+")",Blockly.CSharp.ORDER_FUNCTION_CALL]};
Blockly.CSharp.procedures_callnoreturn=function(a){for(var b=Blockly.CSharp.variableDB_.getName(a.getFieldValue("NAME"),Blockly.Procedures.NAME_TYPE),c=[],d=0;d<a.arguments_.length;d++)c[d]=Blockly.CSharp.valueToCode(a,"ARG"+d,Blockly.CSharp.ORDER_COMMA)||"null";return b+"("+c.join(", ")+");\n"};
Blockly.CSharp.procedures_ifreturn=function(a){var b="if ("+(Blockly.CSharp.valueToCode(a,"CONDITION",Blockly.CSharp.ORDER_NONE)||"false")+") {\n";a.hasReturnValue_?(a=Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_NONE)||"null",b+="  return "+a+";\n"):b+="  return;\n";return b+"}\n"};Blockly.CSharp.texts={};Blockly.CSharp.text=function(a){return[Blockly.CSharp.quote_(a.getFieldValue("TEXT")),Blockly.CSharp.ORDER_ATOMIC]};
Blockly.CSharp.text_join=function(a){var b;if(0==a.itemCount_)return['""',Blockly.CSharp.ORDER_ATOMIC];if(1==a.itemCount_)return b=Blockly.CSharp.valueToCode(a,"ADD0",Blockly.CSharp.ORDER_NONE)||'""',[b+".ToString()",Blockly.CSharp.ORDER_FUNCTION_CALL];if(2==a.itemCount_)return b=Blockly.CSharp.valueToCode(a,"ADD0",Blockly.CSharp.ORDER_NONE)||'""',a=Blockly.CSharp.valueToCode(a,"ADD1",Blockly.CSharp.ORDER_NONE)||'""',["String.Concat("+b+", "+a+")",Blockly.CSharp.ORDER_ADDITION];b=Array(a.itemCount_);
for(var c=0;c<a.itemCount_;c++)b[c]=Blockly.CSharp.valueToCode(a,"ADD"+c,Blockly.CSharp.ORDER_COMMA)||'""';b="String.Concat("+b.join(", ")+")";return[b,Blockly.CSharp.ORDER_FUNCTION_CALL]};Blockly.CSharp.text_append=function(a){var b=Blockly.CSharp.variableDB_.getName(a.getFieldValue("VAR"),Blockly.Variables.NAME_TYPE);a=Blockly.CSharp.valueToCode(a,"TEXT",Blockly.CSharp.ORDER_NONE)||'""';return b+" = String.Concat("+b+", "+a+");\n"};
Blockly.CSharp.text_length=function(a){return[(Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_FUNCTION_CALL)||'""')+".Length",Blockly.CSharp.ORDER_MEMBER]};Blockly.CSharp.text_isEmpty=function(a){return[(Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_MEMBER)||'""')+".Length == 0",Blockly.CSharp.ORDER_EQUALITY]};
Blockly.CSharp.text_indexOf=function(a){var b="FIRST"==a.getFieldValue("END")?"IndexOf":"LastIndexOf",c=Blockly.CSharp.valueToCode(a,"FIND",Blockly.CSharp.ORDER_NONE)||'""';return[(Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_MEMBER)||'""')+"."+b+"("+c+") + 1",Blockly.CSharp.ORDER_MEMBER]};
Blockly.CSharp.text_charAt=function(a){var b=a.getFieldValue("WHERE")||"FROM_START",c=Blockly.CSharp.valueToCode(a,"AT",Blockly.CSharp.ORDER_UNARY_NEGATION)||"1";a=Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_MEMBER)||'""';switch(b){case "FIRST":return[a+".First()",Blockly.CSharp.ORDER_FUNCTION_CALL];case "LAST":return[a+".Last()",Blockly.CSharp.ORDER_FUNCTION_CALL];case "FROM_START":return[a+"["+c+" - 1]",Blockly.CSharp.ORDER_FUNCTION_CALL];case "FROM_END":return[a+"[text.Length - "+
c+"]",Blockly.CSharp.ORDER_FUNCTION_CALL];case "RANDOM":return Blockly.CSharp.definitions_.text_random_letter||(b=Blockly.CSharp.variableDB_.getDistinctName("text_random_letter",Blockly.Generator.NAME_TYPE),Blockly.CSharp.text_charAt.text_random_letter=b,c=[],c.push("var "+b+" = new Func<string, char>((text) => {"),c.push("  var x = (new Random()).Next(text.length);"),c.push("  return text[x];"),c.push("});"),Blockly.CSharp.definitions_.text_random_letter=c.join("\n")),a=Blockly.CSharp.text_charAt.text_random_letter+
"("+a+")",[a,Blockly.CSharp.ORDER_FUNCTION_CALL]}throw"Unhandled option (text_charAt).";};
Blockly.CSharp.text_getSubstring=function(a){var b=Blockly.CSharp.valueToCode(a,"STRING",Blockly.CSharp.ORDER_MEMBER)||"null",c=a.getFieldValue("WHERE1"),d=a.getFieldValue("WHERE2"),e=Blockly.CSharp.valueToCode(a,"AT1",Blockly.CSharp.ORDER_NONE)||"1";a=Blockly.CSharp.valueToCode(a,"AT2",Blockly.CSharp.ORDER_NONE)||"1";if("FIRST"!=c||"LAST"!=d){if(!Blockly.CSharp.definitions_.text_get_substring){var g=Blockly.CSharp.variableDB_.getDistinctName("text_get_substring",Blockly.Generator.NAME_TYPE);Blockly.CSharp.text_getSubstring.func=
g;var f=[];f.push("var "+g+" = new Func<string, dynamic, int, dynamic, int, string>((text, where1, at1, where2, at2) => {");f.push("  var getAt =new Func<dynamic, int, int>((where, at) => {");f.push('    if (where == "FROM_START") {');f.push("      at--;");f.push('    } else if (where == "FROM_END") {');f.push("      at = text.Length - at;");f.push('    } else if (where == "FIRST") {');f.push("      at = 0;");f.push('    } else if (where == "LAST") {');f.push("      at = text.Length - 1;");f.push("    } else {");
f.push('      throw new ApplicationException("Unhandled option (text_getSubstring).");');f.push("    }");f.push("    return at;");f.push("  });");f.push("  at1 = getAt(where1, at1);");f.push("  at2 = getAt(where2, at2) + 1;");f.push("  return text.Substring(at1, at2 - at1);");f.push("});");Blockly.CSharp.definitions_.text_get_substring=f.join("\n")}b=Blockly.CSharp.text_getSubstring.func+"("+b+', "'+c+'", '+e+', "'+d+'", '+a+")"}return[b,Blockly.CSharp.ORDER_FUNCTION_CALL]};
Blockly.CSharp.text_changeCase=function(a){var b=a.getFieldValue("CASE");if(b=Blockly.CSharp.text_changeCase.OPERATORS[b])a=Blockly.CSharp.valueToCode(a,"TEXT",Blockly.CSharp.ORDER_MEMBER)||'""',a+=b;else{if(!Blockly.CSharp.definitions_.text_toTitleCase){b=Blockly.CSharp.variableDB_.getDistinctName("text_toTitleCase",Blockly.Generator.NAME_TYPE);Blockly.CSharp.text_changeCase.toTitleCase=b;var c=[];c.push("var "+b+" = new Func<string, string>((str) => {");c.push("  var buf = new StringBuilder(str.Length);");
c.push("  var toUpper = true;");c.push("  foreach (var ch in str) {");c.push("    buf.Append(toUpper ? Char.ToUpper(ch) : ch);");c.push("    toUpper = Char.IsWhiteSpace(ch);");c.push("  }");c.push("  return buf.ToString();");c.push("});");Blockly.CSharp.definitions_.text_toTitleCase=c.join("\n")}a=Blockly.CSharp.valueToCode(a,"TEXT",Blockly.CSharp.ORDER_NONE)||'""';a=Blockly.CSharp.text_changeCase.toTitleCase+"("+a+")"}return[a,Blockly.CSharp.ORDER_FUNCTION_CALL]};
Blockly.CSharp.text_changeCase.OPERATORS={UPPERCASE:".ToUpper()",LOWERCASE:".ToLower()",TITLECASE:null};Blockly.CSharp.text_trim=function(a){var b=a.getFieldValue("MODE"),b=Blockly.CSharp.text_trim.OPERATORS[b];return[(Blockly.CSharp.valueToCode(a,"TEXT",Blockly.CSharp.ORDER_MEMBER)||'""')+b,Blockly.CSharp.ORDER_FUNCTION_CALL]};Blockly.CSharp.text_trim.OPERATORS={LEFT:".TrimStart()",RIGHT:".TrimEnd()",BOTH:".Trim()"};
Blockly.CSharp.text_print=function(a){return"Console.WriteLine("+(Blockly.CSharp.valueToCode(a,"TEXT",Blockly.CSharp.ORDER_NONE)||'""')+");\n"};
Blockly.CSharp.text_prompt=function(a){var b=Blockly.CSharp.quote_(a.getFieldValue("TEXT"));a="NUMBER"==a.getFieldValue("TYPE");var c=Blockly.CSharp.variableDB_.getDistinctName("text_promptInput",Blockly.Generator.NAME_TYPE);Blockly.CSharp.text_prompt.promptInput=c;var d=[];d.push("var "+c+" = new Func<string, bool, dynamic>((msg, toNumber) => {");d.push("  Console.WriteLine(msg);");d.push("  var res = Console.ReadLine();");d.push("  if (toNumber)");d.push("    return Double.Parse(res);");d.push("  return res;");
d.push("});");Blockly.CSharp.definitions_.text_promptInput=d.join("\n");return[Blockly.CSharp.text_prompt.promptInput+"("+b+", "+a+")",Blockly.CSharp.ORDER_FUNCTION_CALL]};Blockly.CSharp.variables={};Blockly.CSharp.variables_get=function(a){return[Blockly.CSharp.variableDB_.getName(a.getFieldValue("VAR"),Blockly.Variables.NAME_TYPE),Blockly.CSharp.ORDER_ATOMIC]};Blockly.CSharp.variables_set=function(a){var b=Blockly.CSharp.valueToCode(a,"VALUE",Blockly.CSharp.ORDER_ASSIGNMENT)||"null";return Blockly.CSharp.variableDB_.getName(a.getFieldValue("VAR"),Blockly.Variables.NAME_TYPE)+" = "+b+";\n"};