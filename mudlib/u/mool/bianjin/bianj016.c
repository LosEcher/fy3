// Room: bianj016.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��¥����");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "up"  : __DIR__"bianj017",
            "down"  : __DIR__"bianj014",
       ]));
	setup();
       replace_program(ROOM);
}
