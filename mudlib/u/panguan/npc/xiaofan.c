//make by yx
//99.9.5
//qiaofu.c

inherit NPC;
#include <ansi.h>
void create()
{
 set("title",HIG"ϲӭǧ��"NOR);
set_name("���ﷷ��",({"fanzi","fanzi"}) );
set("gender", "����");
set("long",
     "������ӿ����������ص�һ��ѽ��(ask fanzi about ����)\n");
set("age", 35);
set("shen_type",1);
set("attitude", "friendly");
set("str", 25);
set("int", 25);
set("con", 30);
set("dex", 30);
  set("chat_chance", 5);
set("chat_msg", ({
      "���ǿ��ֵ�����ʹ�ߡ���˦���ˣ�һ��Ǯ�͡�����\n",
        }) );
set("inquiry",([
             "����" : "�ҿɲ��һ��˹�أ����ܰ��ͣ�������ɱ�Ǯ��(1 coin)",
]) );
setup();
}
int accept_object(object who, object ob)
{
      object obb;
             if ((ob->query("money_id") && ob->value() == 1) && (! who->query_temp("tanxin") ==1))
      {
       message_vision("����ü����Ц�Ķ�$N˵��л�ˣ���͸��� \n", who);
     message_vision("����ü����Ц�Ķ�$N˵��л�ˣ���͸��� \n", who);
       obb = new("/u/panguan/obj/jiaozi");
     obb->move(this_player());
     message_vision("���Ӷ�$N˵:��õ��������� \n", who);
         who->set_temp("tanxin",1);
     return 1;
      }
         if ((int)who->query_temp("tanxin")==1)
{
           message_vision("������Ц�Ŷ�$N˵������㻹��ԵĻ��͵û�200gold������һ����! \n", who);
           if (ob->query("money_id") && ob->value() >= 2000000)
   {
                     command("chat �벻��һ�����ġ�"+who->query("name")+"����ȻҲ�ϵ���ƭ�ˣ� \n");
            return 1;
   }
}
    else message_vision("���Ӷ�$N˵��һ��Ǯ�Ϳ���������ӳ�,�����ѽ����\n", who);
      return 1;
}
