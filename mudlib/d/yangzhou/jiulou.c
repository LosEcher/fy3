// Room: /u/swordman/yangzhou/jiulou.c

inherit ROOM;

void create ()
{
  set ("short", "扬州酒楼");
  set ("long", @LONG
这家客栈紧靠扬州城中心，所以生意非常兴隆。兼之价钱低廉，
更是成了外地游客落脚的首选。露天摆了七八张桌子，三教九流人�
物在此进进出出，络绎不绝，几个跑堂的小二来来回回招待着四方
来客。二楼上是客房。
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"nandaj2",
  "up" : __DIR__"sleeproom",
]));
  set("no_magic", 1);
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 3 */
  __DIR__"npc/chike" : 1,
  __DIR__"npc/gou.c" : 1,
  __DIR__"npc/xiaoer.c" : 1,
]));

  setup();
}
