inherit NPC;
#include <ansi.h>
void create()
{
    set_name("����",({"kun po"}));
    set("title","["+HIY+"Ǭ������"+NOR+"]");
    set("age",63);
    set("gender","Ů��");
    set("long","��߲������ߣ����ϵ�ֻ�й�ͷ�����⣬
˫���缦צ��һ�㣬һ�����������ϻλε���.\n");
    set("str",16);
    set("max_kee",1000);
    set("kee",1000);
    set("max_force",1000);
    set("force",1000);
    set("force_factor",40);
    set("combat_exp",100000);
    set_skill("dodge",80);
    set_skill("force",60);
    set_skill("sword",80);
    set_skill("unarmed",60);
    set_skill("parry",60);
    setup();
carry_object("/obj/cloth")->wear();
carry_object("/d/obj/weapon/sword/panguanbi")->wield();
  add_money("gold",1);
}
void init()
{
    ::init();

    add_action("do_agree", "yuanyi");
    add_action("do_agree", "agree");
}
int do_agree(string arg)
{
    object me=this_player(), npc=this_object(), ob;
    string myname=me->name(), myrude=RANK_D->query_rude(me);

    if (!me->query_temp("sandboy/to_be_hit_2"))
   return 0;
    me->delete_temp("sandboy/to_be_hit_2");
    set("force", 2*query("max_force"));
    set("force_factor", 50);
    if (!(ob=query_temp("weapon"))
     || ob->query_temp("skill_type") != "sword")
    {
   destruct(ob);
   ob=new("/d/obj/weapon/sword/panguanbi");
   ob->move(npc);
   command("wield sword");
    }
    command("say �ٺ٣��ҽ��������޻أ�");
    COMBAT_D->do_attack(npc, me, query_temp("weapon"));
    if(me->query("kee") < 0
    || !present(me, environment()))
    {
   command("say �ٺ٣�"+myrude+"��ô����书��Ҳ�Ҹ������Ӷ��֣�");
   return 1;
    }
    command("say �е���˼���ٿ���һ�У�");
    COMBAT_D->do_attack(npc, me, query_temp("weapon"));
    if(me->query("kee") < 0
    || !present(me, environment()))
    {
   command("say "+myrude+"���ǻ�ȥ�������ٳ��������ɣ�");
   return 1;
    }
    command("say �ף��书��Ȼ����");
    COMBAT_D->do_attack(npc, me, query_temp("weapon"));
    if(me->query("kee") < 0
    || !present(me, environment()))
    {
   command("say �ٺ�,"+myrude+"����������֡�");
   return 1;
    }
    me->add_temp("sandboy/���Թ�ȥ", 1);
    command("say "+myname+"�书�����������������飬��ȥ�ɡ�");

    return 1;
}
int accept_fight(object me)
{
    command("say �������������鶺���棬ȥ!ȥ!ȥ!��һ��ȥ!\n");
    return 0;
}
 