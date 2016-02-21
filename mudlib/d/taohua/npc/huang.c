#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("��ҩʦ", ({ "huang yaoshi", "huang" }));
        set("title",  "��а" );
        set("long", "�׷��Բԣ����³��۵�һ�����ߡ��������һ���������\n");
        set("gender", "����");
        set("age", 65);
        set("class", "officer");
        set("attitude", "friendly");
        set("shen_type", 1);
        set("str", 50);
        set("int", 30);
        set("per",28);
        set("con", 35);
        
        set("max_kee", 2500);
        set("max_gin", 1000);
        set("force", 2500);
        set("max_force", 3000);
        set("force_factor", 100);
        set("combat_exp", 3000000);
        set("score", 300000);

        set_skill("force", 210);
        set_skill("dodge", 210);
        set_skill("parry", 210);
      
        set_skill("sword", 210);
        set_skill("yingxian-steps", 210);
        set_skill("bibo-shengong", 210);
        set_skill("luoying-zhang", 210);
        set_skill("luoying-shenjian", 210);
        set_skill("yuxiao-jian", 210);
        set_skill("unarmed", 210);
        set_skill("tanzhi-shentong", 210);
        set_skill("literate", 250);

        map_skill("force", "bibo-shengong");
        map_skill("dodge", "yingxian-steps");
        map_skill("unarmed","tanzhi-shentong");
        map_skill("parry","luoying-shenjian");
        map_skill("sword", "yuxiao-jian");

        setup();
        carry_object("/d/taohua/obj/baipao")->wear();
        add_money("silver", 50);

        create_family("�һ���",18,"����");
}

void attempt_apprentice(object ob)
{
        if ((int)ob->query_skill("bibo-shengong",1) < 80)
        {
                command("say ��ı����ڹ��ķ�̫���ˣ�����ŬŬ�������һ�°ɡ�");
                return;
        }
        if ((int)ob->query("mingwang")<50000)   {
                command("say �����鲻�ã��������ͷ��Ŀ�����Ӿͷ����Ͽ��뿪����ɣ�");
                return;
        }
        command("say �ܺã���Ȼ���������͵�����Ϊ����");


        command("recruit " + ob->query("id"));
        ob->set("title","�һ����ڶ�������");
}

