//make by temp
//ROOM: chufang.c

inherit ROOM;

void create()
{
        set("short", "����");
        set("long",@LONG
���Ǽ������Ũ���ķ�����ζһ�����������ı��ӣ� �㻷������
ֻ���������а�����ʳ���֪���ܲ����ã�
LONG
        );
        set("exits", ([
                "west" : __DIR__"tingyuan2"
        ]));
        set("objects",([
                __DIR__"npc/shinv":1,
        ]));
        setup();
        replace_program(ROOM);
}
