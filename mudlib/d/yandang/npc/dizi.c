inherit NPC;

void create()
{
	set_name("ɽׯ����", ({ "dizi"}));
	set("gender", "����");
	set("age", 23);

	set("combat_exp", 5000);
	set("shen_type", 1);
       set_skill("unarmed", 30);
	set_skill("sword", 30);
	set_skill("parry", 30);
	set_skill("dodge", 30);
       set_skill("force", 30);
set_skill("luoyan-jianfa",30);
set_skill("yuxuan-guizhen",30);
       set_skill("tianfeng-xuan",30);
       set_skill("tiangang-zhi",30);
       map_skill("dodge","tianfeng-xuan");
map_skill("sword","luoyan-jianfa");
       map_skill("unarmed","tiangang-zhi");
       map_skill("parry","tiangang-zhi");
map_skill("force","yuxuan-guizhen");


	setup();
	carry_object("obj/weapon/sword")->wield();
	carry_object("/obj/cloth")->wear();
}
	
