//make by temp
//ROOM: sanlu2.c


inherit ROOM;

void create()
{
        set("short", "ɽ��С·");
        set("long",@LONG
����ɽ��Ѱ����С·�����ߵ�Ұ��Ƭ�ض��ǣ���������С·����
�ǳ��Ķ��͡���ǰ��ۿ�С·�ľ�ͷ��һƬ��ɭ�֣����ƺ���������
������Ұ�޵ĺ��У���ҪС���ˡ�
LONG
        );
        set("exits", ([
                "northup" : __DIR__"miling2",
                "southdown" : __DIR__"miling1",
                "eastup" : __DIR__"miling4",
                "westdown" : __DIR__"pmgu"
        ]));
        setup();
        replace_program(ROOM);
}
