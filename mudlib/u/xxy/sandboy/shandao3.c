// Room: /d/sandboy/shandao3.c

inherit ROOM;

void create ()
{
  set ("short", "ɽ��ǰ");
  set ("long", @LONG
��һ�����£����縫��һ�㣬��ʮ�ɵĹ⻬ʯ�ڣ���ݲ�����ֱ������  
���ӹ�ȥ�����ͱ�֮�䣬ȴ����һ��ȱ�ڣ���Լ��ߣ����������˲������.  
������һ��ȱ��֮�⣬Ŀ���ܼ��������޿���֮·��   
LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/qiangong.c" : 1,
  __DIR__"npc/kunpo.c" : 1,
]));
  set("outdoors", "/d/sandboy");
  set("exits", ([ /* sizeof() == 1 */
  "northdown" : __DIR__"shandao4",
]));

  setup();
}
int valid_leave(object me,string dir)
{
    string str;
      str=me->query("gender");
 if (!me->query_temp("sandboy/���Թ�ȥ")&&dir=="northdown")
         {  
             if (str=="����"&&present("qian gong",this_object()))
                       {
                          message_vision("Ǭ������һЦ����$N��:���ȥ������ү���У����ԭ��?(yuanyi)\n",me);
                          me->set_temp("sandboy/to_be_hit_1",1);
                          return notify_fail("");
                       }
             if (str=="Ů��"&&present("kun po",this_object()))
                     {
                        message_vision("���Ŷ�$N����һЦ:�ӵ�ס�������У���͹�ȥ����Ը��ô?(yuanyi)\n",me);
                        me->set_temp("sandboy/to_be_hit_2",1);
                        return notify_fail("");
                     }
         }
return ::valid_leave(me,dir);
}
   
