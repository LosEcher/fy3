// Room: bianj060.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "����");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "north"  : __DIR__"bianj059",
       ]));
	setup();
       replace_program(ROOM);
}
