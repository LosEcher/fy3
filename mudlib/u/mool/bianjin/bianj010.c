// Room: bianj010.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩�����");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "north"  : __DIR__"bianj003",
            "south"  : __DIR__"bianj013",
            "west"  : __DIR__"bianj011",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
