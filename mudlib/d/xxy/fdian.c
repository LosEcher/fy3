// Room: /d/xxy/fdian 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "天下一家店");
  set ("long", @LONG
穿过倒塌的大殿,迎面一道高有五丈的粉墙阻路.墙外是条宽有三丈的污浊
水道,深浅不知,墙中间约丈五高的地方,开着一道窄门,宽仅三尺,高有一丈,看起
来活似长窗.窄门口斜搭着一块寸厚尺宽三丈长的木板.另一端直到污浊水道的边沿,
供人往来其上.窄门上,高挑一对气死风灯,门正中以赤金铸成[天下一家店]五字.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"datang",
  "south" : __DIR__"dadian",
]));
  set("outdoors", "/d/xxy");
  setup();
}
