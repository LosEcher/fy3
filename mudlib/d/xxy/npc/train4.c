#include <ansi.h>
inherit NPC;
void reset_me();
void create()
{
    set_name("赵六",({"zhao liu","zhao"}));
    set("gender","男性");
    set("title","["+HIR+"我"+NOR+"]级试手");
    set("age",40);
    set("max_force",2000);
       set("force",2000);
       set("max_kee",1500);
       set("kee",1500);
       set("force_factor",50);
       set("str",30);
    set("combat_exp",1000000);
    set_skill("unarmed",200);
    set_skill("parry",200);
       set_skill("dodge",200);
       set_skill("sword",200);
       set_skill("force",200);
    setup();
    carry_object("/obj/cloth")->wear();
}
void init()
{
   add_action("do_kill","kill");
   add_action("do_steal","steal");
}
int do_kill(string arg)
{
  object who = this_player();
  object me = this_object();

  if(!arg || present(arg,environment(me))!=me) return 0;

  message_vision ("$N眼露凶光，看样子动了杀机！\n",who);
  call_out("no_kill",2,who,me);
  return 1;
}

void no_kill(object who, object me)
{
  message_vision ("$N向$n摇了摇头。\n",me,who);
}
int do_steal(string arg)
{
  object who = this_player();
  object me = this_object();

  message_vision ("$N伸出手，鬼鬼祟祟地想偷什么东西。\n",who);
  call_out("no_steal",2,who,me);
  return 1;
}

void no_steal(object who, object me)
{
  message_vision ("$N向$n摇了摇头。\n",me,who);
}

int accept_fight(object me)
{   
       object ob,ob1;
       string str;
    int i;
    me=this_player();
    if (is_fighting()) return notify_fail("对不起，这位武士正在比武，你请稍等!\n");
    if ((int)me->query_temp("fight/number")>=3) return notify_fail("你比武次数太多，请等会再来!\n");
        ob=present("pai",me);
    if (ob)
         {   str=ob->query("name");
             if (str=="金牌")
                    {    command("say 阁下身上已有"+str+",我们就不必再比了!\n");
                          return 0;          }
         }
    if ((int)me->query_temp("fight/card")>=4)
             {      command("say 这位"+RANK_D->query_respect(me)+"已经获得相应等级，请速到柜台领取奖牌!\n");
                     return 0;
             }
   reset_me();
   command("say 好，你要小心了!\n");
  i=me->query_temp("fight/number");
  me->set_temp("fight/number",i+1);
   remove_call_out("check_fight");
   call_out("check_fight",1,this_object(),me);
   return 1;
}
void check_weapon()
{
     object ob,ob1;
     ob=this_player();
           if (ob->query_temp("weapon")!=0)
                {
                    ob1=present("sword",this_object());
                    if (!ob1)
                        {
                              ob1=new("/d/obj/weapon/sword/changjian");
                              ob1->move(this_object());
                        }
                    if (this_object()->query_temp("weapon")==0)
                           command("wield sword");
                      return;
                }
    if (this_object()->query_temp("weapon")!=0)
               command("unwield sword");
         return;
}                                    
void reset_me()
{
      set("eff_kee",query("max_kee"));
    set("eff_gin",query("max_gin"));
    set("eff_sen",query("max_sen"));
    set("kee", query("max_kee"));
    set("gin",query("max_gin"));
    set("sen",query("max_sen"));
    set("force", query("max_force"));
    return;
} 
void check_fight (object npc, object me)
{ 
  int npc_max_kee;
      npc_max_kee=npc->query("max_kee");
  check_weapon();
  if (is_fighting())
  {
    call_out ("check_fight",1,npc,me);
    return;
  }

  if (!present(me, environment(npc)))
    return;

  if ((int)npc->query("kee")*100/(1+npc_max_kee) <= 50 )
      call_out("player_win", 1, me);
  else call_out("player_lose", 1, me);
  return;
}
void player_win(object me)
{
  object ob;
  string str;
    ob=present("pai",me);
    if (ob)
        {
           str=ob->query("name");
                    if (str=="金牌")  
               return notify_fail("你比武得胜，但你身上已经有"+str+"了.\n");
             }
        me->set_temp("fight/card",2);
     tell_object(me,"恭喜你比武得胜，现在你可以到柜台领取金牌!\n");
     return 1;
}
void player_lose(object me)
{
    command("say 这位"+RANK_D->query_respect(me) +"不必气馁，再接再厉！");
    return;
}