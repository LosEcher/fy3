// Room: bianj043.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩�����");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj044",
            "west"  : __DIR__"bianj045",
            "east"  : __DIR__"bianj042",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
