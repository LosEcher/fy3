// Room: bianj054.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�����");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "east"  : __DIR__"bianj053",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
