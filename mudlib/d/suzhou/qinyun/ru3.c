// Room: /u/oldsix/room1/ru3.c

inherit ROOM;

void create()
{
	set("short", "长廊");
	set("long", @LONG
这是个建于湖上的走廊，曲曲折折一直通向远方。放眼望去，湖上烟波浩渺
。微风徐徐，送来水香阵阵。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south":__DIR__"keting",
		"west":__DIR__"ru4",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
