// Room: /d/jinling/chalu.c

inherit ROOM;

void create()
{
	set("short", "叉路口");
	set("long", @LONG
这是一个三叉路口，往西北就是著名的上林苑。而往西则是到竟陵。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"shanglin5.c",
  "northwest" : __DIR__"shanglin.c",
]));

	setup();
	replace_program(ROOM);
}
