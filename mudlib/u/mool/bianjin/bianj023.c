// Room: bianj023.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��ջ��¥");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "west"  : __DIR__"bianj025",
            "east"  : __DIR__"bianj024",
            "down"  : __DIR__"bianj022",
       ]));
	setup();
       replace_program(ROOM);
}
