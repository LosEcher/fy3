// Room: bianj047.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "������Ժ");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj046",
            "south"  : __DIR__"bianj048",
            "west"  : __DIR__"bianj049",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
