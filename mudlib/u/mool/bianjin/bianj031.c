// Room: bianj031.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��֪·");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj032",
            "east"  : __DIR__"bianj029",
            "southwest"  : __DIR__"bianj037",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
