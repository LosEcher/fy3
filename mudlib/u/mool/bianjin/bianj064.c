// Room: bianj064.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩��Զ�ھִ���");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "enter"  : __DIR__"bianj065",
            "south"  : __DIR__"bianj063",
       ]));
	setup();
       replace_program(ROOM);
}
