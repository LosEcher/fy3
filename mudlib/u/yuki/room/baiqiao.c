// Room: /u/yuki/room/baiqiao.c

inherit ROOM;

void create()
{
	set("short", "小白桥");
	set("long", @LONG
一条用白石做成的小桥，横跨在湖面上，小桥弯弯曲曲，两
旁的树不时的随风舞动。水面荡起层层鳞波。不禁让人想起月上
柳梢头，人约黄昏后的景象真一个曲径通幽的好地方。有几个少
女在桥上嬉戏。
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  "/u/yuki/npc/nvhai" : 3,
]));
	set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"xiaolu",
  "northeast" : __DIR__"meihuating",
]));

	setup();
	replace_program(ROOM);
}
