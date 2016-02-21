// Room: /d/sandboy/zhulin 
inherit ROOM; 
 
void create ()
{
  set ("short", "竹林");
  set ("long", @LONG
一片深邃的竹林，清翠的绿叶间隙洒下点点金色阳光。脚步踏在竹叶上
发出悉悉索索的声音。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhangsan.c" : 1,
]));
  set("outdoors", "/d/sandboy");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"shandao2",
]));

  setup();
}
