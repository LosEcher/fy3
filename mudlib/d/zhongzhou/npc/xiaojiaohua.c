// poorman.c

inherit NPC;

void create()
{
        set_name("С�л�", ({ "xiao jiaohua","jiaohua","xiao"}) );
        set("gender", "����" );
        set("age", 16);
        set("long", "�����۹������ꡣ\n");
        set("combat_exp", 5000+random(5000));
        set("shen_type", 1);
        set_skill("unarmed",20);
        set_skill("xianglong-zhang",10);
        set_skill("dodge",20);
        set_skill("xiaoyaoyou",10);
        set_skill("parry",20);
        map_skill("unarmed","xianglong-zhang");
        map_skill("parry","xianglong-zhang");
        map_skill("dodge","xiaoyaoyou");
        set("max_kee",220);
        setup();
        carry_object("/obj/cloth")->wear();
}

