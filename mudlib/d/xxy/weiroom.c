// Room: /d/xxy/weiroom 
inherit ROOM; 
 
void create ()
{
  set ("short", "威级寝室");
  set ("long", @LONG
这是威级武士所住的地方,靠北的墙边一张木板床挂着雪白的帐子.南面的 
窗户下面是张四方樟木桌,旁边还有两张太师椅子.明亮的日光从窗户从照进来, 
映得满房间亮堂堂的. 
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/d/obj/food/hulu.c" : 1,
  "/d/obj/food/kaoji.c" : 2,
]));
  set("sleep_room", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"zoulang3",
]));

  setup();
}
