inherit NPC;
void create()
{
        set_name("������", ({ "tie qiaosan", "tie"}) );
        set("title", "�㵴��������");
        set("gender", "56");
	set("age", 46);
	set("str", 30);
	set("cor", 30);
	set("cps", 33);
 	set("int", 30);
	
	set("shen_type", 4);

	set("max_force", 5000);
	set("force", 5000);
	set("force_factor", 50);

        set("attitude", "peaceful");
        set("combat_exp", 400000);
       set_skill("unarmed", 120);
	set_skill("sword", 120);
	set_skill("parry", 120);
	set_skill("dodge", 120);
       set_skill("luoyan-sword",120);
       set_skill("luoyan-xinfa",120);
       set_skill("tianfeng-shenfa",120);
       map_skill("dodge","tianfeng-shenfa");
       map_skill("sword","luoyan-sword");
	
	set_temp("apply/attack", 15);
	set_temp("apply/defense", 15);
	set_temp("apply/damage", 20);
        setup();
}
