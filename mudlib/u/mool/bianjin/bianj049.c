// Room: bianj049.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "���δ�Ժ");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "east"  : __DIR__"bianj047",
            "south"  : __DIR__"bianj050",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
