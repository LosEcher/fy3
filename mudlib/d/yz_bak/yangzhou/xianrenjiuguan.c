
//Mr.music  yangzhou's ���˾ɹ�

inherit ROOM;

void create()
{
        set("short", "���˾ɹ�");
        set("long", @LONG
	���˾ɹ��ֳ�ƽɽ�ã���ǰ��ʯ����ƾ��Զ����������ɽ
���ƹ�Ҿ��ǰ�����⡰����ƾ����������ɽ������  �����Ծƣ���
����������ͷ��������һ��Ȫ�����ƣ����µ���Ȫ��

LONG
        );

        set("exits", ([
                "east"   : __DIR__"damingsi",
        ]));

        set("item_desc", ([
                       "Ȫ" : "Ȫˮ����������������" , 
                          ]));
        set("resource/water",1);        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





