// Room: bianj029.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��֪·");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "east"  : __DIR__"bianj028",
            "south"  : __DIR__"bianj030",
            "west"  : __DIR__"bianj031",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
