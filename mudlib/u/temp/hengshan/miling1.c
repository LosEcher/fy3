//make by temp
//ROOM: miling1.c
//99.12.20

inherit ROOM;

void create()
{
        set("short", "����");
        set("long",@LONG
��һƬï����ɭ�֣������������ⶼ����͸����������ϸ����
�ߵ�ɽ�Ź����������ƺ���һ��С�������ǹ�ȥ�����ɡ�
LONG
        );
        set("exits", ([
                "northup" : __DIR__"sanlu2",
                "eastdown" : __DIR__"xuesf"
        ]));
        setup();
        replace_program(ROOM);
}
