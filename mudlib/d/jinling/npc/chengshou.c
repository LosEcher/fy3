#include <ansi.h>

inherit NPC;
void create()
{       
        set_name("�߽���",({"gao jinchang","gao"}));
        set("title",HIC"�������"NOR);
        set("gender","����");
        set("age",40);
        set("long",
                HIC"����ȥ���ĺ����䣬������һ��֮����\n"NOR);
        set("combat_exp",500000);
        set_temp("apply/attack",15);
        set_temp("apply/defense",15);
        set_skill("unarmed",150);
        set_skill("blade",150);
        set("max_kee",2000);
        set("kee",2000);
        set("mingwang",3);
        set_skill("dodge",150);
        set_skill("parry",150);
        set("attitude", "friendly");
        setup();
        carry_object("/obj/armor/yinjia")->wear();
        carry_object("/obj/weapon/changdao")->wield();

}

void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}

void greeting(object ob)
{

        if( !ob || environment(ob) != environment() ) return;
        if(ob->query("age")<16) {
                message_vision(HIC"�߽�������$N��ȵ�������ɲ���"+
                RANK_D->query_respect(ob)+"���ĵط���\n"NOR,ob);
                return ;
        }
        switch( random(2) ) {
                case 0:
                message_vision(HIC"���غ�����ɫ�ض�$N������λ"+
                RANK_D->query_respect(ob)+"��ʲôԩ��Ҫ���߰���\n"NOR,ob);
                        break;
                case 1:
                message_vision(HIC"����......\n"NOR,ob);
                        break;
                           }
}
int accept_fight(object who)
{
        int i;
        object npc,env,*inv;
        npc=new(__DIR__"yinjiaweishi");
        env=environment(this_object());
        message_vision("���ض�$Nŭ��һ�����㾹Ȼ��ɱ���췴��\n"+
        HIR"�������ڣ������Ұ���������¡�\n"NOR
        "��ʱ�����Ե�������ʿ���ε�����$N��\n",who);
        if(sizeof(children(base_name(npc)))<=4)
                npc->move(env);
        else    destruct(npc);
        this_object()->kill_ob(who);
        inv=all_inventory(env);
        for(i=0;i<sizeof(inv);i++)      {
		if (inv[i]->query("id")!="yinjia weishi")      continue;
                inv[i]->kill_ob(who);
        }
        return 1;
}
