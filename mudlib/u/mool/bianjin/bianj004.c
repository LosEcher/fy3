// Room: bianj004.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��б��");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "west"  : __DIR__"bianj003",
            "east"  : __DIR__"bianj006",
            "south"  : __DIR__"bianj005",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
