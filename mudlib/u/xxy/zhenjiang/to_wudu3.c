// By Mr.music  zhenjiang's ɽ·

inherit ROOM;

void create()
{
        set("short", "ɽ·");
        set("long", @LONG
	������һ��ɽ·����֪ͨ���ġ���
LONG
        );

        set("valid_startroom", 1);
        set("no_sleep_room",1);

   //   set("item_desc", ([
   //           "chuan" : "��ЩС��Ҳ������ϡ�\n",
   //             "��":     "����ЩС��������û�˹���Ҳ������Լ���.\n",    
   //                    ]));
        set("objects", ([
         //       __DIR__"npc/shusheng" : 1,
        ]));

        set("exits", ([
                "north" : __DIR__"to_wudu2" ,
                "south" : __DIR__"to_wudu4",
        ]));

        setup();
//      "/obj/board/mainboard"->foo();
}

