// Room: /d/jinling/shanglin4.c

inherit ROOM;

void create()
{
	set("short", "上林道");
	set("long", @LONG
这里已是竟陵城外，往西就是著名的上林苑。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"shanglin5.c",
  "east" : __DIR__"chengmen3.c",
]));

	setup();
	replace_program(ROOM);
}
