#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("½�˷�", ({ "lu chengfeng", "lu" }));
        set("long", "�뷢���ף������������ŵ�һ�����꺺�ӡ������Ƕ�а�ĵ��ĸ�ͽ�ܡ�\n");
        set("gender", "����");
        set("age", 35);
        set("class", "officer");
        set("attitude", "friendly");
        set("shen_type", 1);
        set("str", 40);
        set("int", 30);
        set("per",28);
        set("con", 35);
        
        set("max_kee", 1500);
        set("max_gin", 600);
        set("force", 1000);
        set("max_force", 1000);
        set("force_factor", 100);
        set("combat_exp", 900000);
        set("score", 300000);

        set_skill("force", 110);
        set_skill("dodge", 110);
        set_skill("parry", 110);
      
        set_skill("sword", 110);
        set_skill("yingxian-steps", 110);
        set_skill("bibo-shengong", 110);
        set_skill("luoying-zhang", 110);
        set_skill("luoying-shenjian", 110);
        set_skill("yuxiao-jian", 110);
        set_skill("unarmed", 110);
        set_skill("tanzhi-shentong", 110);
        set_skill("literate", 150);

        map_skill("force", "bibo-shengong");
        map_skill("dodge", "yingxian-steps");
        map_skill("unarmed","tanzhi-shentong");
        map_skill("parry","luoying-shenjian");
        map_skill("sword", "yuxiao-jian");

        setup();
        carry_object("/d/taohua/obj/cloth")->wear();
        add_money("silver", 50);

        create_family("�һ���",2,"����");
}

void attempt_apprentice(object ob)
{
        if ((int)ob->query_skill("bibo-shengong",1) < 30)
        {
                command("say ��ı����ڹ��ķ�̫���ˣ�����ŬŬ�������һ�°ɡ�");
                return;
        }
        if ((int)ob->query("mingwang")<10000)   {
                command("say �㲻�ʺ��������ɣ��Ͽ��뿪����ɣ�");
                return;
        }
        command("say �ܺã���Ȼ���������͵�����Ϊ����");


        command("recruit " + ob->query("id"));
        ob->set("title","�һ�������������");
}

