//ROOM: fen0.c
inherit ROOM;

void create()
{
	set("short","�����ô���");
	set("long", @LONG
������������̽��µ�һ���á�������Ŀ�²�Զ�����µ�
һ��������ͯ�������ƴ���.�ϱ���Ƭ�ݵء�
LONG);
        set("exits", ([
            "north" :  __DIR__"grass1",
        ]));
	set("objects",([
            __DIR__ "npc/tongbw" :1,
	]));
//        set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}

