//make by temp
//ROOM: miling4.c
//99

inherit ROOM;

void create()
{
        set("short", "����");
        set("long",@LONG
��һƬï����ɭ�֣������������ⶼ����͸����������ϸ����
�ߵ�ɽ�Ź����������ƺ���һƬѩ�ء�
LONG
        );
        set("exits", ([
                "eastup" : __DIR__"xuedi1",
                "westdown" : __DIR__"sanlu2",
                "northup" : __DIR__"miling3"
        ]));
        setup();
        replace_program(ROOM);
}
