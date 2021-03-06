// zhou_botong.c
// 97.7.14 by Aug

#include "thd.h"
inherit NPC;

int leave_hole();

void create()
{
	set_name("周伯通", ({ "zhou botong","zhou" }) );
	set("title", "全真教名宿");
	set("gender", "男性");
	set("age", 63);
//	set("race","人类");
//	set("class","quanzhen");

	set("long",
"周伯通是个鹤发童颜的老人，可是他一会儿扮个鬼脸，
一会儿又拉着你打弹子，实足的小孩子脾气。\n");
	set("rank_info", "全真高手");
	set("nick", "老玩童");

	set("max_gin", 2000);
	set("max_kee", 2000);
	set("max_sen", 2000);

	set("max_atman", 2000);
	set("atman", 2000);
	set("max_force", 2000);
	set("force", 2000);
	set("max_mana", 2000);
	set("mana", 2000);

	set("str", 30);
	set("cor", 30);
	set("cps", 30);
	set("spi", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 20);
	set("per", 30);

	set("combat_exp", 1000000);
	set("score",500000);
	
	set_skill("force", 200);
	set_skill("parry", 200);
	set_skill("dodge", 200);
	set_skill("strike", 200);
	set_skill("finger", 200);
	set_skill("sword", 200);

//	map_skill("dodge",  "bagua-steps");
//	map_skill("unarmed","lanhua-finger");
//	map_skill("parry",  "luoying-sword");
//	map_skill("force",  "suiyu-force");
//    map_skill("sword",  "luoying-sword");
	
//	create_family("全真教", 1);

	set("inquiry", ([
		"瑛姑" : "周伯通脸色一变，似乎是害怕什么。",
		"瑛姑来了" : (: leave_hole :),
	]) );	
	
	setup();
	add_money("gold", 10);
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/sword")->wield();
}

int accept_fight(object who)
{
	command("say 好啊，我最喜欢打架了。\n");
	return 1;
}

int accept_kill(object who)
{
	command("say 我又没抢你老婆，你找我拼命干什么？\n");
}

int leave_hole()
{
	message_vision(
"周伯通一听这话，脸“唰”的一下变红了，又“唰”的一下变白了。
接着飞也似的跑掉了。\n",this_object());

	this_object()->move(NOWDIR+"empty_room");
	
	call_out("go_back", 5, 1);

	return 1;
}

void go_back()
{
	this_object()->move(NOWDIR+"qiulong-hole");
	message_vision("周伯通又跑了回来。\n",this_object());
}


