// Room: bianj052.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "������");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "north"  : __DIR__"bianj053",
            "southeast"  : __DIR__"bianj051",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
