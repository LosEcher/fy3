//make by temp
//ROOM: xuesongl1.c

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
                "west" : __DIR__"xuesongl2"
        ]));
        setup();
        replace_program(ROOM);
}
