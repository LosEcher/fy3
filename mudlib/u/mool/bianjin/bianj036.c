// Room: bianj036.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "�˽�������");
	set("long",@LONG
ľ������ǧ��ǧ�۹�������.һ�ô���������,ȫ������.
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "south"  : __DIR__"bianj035",
       ]));
	setup();
       replace_program(ROOM);
}
