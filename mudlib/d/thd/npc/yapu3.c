// yapu3.c

inherit NPC;

void create()
{
	set_name("����", ({ "yapu" }) );
	set("gender", "����");
	set("age", 43);
//	set_race("human");
//	set_level(28);
	set("class","taohua");

	set("long","���Ǹ���˳�����͡�\n");
	set("rank_info", "�һ�������");

	set("max_gin", 500);
	set("max_kee", 500);
	set("max_sen", 500);

	set("max_atman", 600);
	set("atman", 600);
	set("max_force", 600);
	set("force", 600);
	set("max_mana", 600);
	set("mana", 600);

	set("str", 30);
	set("cor", 30);
	set("cps", 30);
	set("spi", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 20);
	set("per", 30);

	set("combat_exp", 50000);
	set("score",10000);
	
      set_skill("unarmed", 30);
	set_skill("force", 23);
	set_skill("parry", 23);
	set_skill("dodge", 23);
	set_skill("sword", 23);
	
//	gain_score("mortal sin", -400);
	
	setup();
	add_money("silver", 1);
	carry_object("/obj/cloth")->wear();
}

int accept_fight(object who)
{
	message_vision("����˫�ֱȻ���ʲô������$N��û������\n",this_player());

	return 1;
}

int accept_kill(object who)
{
	message_vision("����˫�ֱȻ���ʲô����¶���࣬����Ҫɱ$N��\n",this_player());

}

