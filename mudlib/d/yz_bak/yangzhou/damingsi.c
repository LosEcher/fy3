
//Mr.music  yangzhou's ������

inherit ROOM;

void create()
{
        set("short", "������");
        set("long", @LONG
	�����Ǵ������£�����ʯ�ڿ��ţ�������һ�ۡ������������ƣ�
ľ�����������ڹ��ӵ��ţ�ׯ����Ĭ�����������˾ɹݣ��򶫾��ǡ���
����������ǰ��������ΰ�ġ����۱����

LONG
        );

        set("exits", ([
                "north"     : __DIR__"daxiongbaodian",
                "west"    :  __DIR__"xianrenjiuguan",
                "east"   : __DIR__"xilingta",
                "down"   : __DIR__"huangye8",
        ]));

        set("valid_startroom", 1);
        set("item_desc", ([
                       "������" : "����ɫ��һ��������ׯ�������ϡ�" , 
                          ]));
        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





