inherit NPC;

void create()
{
        set_name("�Ҷ�", ({ "jia ding", "jia" }));
        set("gender", "����");
        set("age", 35);
        set("long", "����ׯ�Ҷ���\n");
        set("combat_exp", 40000);
        set_skill("dodge", 50);
        set_skill("unarmed", 50);
        set_temp("apply/attack",  50);
        set_temp("apply/defense", 50);
        set("shen_type", 1);
        setup();

        add_money("silver",3);
        carry_object("/d/guiyun/obj/cloth")->wear();
}




