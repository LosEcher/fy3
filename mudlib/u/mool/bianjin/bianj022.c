// Room: bianj022.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�����ջ");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "north"  : __DIR__"bianj042",
            "east"  : __DIR__"bianj021",
            "up"  : __DIR__"bianj023",
       ]));
	setup();
       replace_program(ROOM);
}
