// Room: bianj032.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "����´���");
	set("long",@LONG
ׯ�Ϲ��ӵ���¥��,���������Ƕ����¥����,���Ŷ���
������ʨ�����ڴ�������,�����˹��µ�����.
-�ټ�һЩ-
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "north"  : __DIR__"bianj033",
            "south"  : __DIR__"bianj031",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
