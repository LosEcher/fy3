// Room: bianj063.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩��Զ�ھִ�Ժ");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "north"  : __DIR__"bianj064",
            "south"  : __DIR__"bianj062",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
