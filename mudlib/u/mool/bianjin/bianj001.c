// Room: bianj001.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩����");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "north"  : __DIR__"bianj001",
            "south"  : __DIR__"bianj002",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
