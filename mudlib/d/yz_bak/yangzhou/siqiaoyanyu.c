
//Mr.music  yangzhou's ��������

inherit ROOM;

void create()
{
        set("short", "��������");
        set("long", @LONG
	���ž��Ǻ��ţ������ţ������ţ������ţ������������ֳ�
��ͤ�ţ�ÿ��������������ˮ�Բ�ʱ��������������˿�̰�֮�У���
�����֣�������֮Ȥ��

LONG
        );

        set("exits", ([
                "south"  : __DIR__"changdichunliu",
                "west"   : __DIR__"baita",
                "north"  : __DIR__"24qiao",
        ]));

        set("item_desc", ([
                       "������" : "��������һ�������������Ư��һҶС��\n" , 
                          ]));
        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





