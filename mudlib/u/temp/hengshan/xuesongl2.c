//make by temp
//ROOM: xuesongl2.c

inherit ROOM;

void create()
{
        set("short", "ѩ����");
        set("long",@LONG
��һƬï����ɭ�֣������������ⶼ����͸���������е���֦��
����ѩ�����ˣ�����ϸ�������ҹ���������������һ������ãã��һ
ƬҲ������·�ˡ�
LONG
        );
        set("exits", ([
                "east" : __DIR__"xuesongl1",
                "west" : __DIR__"xuesongl3"
        ]));
        setup();
        replace_program(ROOM);
}
