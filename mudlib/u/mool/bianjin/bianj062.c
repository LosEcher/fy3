// Room: bianj062.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩��Զ�ھִ���");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "north"  : __DIR__"bianj063",
            "south"  : __DIR__"bianj061",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
