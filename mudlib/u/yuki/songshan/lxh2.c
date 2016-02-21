// Room: /u/yuki/songshan/simen.c

inherit ROOM;

void create()
{
        set("short", "«��������");
        set("long", @LONG
    ������«���µ����ţ����ű������де���ľ��ס�˴�롣
�ſ��������׷��ԲԵ������������壬ż����Ϊһ������������
���Ӵ֡�
LONG
        );
        set("no_clean_up", 0);
        set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"luyansi.c",
  "west" : "/d/songshan/luyanpubu.c",
]));
        set("objects", ([
                 __DIR__"npc/xianhe": 1,
                 __DIR__"npc/lupan": 1,
        ]) );
         setup();
}


int valid_leave(object me, string dir)
{
        object ob;
        
        if(!userp(me))  {
                      if (dir=="east")
                      return 0;
                        else return 1;
     }
        if ( (dir=="east") && (me->query("family/family_name")!="��ɽ��" ))
        {
                ob = present("xianhe");
                if(!ob) return 1;
                        message_vision("\n$N˵�������˱����صأ��벻Ҫ�Ҵ�\n", ob, me);
                        return  notify_fail("");
        }
        return ::valid_leave(me, dir);
}

