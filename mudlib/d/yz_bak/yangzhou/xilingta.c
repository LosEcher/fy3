
//Mr.music  yangzhou's ������

inherit ROOM;

void create()
{
        set("short", "������");
        set("long", @LONG
	������վ�ڸ������Ƶ��������£�ֻ�����Ž��գ�������Ҷ��
�㲻�����ƣ�Ϊ��û��������ɨ�أ�Ժ���������ˣ�ֻ����ԺƮ��һ
�����̣�����˸���ս������о�����Щʲô��

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("exits", ([
                "west" : __DIR__"damingsi",
        ]));

        set("item_desc", ([
                       "������" : "����ɫ��ʯ����\n" , 
                          ]));
        
        set("objects", ([
               __DIR__"npc/obj/zhuye": 1,
        ]));

        setup();
}





