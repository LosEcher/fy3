// Room: bianj017.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��¥����");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj019",
            "south"  : __DIR__"bianj018",
            "down"  : __DIR__"bianj016",
       ]));
	setup();
       replace_program(ROOM);
}
