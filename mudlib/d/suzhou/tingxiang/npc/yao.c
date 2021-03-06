// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("姚伯当",({"yao bodang","yao","bodang"}));
	set("title","秦家寨寨主");
	set("gender", "男性" );
	set("age",45);
	set("str",40);
	set("cor", 30);
	set("mingwang",-1);
	set("cps", 30);
	set("int",30);
	set("con",40);
	set("long",
		"云州秦家寨，五虎断门刀掌门人。\n"
	);
	set("combat_exp",100000);
	set("attitude","hero");
	set_skill("parry",60);
	set_skill("dodge",60);
	set_skill("blade",60);
	setup();
	carry_object("obj/weapon/blade")->wield();
	carry_object("obj/cloth")->wear();
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
	if(ob->query("family/family_name")!="姑苏慕容")	{
		message_vision(CYN"姚伯当冲$N笑道：这位"+RANK_D->query_respect(ob)+"也是来寻姑苏慕容晦气的吧，那咱们可是志同道合。\n"NOR,ob);
		return;
	}
	if(ob->query("combat_exp")<5000)	{
		message_vision(CYN"姚伯当对$N怒道：快去把慕容复给我叫来，让老夫教训他一下！\n"NOR,ob);
	return;
	}
	if(ob->query("combat_exp")>=30000)	{
		message_vision(RED"姚伯当对$N怒吼道：找不到慕容复，就拿你先开刀吧！\n"NOR,ob);
	kill_ob(ob);
	ob->fight_ob(this_object());
	}
}
