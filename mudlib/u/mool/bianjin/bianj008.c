// Room: bianj008.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�����´��");
	set("long",@LONG
�������꾩�����´������й���һ��������ߵĽ���
��ͭ�� ... ...
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "south"  : __DIR__"bianj007",
       ]));
	setup();
       replace_program(ROOM);
}
