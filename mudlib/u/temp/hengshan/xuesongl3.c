//make by temp
//ROOM: xuesongl3.c

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
                "southdown" : __DIR__"wumingsy",
                "east" : __DIR__"xuesongl2",
                "northup" : __DIR__"xuesongl4"
        ]));
        setup();
        replace_program(ROOM);
}
