// By Mr.music  zhenjiang's �Ͻ�

inherit ROOM;

void create()
{
        set("short", "�Ͻ�");
        set("long", @LONG
�������򽭵��Ͻ֣�һֱ����ͨ�����ݡ�

LONG
        );

        set("valid_startroom", 1);
        set("no_sleep_room",1);

   //   set("item_desc", ([
   //           "chuan" : "��ЩС��Ҳ������ϡ�\n",
   //             "��":     "����ЩС��������û�˹���Ҳ������Լ���.\n",    
   //                    ]));
        set("objects", ([
                __DIR__"npc/shusheng" : 1,
        ]));

        set("exits", ([
                "north" : __DIR__"chaguan" ,
                "south" : __DIR__"to_wudu1",
        ]));

        setup();
//      "/obj/board/mainboard"->foo();
}

