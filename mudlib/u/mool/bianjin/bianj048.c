// Room: bianj048.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "���ô���");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "north"  : __DIR__"bianj047",
       ]));
	setup();
       replace_program(ROOM);
}
