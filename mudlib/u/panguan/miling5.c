//make by temp
//ROOM: miling5.c

inherit ROOM;

void create()
{
        set("short", "����");
        set("long",@LONG
��һƬï����ɭ�֣������������ⶼ����͸����������ϸ������
�ҹ���������������һ����Ҳ������·�ˡ�
LONG
        );
        set("exits", ([
                "southdown" : __DIR__"miling3",
                "northup" : __DIR__"wumingsy"
        ]));
        setup();
        replace_program(ROOM);
}
