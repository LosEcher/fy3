// Room: bianj050.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�η�");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "north"  : __DIR__"bianj049",
       ]));
	setup();
       replace_program(ROOM);
}
