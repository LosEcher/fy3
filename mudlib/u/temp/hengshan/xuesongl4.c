//make by temp
//ROOM: xuesongl4.c

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
                "southdown" : __DIR__"xuesongl3",
                "northup" : __DIR__"wumingfd"
        ]));
        setup();
        replace_program(ROOM);
}
