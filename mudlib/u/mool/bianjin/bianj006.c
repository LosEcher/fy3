// Room: bianj006.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��б��");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "northeast"  : __DIR__"bianj007",
            "west"  : __DIR__"bianj004",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
