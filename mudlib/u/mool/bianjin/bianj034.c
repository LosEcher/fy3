// Room: bianj034.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��ͤ");
	set("long",@LONG
--����ͭ��--��.4 ��.�����.
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "east"  : __DIR__"bianj033",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
