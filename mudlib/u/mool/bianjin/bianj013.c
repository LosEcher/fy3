// Room: bianj013.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩�����");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj010",
            "south"  : __DIR__"bianj020",
            "east"  : __DIR__"bianj014",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
