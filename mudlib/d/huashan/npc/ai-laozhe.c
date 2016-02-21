// ai-laozhe.c

inherit NPC;
#include <ansi.h>
inherit F_MASTER;
void create()
{
        set_name("��ɽ������",({"ai laozhe","ai"}));
        set("title", HIG"��ɽ��ʮ��������"NOR);
        set("long", 
"�����ǻ�ɽ�ĳ��ϰ����ߡ�һ���������ϵ�����������η��\n");
        set("gender", "����");
        set("age", 66);
        set("attitude", "peaceful");
        set("shen_type", 1);
        set("str", 30);
        set("int", 40);
        set("con", 30);
        set("dex", 30);
        
        set("kee", 3800);
        set("max_kee", 3800);
        set("gin", 3600);
        set("max_gin", 2000);
        set("force", 2400);
        set("max_force", 2400);
        set("force_factor", 100);

        set("combat_exp", 1250000);
        set("score", 200000);

        set_skill("force", 170);
        set_skill("blade", 200);
        set_skill("dodge", 180);
        set_skill("parry", 180);
        set_skill("unarmed", 180);
        set_skill("zixia-shengong", 200);
set_skill("huashan-jianfa",200);
set_skill("sword",200);
set_skill("xuantian-neigong",200);
        set_skill("fanliangyi-dao", 200);
        set_skill("hunyuan-zhang", 160);
        set_skill("feiyan-huixiang",160);
        set_skill("literate", 100);

        map_skill("force", "zixia-shengong");
        map_skill("dodge", "feiyan-huixiang");
        map_skill("parry", "fanliangyi-dao");
        map_skill("blade", "fanliangyi-dao");
        map_skill("unarmed", "hunyuan-zhang");

        create_family("��ɽ��", 12, "����");

        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
                (: perform_action, "blade.sanshen" :),
                (: exert_function, "recover" :),
        }) );

        setup();
        carry_object("/obj/cloth")->wear();
        carry_object("/obj/weapon/blade")->wield();
}

void attempt_apprentice(object ob)
{
        if ((int)ob->query_skill("zixia-shengong", 1) < 60) {
                command("say �һ�ɽ�����ڼ��书���������ڹ��ķ���"); 
                command("say " + RANK_D->query_respect(ob) + 
                        "�Ƿ�Ӧ������ϼ���϶��µ㹦��");
                return;
        }
        if ((int)ob->query("mingwang") < 100000) {
                command("say ѧ��֮�ˣ�����Ϊ�ȣ�����ĸߵ͵�������Σ�δ���䣬Ҫ��ѧ���ˡ�");
                command("say �ڵ��з��棬" + RANK_D->query_respect(ob) +
                        "�Ƿ����ò�����");
                return;
        }
        if (ob->query_kar() <25){
                command("say ������Ե������ذɡ�");
		command("say " + RANK_D->query_respect(ob) + "�������ͷ�Ӳ������㡣");
      return;
}
        if (ob->query_spi() < 25) {
                command("say �һ�ɽ�书��Ҫ�ľ��ǿ����ʡ�");
                command("say Ҫ�ܴﵽ¯����֮��������ʲô�ĵ����޹ؽ�Ҫ������ȴ�ǰ��Ҳ�����á�");
                command("say " + RANK_D->query_respect(ob) + "���������㣬ѧ�ҵ��书�����С�");
                return;
        }
        command("say �ðɣ���ͷ�Ӿ��������ˡ�");
        command("recruit " + ob->query("id"));
        ob->set("class","xiake");
}
