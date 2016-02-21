#include <ansi.h>
inherit NPC;
void reset_me();
void create()
{
    set_name("����",({"wang wu","wang"}));
    set("gender","����");
    set("title","["+HIR+"��"+NOR+"]������");
    set("age",36);
    set("max_force",1500);
       set("force",1500);
       set("max_kee",1200);
       set("kee",1200);
       set("force_factor",50);
       set("str",30);
    set("combat_exp",500000);
    set_skill("unarmed",160);
    set_skill("parry",160);
       set_skill("dodge",160);
       set_skill("sword",160);
       set_skill("force",160);
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

  message_vision ("$N��¶�׹⣬�����Ӷ���ɱ����\n",who);
  call_out("no_kill",2,who,me);
  return 1;
}

void no_kill(object who, object me)
{
  message_vision ("$N��$nҡ��ҡͷ��\n",me,who);
}
int do_steal(string arg)
{
  object who = this_player();
  object me = this_object();

  message_vision ("$N����֣�����������͵ʲô������\n",who);
  call_out("no_steal",2,who,me);
  return 1;
}

void no_steal(object who, object me)
{
  message_vision ("$N��$nҡ��ҡͷ��\n",me,who);
}

int accept_fight(object me)
{   
       object ob,ob1;
       string str;
    int i;
    me=this_player();
    if (is_fighting()) return notify_fail("�Բ�����λ��ʿ���ڱ��䣬�����Ե�!\n");
    if ((int)me->query_temp("fight/number")>=3) return notify_fail("��������̫�࣬��Ȼ�����!\n");
        ob=present("pai",me);
    if (ob)
         {   str=ob->query("name");
             if (str=="����"||str=="����")
                    {    command("say ������������"+str+",���ǾͲ����ٱ���!\n");
                          return 0;          }
         }
    if ((int)me->query_temp("fight/card")>=3)
             {      command("say ��λ"+RANK_D->query_respect(me)+"�Ѿ������Ӧ�ȼ������ٵ���̨��ȡ����!\n");
                     return 0;
             }
   reset_me();
   command("say �ã���ҪС����!\n");
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
                    if (str=="����"||str=="����")  
               return notify_fail("������ʤ�����������Ѿ���"+str+"��.\n");
                    destruct(ob);  
             }
        me->set_temp("fight/card",3);
     tell_object(me,"��ϲ������ʤ����������Ե���̨��ȡ����!\n");
     return 1;
}
void player_lose(object me)
{
    command("say ��λ"+RANK_D->query_respect(me) +"�������٣��ٽ�������");
    return;
}