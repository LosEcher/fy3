// Room: bianj021.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩�ϴ��");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj020",
            "south"  : __DIR__"bianj026",
            "west"  : __DIR__"bianj022",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
