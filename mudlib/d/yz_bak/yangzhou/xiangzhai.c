
//Mr.music  yangzhou's ��Ҷ��ի

inherit ROOM;

void create()
{
        set("short", "��Ҷ��ի");
        set("long", @LONG
	����С¥�������ݰ˹�֮�ף������黭���Ұ����������鷿--
��Ҷ��ի��С¥�����ˮ����ˮ����������������ֻ����������һ
���������һ�������辶���������Ǻɻ����ˡ�

LONG
        );

//        set("no_fight","1");
//        set("no_magic",1);
        set("exits", ([
                "north" : __DIR__"zhulin",
                "west" : __DIR__"hehuachi",
        ]));

        set("item_desc", ([
                       "����" : "������Ƭ�����֣�������뵽��Щʲô\n" , 
                          ]));
        
        set("objects", ([
                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}


int valid_leave(object me, string dir)
{
        me->set_temp("mark/֣", 0);
        return 1;
}



