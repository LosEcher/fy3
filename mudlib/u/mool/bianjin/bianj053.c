// Room: bianj053.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "���񳤵�");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 4 */
            "northup"  : __DIR__"bianj056",
            "south"  : __DIR__"bianj052",
            "west"  : __DIR__"bianj054",
            "east"  : __DIR__"bianj055",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
