// shagu.c
// 97.7.18 by Aug

inherit NPC;

void create()
{
	set_name("ɵ��", ({ "shagu" }) );
	set("gender", "Ů��");
	set("age", 41);
//	set_race("human");
	set("class","taohua");

	set("long","ɵ���Ǹ�ɵ���������긾�ˣ��ɴ��װ��ȴ�����С���\n");
//	set("rank_info", "�һ�������");

	set("max_gin", 800);
	set("max_kee", 800);
	set("max_sen", 800);

	set("max_atman", 1000);
	set("atman", 1000);
	set("max_force", 1000);
	set("force", 1000);
	set("max_mana", 1000);
	set("mana", 1000);

	set("str", 30);
	set("cor", 30);
	set("cps", 30);
	set("spi", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 20);
	set("per", 30);

	set("combat_exp", 100000);
	set("score",50000);
	
	set_skill("force", 80);
	set_skill("parry", 80);
	set_skill("dodge", 80);
	set_skill("finger", 80);
	set_skill("sword", 80);

      set_skill("suiyu-force",65);
      set_skill("luoying-sword",62);
      set_skill("luoying-strike",62);
      set_skill("bagua-steps",62);
      set_skill("lanhua-finger",62);
	
	map_skill("dodge",  "bagua-steps");
	map_skill("unarmed","lanhua-finger");
	map_skill("parry",  "luoying-sword");
	map_skill("force",  "suiyu-force");
	map_skill("sword",  "luoying-sword");
	
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/sword")->wield();
}

int accept_fight(object who)
{
	object ob;

	ob=this_object();

	ob->set("gin", 800);
	ob->set("kee", 800);
	ob->set("eff_kee", 800);
	ob->set("sen", 800);

	ob->set("atman", 1000);
	ob->set("force", 1000);
	ob->set("mana", 1000);

	command("say ��ܰ�����ܰ�������Ȥ��\n");
	return 1;
}

int accept_kill(object who)
{
//	do_chat("\n");
}

void lose_fight(object me)
{
	me->set_temp("win_shagu",1);
	write("lose!\n");
}



