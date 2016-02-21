// xuetong.c ѧͯ

inherit NPC;

void create()
{
       set_name("ѧͯ", ({ "xuetong", "xue", "tong" }));
	set("long", 
                "���ǶŸ����õ�Сѧͯ��\n");
	set("gender", "����");
	set("age", 16);
	set("attitude", "peaceful");
	set("shen_type", 1);

	set("str", 20);
	set("int", 20);
	set("con", 22);
	set("dex", 25);
	
        set("max_kee", 100);
        set("max_gin", 100);
        set("force", 100);
        set("max_force", 100);

        set("combat_exp", 1000);
        set("score", 50);

        set_skill("force", 5);
        set_skill("dodge", 5);
        set_skill("unarmed", 5);
        set_skill("parry", 5);
        set_temp("apply/attack", 10);
        set_temp("apply/defense", 10);
	set_temp("apply/damage", 5);

	setup();
	
	carry_object("/obj/cloth")->wear();
}
