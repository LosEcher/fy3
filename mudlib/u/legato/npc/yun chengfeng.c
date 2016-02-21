inherit NPC;

void create()
{
        set_name("�Ƴ˷�", ({ "yun chengfeng", "yun" }));
        set("nickname", "���ƽ�");
        set("long", 
                "�������齣���ӵĴ�����Ƴ˷硣\n"
                "�������ʮ�꣬�����ܸɣ������Ƕ�ı���ơ�\n");
        set("gender", "����");
        set("age", 20);
        set("attitude", "peaceful");
        set("class", "swordsman");
        set("shen_type", 1);
        set("str", 26);
        set("int", 30);
        set("con", 26);
        set("dex", 28);
        
        set("max_qi", 1200);
        set("max_jing", 800);

        set("neili", 1500);
        set("max_neili", 1500);
        set("jiali", 50);
        set("combat_exp", 100000);
        set("score", 50000);

        set_skill("force", 190);
        set_skill("tianfeng-xuan", 200);
        set_skill("dodge", 190);
        set_skill("tiangang-zhi",190);
        set_skill("unarmed", 190);
        set_skill("huifeng-jian", 195);
        set_skill("parry", 195);
        set_skill("sword", 190);
        set_skill("hunyuan-zhang", 190);
        set_skill("yuxuan-guizhen", 180);
        set_skill("literate", 200);

        map_skill("force", "yunxuan-guizhen");
        map_skill("dodge", "tianfeng-xuan");
        map_skill("unarmed", "hunyuan-zhang");
        map_skill("parry", "huifeng-jian");
        map_skill("sword", "huifeng-jian");

        create_family("�齣ɽׯ", 2, "����");

        setup();
        carry_object("/obj/weapon/sword")->wield();
}

