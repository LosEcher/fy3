
//Mr.music  yangzhou's ���۱���

inherit ROOM;

void create()
{
        set("short", "���۱���");
        set("long", @LONG
	��������ΰׯ�ϵĴ��۱�������������������Ĵ��գ��м乩����
��������Ľ��񣬵����������ƣ�����������Ů���������ͷ��������һ������
���������ݡ���������Ե�䣬��Ǯ�Ʋ�ʩ�á������һС�ţ�ͨ��������

LONG
        );


//        set("no_fight","1");
        set("no_magic",1);
        set("valid_startroom", 1);
        set("exits", ([
                "south" : __DIR__"damingsi",
                "north" : __DIR__"chanfang",
        ]));

        set("item_desc", ([
                       "��Ե��" : "�����ͶǮ�á�\n" , 
                       "����"   : "һ��ܾ��Ƶ��ѵ档\n",
                       "��������" : "����������������ȥ����ν������",
                           ]));

        set("objects", ([
                __DIR__"npc/zhuchi": 1,
                __DIR__"npc/zhikeseng": 1,
                __DIR__"npc/obj/shanyuanxiang": 1,
               __DIR__"npc/obj/putuan" : 1,
        ]));

        setup();
}


