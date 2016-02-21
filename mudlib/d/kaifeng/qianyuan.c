// Room: /d/kaifeng/qianyuan.c

inherit ROOM;

void create()
{
	set("short", "前院");
	set("long", @LONG
一带粉成黄色的围墙圈起这个院子，一条青石道通向北面的天王殿，南
面就是相国寺的大门，东边一座高楼是鼓楼，西面是钟楼。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"xianguosi",
  "north" : __DIR__"tianwang",
  "east" : __DIR__"gulou",
  "west" : __DIR__"zhonglou",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
