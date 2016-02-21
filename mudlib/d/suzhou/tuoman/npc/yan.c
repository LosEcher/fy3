// guard.c

#include <ansi.h>

inherit NPC;
int do_func();
void create()
{
	set_name("严妈妈",({"yan mama","yan","mama"}));
	set("gender","女性");
	set("age",45);
	set("str",30);
	set("per",1);
	set("cor", 30);
	set("mingwang",-1);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"目光中尽是煞气，两根尖尖的犬齿露了出来，\n"+
		"便似要咬人一口，让人觉得说不出的恶心难受。\n"
	);
	set("combat_exp",8000);
	set("attitude","hero");
	set("inquiry", ([
		"花肥" : (:do_func:),
		"huafei" : (:do_func:),
	]) );
	set_skill("parry",40);
	set_skill("dodge",40);
	set_temp("apply/defense",20);
	set_temp("apply/attack",20);
	set_skill("blade",40);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/blade")->wield();
	add_money("silver",10);
}
void init()
{
object ob;
        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
		}
}
int do_func()
{
	object me;
	me=this_player();
	command("grin");
	message_vision(RED"严妈妈对着$N奸笑道：你就是夫人要的花肥？"+
	"那我就不客气了。\n"NOR,me);
	kill_ob(me);
	me->fight_ob(this_object());
	return 1;
}
void greeting(object ob)
{
 	if( !ob || environment(ob) != environment() ) return;
	switch(random(3))	{
	 case 0:message_vision(CYN"严妈妈奸笑道：这位"+RANK_D->query_respect(ob)+
	"是来做花肥的吧。\n"NOR,ob);
			break;
	case 1: message_vision(CYN"严妈妈自言自语道：近来花肥不大够，不知有没有什么"+
	"人愿意做花肥。\n"NOR,ob);
			break;
	case 2:message_vision(CYN"严妈妈眯着一双小眼，侧着头打量着$N，嘴中嘟哝"+
	"道：真是上好的花肥呀。\n"NOR,ob);
			break;
				}
}
