// poorman.c

inherit NPC;

void create()
{
        set_name("�Ͻл�", ({ "lao jiaohua","jiaohua","lao"}) );
        set("gender", "����" );
        set("age", 66);
        set("long", "�����۹�����ͷ��\n");
        set("combat_exp", 10000+random(10000));
        set("shen_type", 1);
        set_skill("unarmed",30);
        set_skill("xianglong-zhang",20);
        set_skill("dodge",30);
        set_skill("xiaoyaoyou",20);
        set_skill("parry",30);
        map_skill("unarmed","xianglong-zhang");
        map_skill("parry","xianglong-zhang");
        map_skill("dodge","xiaoyaoyou");
        set("max_kee",400);
        setup();
        carry_object("/obj/cloth")->wear();
}

