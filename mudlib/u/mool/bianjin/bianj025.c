// Room: bianj025.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�ͷ�");
	set("long",@LONG
-Ů��-
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "east"  : __DIR__"bianj023",
       ]));
	setup();
       replace_program(ROOM);
}
