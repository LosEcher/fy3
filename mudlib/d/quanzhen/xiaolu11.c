// Room: /d/quanzhen/xiaolu11.c

inherit ROOM;

void create()
{
	set("short", "后山小路");
	set("long", @LONG
	这里是后山上的小路。这条小路好象不是人工刻意修出来的，
也许只是以前的采药人踩多了，现出这样一条小路来。走到这里，你
好象迷路了。不过往南似乎有一条下山的路。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"xiaolu11.c",
  "north" : __DIR__"xiaolu11.c",
  "west" : __DIR__"xiaolu10",
  "east" : __DIR__"xiaolu11.c",
]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}
