// Room: /d/sandboy/shandao3.c

inherit ROOM;

void create ()
{
  set ("short", "山崖前");
  set ("long", @LONG
这一道悬崖，有如斧劈一般，数十丈的光滑石壁，寸草不生，直向两侧  
伸延过去但在峭壁之间，却有着一道缺口，竟约五尺，可容叁个人并肩而过.  
除了这一道缺口之外，目力能及处，再无可行之路。   
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
 if (!me->query_temp("sandboy/可以过去")&&dir=="northdown")
         {  
             if (str=="男性"&&present("qian gong",this_object()))
                       {
                          message_vision("乾公哈哈一笑，对$N道:想过去，接老爷三招，你可原意?(yuanyi)\n",me);
                          me->set_temp("sandboy/to_be_hit_1",1);
                          return notify_fail("");
                       }
             if (str=="女性"&&present("kun po",this_object()))
                     {
                        message_vision("坤婆对$N嘻嘻一笑:接得住老身三招，你就过去，你愿意么?(yuanyi)\n",me);
                        me->set_temp("sandboy/to_be_hit_2",1);
                        return notify_fail("");
                     }
         }
return ::valid_leave(me,dir);
}
   
