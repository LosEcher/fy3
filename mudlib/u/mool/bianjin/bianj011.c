// Room: bianj011.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��·�");
	set("long",@LONG
--����,���ߵ�--
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "east"  : __DIR__"bianj010",
            "north"  : __DIR__"bianj012",
       ]));
	setup();
       replace_program(ROOM);
}
