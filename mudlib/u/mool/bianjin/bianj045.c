// Room: bianj045.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩�����");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 4 */
            "north"  : __DIR__"bianj051",
            "south"  : __DIR__"bianj046",
            "west"  : __DIR__"bianj057",
            "east"  : __DIR__"bianj043",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
