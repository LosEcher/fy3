//Mr.music yangzhou ����

inherit ROOM;

void create()
{
        set("short", "֪������");
        set("long", @LONG
	����������ݸ����ã�������ǰ����һλ�ɷ���ǵ����ˣ�������
����֪���������ĺ��Ĵ��ĺ�--ŷ���ޡ�ŷ���������԰����������ڣ����
����ܵõ�������ʶ�����������ˡ���ǰ��Ŀ�Ĵ����ǡ��ྲ����

LONG
        );

        set("exits", ([ 
                      "north" : __DIR__"yamen",
                     ]));
        set("objects", ([
                __DIR__"npc/shutong": 2,
		__DIR__"npc/ouyang":1,
        ]) );

        setup();
}

