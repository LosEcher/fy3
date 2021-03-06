// music   yangzhou's 店小二

#include <ansi.h>
inherit NPC;
void create()
{
	set_name("杀手",({"sha shou","sha","shou"}));
	set("gender", "男性" );
	set("age",30);
	set("pursuer",1);
	set("long",
	"一位蒙着面的杀手，正恶狠狠的瞪着你。\n");
	set("combat_exp",300000);
	set("attitude", "friendly");
	set("mingwang",-1);
	set_skill("sword",60);
	set_skill("dodge",60);
	set_skill("parry",60);
	set_temp("apply/defense",60);
	set_temp("apply/attack",50);
	set_temp("apply/armor",60);
	set_temp("apply/dodge",60);
	setup();
	carry_object("/obj/weapon/sword")->wield();
	carry_object("/obj/cloth")->wear();
	add_money("gold",1);
}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
		call_out("greeting", 1, ob);
	}
}

void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	if(ob->query("family/family_name")=="姑苏慕容")	{
	message_vision(CYN"杀手冲$N冷笑了两声，$N只觉得头皮发麻。\n"NOR,ob);
		return;
	}
	message_vision(RED"杀手对$N大声喝道：“谁让你私进禁地？找死！！\n"NOR,ob);
	kill_ob(ob);
	ob->fight_ob(this_object());
}
