// Room: bianj007.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "������");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj008",
            "east"  : __DIR__"bianj009",
            "southwest"  : __DIR__"bianj006",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
