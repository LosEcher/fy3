//make by temp
//ROOM: miling3.c
//99.

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
                "southdown" : __DIR__"miling4",
                "westdown" : __DIR__"miling2",
                "northup" : __DIR__"miling5"
        ]));
        setup();
        replace_program(ROOM);
}
