//make by temp
//ROOM: sanlu.c


inherit ROOM;

void create()
{
        set("short", "ɽ��С·");
        set("long",@LONG
������һ��ɽ����᫵�С·�ϣ����ܾ����ĵġ�������һ��Ƭ�����֣�
�����Ǻ����Ǹ�ɽ�ȡ���������һ��С·���ƺ���һ����ͤ��ӳ�����ܵ�
�����С�
LONG
        );
        set("exits", ([
                "northup" : __DIR__"wangft",
                "southdown" : __DIR__"pmfsanjiao",
                   "eastdown" : __DIR__"pmgu",
                "westup" : __DIR__"zhudao1"
        ]));
        setup();
        replace_program(ROOM);
}
