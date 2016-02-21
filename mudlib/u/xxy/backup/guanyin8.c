// Room: /d/yandang/guanyin8
inherit ROOM;

void create ()
{
  set ("short", "�ھŲ�");
  set ("long", @LONG
���й������һ��ǧ�ֹ���,��̬����,ʹ�˶����ȱ�֮��,��ߵ�
ɽ������һ��ˮ��(chi),���е���Ե���ϰ���ǩͲ,�������һ�´˴�
��ʦ��,��˵�˴���ǩ�Ǻ����.
LONG);

  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"guanyin7",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "chi" : "ϴ��Ȫ������ʯ���е��䵽ϴ�ĳ���,��˵��ˮ��а��ħ,������Ч
������һ��.
",
]));
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/xueshan.c" : 1,
  __DIR__"obj/gongdexiang.c" : 1,
]));

  setup();
}
void init()
{
    add_action("do_drink", "drink");
    add_action("do_drink", "he");
}
int do_drink(string sss)
{

object ob;
ob=this_player();
if ((sss!="chi")&&(sss!="shui")&&(sss!="water"))
  {
   return 0;
  }
if(ob->query("water")> ((int)ob->query("str")-10)*10+150 )
 {
  tell_object(ob,"������˻�Ҫ�Ȱ���\n");
  return 1;
 } 
else
 {  
 say(ob->query("name")+"ſ��ˮ�رߣ�һ�������˹���. \n");
 tell_object(ob,"��ſ��ˮ�رߣ�һ�������˹���. \n");
 ob->set("water",((int)ob->query("str")-10)*10+200);

  return 1;
 }

 }
int valid_leave(object me, string dir)
{
        object ob1;
        ob1 = present("qiantong",me);
        if(ob1)
        {       message_vision("$N��ǩͲ��������,������ȥ\n",me);
                destruct(ob1);
}
        me->delete_temp("kick");
        me->delete_temp("oldsix_flag/money");  
         return ::valid_leave(me, dir);

}
