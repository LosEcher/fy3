// Room: /d/jinling/changjie4.c

inherit ROOM;

void create()
{
	set("short", "长街");
	set("long", @LONG
这里是竟陵城的主要街道，由于竟陵城南北长而东西短，所以就行成
了这条长达两里的街道。这也是竟陵最繁华的商业街。东面有一家酒楼，
西面是绸缎庄。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"changjie5.c",
  "south" : __DIR__"changjie3.c",
  "west" : __DIR__"chouduan.c",
  "east" : __DIR__"jiulou.c",
]));
	set("outdoors", "/d/jingling");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
