// Room: bianj038.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��������");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "north"  : __DIR__"bianj039",
            "east"  : __DIR__"bianj037",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
