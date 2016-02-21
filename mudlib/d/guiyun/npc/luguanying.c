#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("½��Ӣ", ({ "lu guanying", "lu" }));
        set("long", "���ǹ���ׯ��ׯ��½��Ӣ�������������������׳����
���ж�֮�����Ķ��ţ�ǫ������һ�������ӵܷ緶��
����������̫��Ⱥ�������죬��֪�����Ǽ١�\n");
        set("gender", "����");
        set("age", 20);
        set("class", "officer");
        set("attitude", "friendly");
        set("shen_type", 1);
        set("str", 30);
        set("int", 30);
        set("per",25);
        set("con", 35);
        
        set("max_kee", 900);
        set("max_gin", 400);
        set("force", 800);
        set("max_force", 1000);
        set("force_factor", 100);
        set("combat_exp", 400000);
        set("score", 300000);

        set_skill("force", 60);
        set_skill("dodge", 70);
        set_skill("parry", 70);
      
        set_skill("sword", 70);
        set_skill("yingxian-steps", 100);
        set_skill("bibo-shengong", 70);
        set_skill("luoying-zhang", 60);
        set_skill("luoying-shenjian", 70);
        set_skill("yuxiao-jian", 70);
        set_skill("unarmed", 70);
        set_skill("tanzhi-shentong", 70);
        set_skill("literate", 100);

        map_skill("force", "bibo-shengong");
        map_skill("dodge", "yingxian-steps");
        map_skill("unarmed","tanzhi-shentong");
        map_skill("parry","luoying-shenjian");
        map_skill("sword", "yuxiao-jian");

        setup();
        carry_object("/d/taohua/obj/cloth")->wear();
        add_money("silver", 50);

        create_family("�һ���",3,"����");
}

void attempt_apprentice(object ob)
{

        if ((int)ob->query("mingwang")<1)   {
                command("say ��һ�����£�����������ɣ�");
                return;
        }
        command("say �ܺã���Ȼ���������͵�����Ϊ����");


        command("recruit " + ob->query("id"));
        ob->set("title","�һ�������������");
}

