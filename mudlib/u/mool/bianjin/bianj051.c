// Room: bianj051.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��б��");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "northwest"  : __DIR__"bianj052",
            "south"  : __DIR__"bianj045",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
