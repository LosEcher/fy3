// ni kuai.c by tianson
#include <weapon.h>
inherit HAMMER;
void create()
{
        set_name("���",({"ni kuai", "ni"}));
        set_weight(2000);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long","
һ�������򣬿�����Բ�����������е�࣬�������ġ�
���������������ʲô������Ҳ��֪�ܲ����ҿ���\n");
                set("unit","��");
                set("value",0);
                set("material","stone");
                set("wield_msg","$N��$n�������������úܲ�˳�֣��ɴ౧�ڻ��С�\n");
                set("unwield_msg","$N��$n����������˦��˦��ʹ���֡�\n");
        }
        init_hammer(5);
        setup();
}
void init()
{
        add_action("do_za", "za");
}
int do_za(string arg){
        object ob;
        object me=this_player();
        object weapon = me->query_temp("weapon");

        int myeffstr=me->query("str")+me->query("force_factor");
        int mykar=me->query_kar(), diff=40-mykar, percentage;
        int mymaxkee=me->query("max_kee");
 
        if (!arg || (arg != "ni kuai"))
                return notify_fail("��Ҫ��ʲô��\n");
        if (me->is_busy()) return notify_fail("��æ���أ�\n");
        if( (int)me->query("eff_kee") < (int)me->query("max_kee") / 2 )
                return notify_fail("������һ���������ű�İɡ�\n");
        if (weapon)
                return notify_fail("���ǿ����ҵĺã���һ�����ж������üһ���Ū���ˡ�\n");
        if (myeffstr<40)
        {
          message_vision("$N�ҵ������ۣ��������Բ�����˿���ơ�\n", me);
          return 1;
        }
        
       message_vision("$N��������������������ȥ���������ҵ��ķ����ѣ�����ˡ�\n", me);
       message_vision("ֻ������Ӵ��һ����$N���Ʊ�������������Ѫ���˵����ء�\n", me);
       message_vision("����ʲô�������˳�����\n");
       percentage=diff/3;
       me->receive_wound("kee", mymaxkee*percentage/200);
       if(random(me->query("kar"))<25)
         if(random(me->query("kar"))<20)
            if(random(me->query("kar"))<15)
              {ob=new("/open/tianson/nikuai/lanni.c");
               ob->move(environment(me));
               message_vision("$N���־���һ�����࣬����ʧ����̾�˿�����\n",me);
               destruct(this_object());
               return 1;
              }
            else{
               ob=new("/obj/money/silver.c");
               ob->set_amount(10);
               ob->move(environment(me));
               message_vision("$N��ͷһ�����٣�ʮ�����ӣ����˲�ע�⣬���ɡ�\n",me);
               destruct(this_object());
               return 1;
              }
          else{
             ob=new("/obj/money/silver.c");
             ob->set_amount(50);
             ob->move(environment(me));
             message_vision("$N��ͷһ�����٣���ʮ�����ӣ�������Ҳ�˲����ˣ����ɡ�\n",me);
             destruct(this_object());
             return 1;
            }
        else{
           ob=new("/obj/money/gold.c");
           ob->move(environment(me));
           message_vision("$N��ͷһ�����ۣ����ӣ�$Nһ���������˽����ϡ����˶��۲��ˣ����ɡ�\n",me);
           destruct(this_object());
           return 1;
           }
}

