// Room: bianj061.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩�����");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj062",
            "southwest"  : __DIR__"bianj059",
            "east"  : __DIR__"bianj066",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
