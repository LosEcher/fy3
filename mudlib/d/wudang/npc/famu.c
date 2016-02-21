// famu.c ��ľ
inherit NPC;

void create()
{
        set_name("��ľ����", ({ "famu daozhang", "famu" }));
        set("long",
                "�����䵱ɽ�ķ�ľ����, רΪ�����ṩľ�ġ�\n");
        set("gender", "����");
        set("age", 30);
        set("attitude", "peaceful");
        set("shen_type", 1);

        set("str", 20);
        set("int", 20);
        set("con", 25);
        set("dex", 20);

        set("max_gin", 200);
        set("max_kee", 400);
        set("force", 300);
        set("max_force", 300);

        set("combat_exp", 5000);
        set("score", 1000);

        set_skill("force", 60);
        set_skill("dodge", 40);
        set_skill("unarmed", 40);
        set_skill("parry", 40);
        set_skill("blade", 40);
        set_skill("taiji-dao", 25);

        map_skill("parry", "taiji-dao");
        map_skill("blade", "taiji-dao");

        create_family("�䵱��", 4, "����");

        setup();
        carry_object("/obj/weapon/blade")->wield();
}
