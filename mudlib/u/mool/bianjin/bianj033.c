// Room: bianj033.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "����¹㳡");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj035",
            "south"  : __DIR__"bianj032",
            "west"  : __DIR__"bianj034",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
