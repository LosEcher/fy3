// Room: bianj014.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��¥");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 4 */
            "west"  : __DIR__"bianj013",
            "east"  : __DIR__"bianj015",
            "up"  : __DIR__"bianj016",
            "south"  : __DIR__"bianj058",
       ]));
	setup();
       replace_program(ROOM);
}
