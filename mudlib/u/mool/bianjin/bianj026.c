// Room: bianj026.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩�ϴ��");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj021",
            "east"  : __DIR__"bianj027",
            "south"  : __DIR__"bianj028",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
