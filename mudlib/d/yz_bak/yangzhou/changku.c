
//Mr.music  yangzhou's �ֿ�

inherit ROOM;

void create()
{
        set("short", "�ֿ�");
        set("long", @LONG
	���Ǵ�Ա����ʱ�ѷ���Ʒ�Ĳֿ⡣���ڻ谵�޹⣬�е����ɭ
�ֲ�������û��ǿ���뿪�ĺá������и�С�ţ�����ںڵģ���֪��
Щɶ��

LONG
        );

        set("exits", ([
                "south" : __DIR__"yumatou",
        ]));

        set("objects", ([
                __DIR__"npc/chuanjia": 1,
        ]));

        setup();
}

 
