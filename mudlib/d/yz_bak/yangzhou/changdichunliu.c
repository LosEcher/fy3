
//Mr.music  yangzhou's ���̴���

inherit ROOM;

void create()
{
        set("short", "���̴���");
        set("long", @LONG
	�����ں��ߵĳ����ϣ���ˮ�α̣���������һ�ң��岽һ����
�����У������Һ죬�������˽���������¾�����������ʹ��·�
������������԰֮�С������������꣬������ɽׯ���š��̰���һ
Сͤ��������С��

LONG
        );

        set("exits", ([
                "north" : __DIR__"siqiaoyanyu",
                "south" : __DIR__"shouxihu",
                "east"  : __DIR__"jieshuiting",
        ]));

        set("item_desc", ([
                       "������" : "��������һ�������������Ư��һҶС��\n" , 
                          ]));
        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





