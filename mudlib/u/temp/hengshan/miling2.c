//make by temp
//ROOM: miling2.c
//99.12.20
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
                "southdown" : __DIR__"sanlu2",
                "eastup" : __DIR__"miling3"
        ]));
        setup();
        replace_program(ROOM);
}
