// fang.c ������

inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("������", ({ "fang bilin","fang","bilin"}));
        set("long",
                "���Ƕ����ɵĵ��Ĵ��׼ҵ��ӡ�\n");
        set("gender", "Ů��");
        set("age", 20);
        set("attitude", "peaceful");
        set("mingwang", 10000);
        set("class", "xiake");

        set("str", 30);
        set("int", 30);
        set("con", 30);
        set("per", 30);

        set("max_kee", 1000);
        set("max_gin", 500);
        set("force", 1500);
        set("max_force", 1500);
        set("force_factor", 25);
        set("max_sen", 350);

        set("combat_exp", 150000);
        set("score", 1000);
        set_skill("foxuexinde", 40);
        set_skill("force", 60);
        set_skill("dodge", 80);
        set_skill("parry", 70);
        set_skill("unarmed", 80);
        set_skill("sword", 60);
        set_skill("sixiang-zhang", 80);
        set_skill("anying-fuxiang", 50);
        set_skill("huifeng-jian", 60);
        set_skill("emei-xinfa", 80);

        map_skill("force","emei-xinfa");
        map_skill("dodge","anying-fuxiang");
        map_skill("unarmed","sixiang-zhang");
        map_skill("sword","huifeng-jian");
        map_skill("parry","sixiang-zhang");

        create_family("������", 4, "����");

        setup();
        carry_object("/d/obj/cloth/skirt")->wear();
        carry_object("/obj/weapon/sword")->wield();
}

void attempt_apprentice(object ob)
{
        if ((int)ob->query("combat_exp") > 10000) {
                command("say �Ҷ���ע�����ޣ��Ե���Ҫ�������ܼ�į��");
                command("say �ڽ����������棬" + RANK_D->query_respect(ob) +
                        "�����ḻ���Ƿ����ڶ����޵���");
                return;
        }
        if ((int)ob->query("mingwang") < 0) {
                command("say �Ҷ������������������ɣ��Ե���Ҫ���ϡ�");
                command("say �ڵ��з��棬" + RANK_D->query_respect(ob) +
                        "�Ƿ����ò�����");
                return;
        }
        command("say �ðɣ��Ҿ��������ˡ�");
        command("recruit " + ob->query("id"));
}
