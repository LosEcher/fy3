inherit NPC;
#include <ansi.h>
void create()
{
    set_name("Ǭ��",({"qian gong"}));
    set("title","["+HIY+"Ǭ������"+NOR+"]");
    set("age",65);
    set("gender","����");
    set("long","�ߴ������������ų����ϣ�����ʮΧ��
�۴����룬���еĴ�ա�����������ߣ����һ�߶��硣\n");
    set("str",45);
    set("max_kee",1500);
    set("kee",1500);
    set("max_force",1400);
    set("force",1400);
    set("force_factor",80);
    set("combat_exp",100000);
    set_skill("dodge",40);
    set_skill("force",80);
    set_skill("blade",80);
    set_skill("unarmed",80);
    set_skill("parry",60);
    setup();
carry_object("/obj/cloth")->wear();
carry_object("/d/sandboy/obj/zhadao")->wield();
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

    if (!me->query_temp("sandboy/to_be_hit_1"))
   return 0;
    me->delete_temp("sandboy/to_be_hit_1");
    set("force", 2*query("max_force"));
    set("force_factor", 100);
    if (!(ob=query_temp("weapon"))
     || ob->query_temp("skill_type") != "blade")
    {
   destruct(ob);
   ob=new("/d/sandboy/obj/zhadao");
   ob->move(npc);
   command("wield blade");
    }
    command("say �������е��ӣ�");
    COMBAT_D->do_attack(npc, me, query_temp("weapon"));
    if(me->query("kee") < 0
    || !present(me, environment()))
    {
   command("say �ٺ٣�"+myrude+"һ�һﶼ����ס�����ǻ�ȥ��������ɣ�");
   return 1;
    }
    command("say �����е���˼���ٿ���һ�У�");
    COMBAT_D->do_attack(npc, me, query_temp("weapon"));
    if(me->query("kee") < 0
    || !present(me, environment()))
    {
   command("say "+myrude+"�ܾ�ס��һ�����Ѿ��������ˣ�����Ϳ�������ڶ��������ܲ����ˣ�");
   return 1;
    }
    command("say �ף���С���书��Ȼ����");
    COMBAT_D->do_attack(npc, me, query_temp("weapon"));
    if(me->query("kee") < 0
    || !present(me, environment()))
    {
   command("say ��������˵"+myrude+"�������������аɡ�");
   return 1;
    }
    me->add_temp("sandboy/���Թ�ȥ", 1);
    command("say "+myname+"�书�������ӿ������ۣ���ȥ�ɡ�");

    return 1;
}
int accept_fight(object me)
{
    command("say �����������鶺���棬ȥ!ȥ!ȥ!��һ��ȥ!\n");
    return 0;
}
 