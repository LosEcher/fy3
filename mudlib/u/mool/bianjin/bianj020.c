// Room: bianj020.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�꾩ʮ�ִ��");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 4 */
            "north"  : __DIR__"bianj013",
            "south"  : __DIR__"bianj021",
            "west"  : __DIR__"bianj042",
            "east"  : __DIR__"bianj058",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
