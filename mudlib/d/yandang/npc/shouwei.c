inherit NPC;

void create()
{
	set_name("����", ({ "shou wei","dizi" }));
	set("age", 34);
	set("gender", "����");
       set("title","���¾�");
	set("str", 34);
	set("dex", 36);
	set("combat_exp", 90000);
	set_skill("unarmed", 80);
	set_skill("dodge", 80);
	set_skill("parry", 80);
	set_skill("sword", 80);
	set_skill("force", 80);
set_skill("luoyan-jianfa",80);
set_skill("yuxuan-guizhen",80);

	set_skill("tianfeng-xuan", 80);
	set_skill("tiangang-zhi", 80);
map_skill("force","yuxuan-guizhen");
       map_skill("dodge","tianfeng-xuan");
map_skill("sword","luoyan-jianfa");
       map_skill("parry","tiangang-zhi");
       map_skill("unarmed","tiangang-zhi");
	setup();
	carry_object("obj/weapon/sword")->wield();
	carry_object("obj/cloth")->wear();
add_money("silver",30);
}
