
//Mr.music  yangzhou's ����԰

inherit ROOM;

void create()
{
        set("short", "����԰");
        set("long", @LONG
	������·�ߵ�һ��С�Ƶ꣬�򿿽���Ұ���ƿ�Ҳ���Ǻܶ࣬
������͵���ϰ����Ǯ�����Ҳ���ܾ��񡣵���һ�����ơ�������
���׵׺��֣��ǳ���Ŀ��

LONG
        );

        set("exits", ([
                "east"   : __DIR__"siqiaoyanyu",
        ]));

        set("item_desc", ([
                       "����" : "�׵׺��֣��ǳ���Ŀ�ľ���" , 
                          ]));
        
        set("objects", ([
		__DIR__"npc/txlaoban":1,
                __DIR__"npc/nanhai": 1,
                __DIR__"npc/nuhai": 1,  
        ]));

        setup();
}





