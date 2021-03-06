// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("衙役",({"ya yi","yayi"}));
	set("gender", "男性" );
	set("age",24);
	set("str",50);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("long",
	"英俊潇洒，貌似潘安。你最好还是不要招惹他。\n"
	);
	set_temp("apply/attack",20);
	set("mingwang",1);
	set_temp("apply/defense",30);
	set("combat_exp",8000);
	set_skill("blade",50);

	set("attitude", "heroism");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"衙役笑骂道：你当这里是什麽地方，敢来这里撒野？\n",
	"衙役叫道：还是住手吧，我看你非我敌手。\n",
	"衙役笑道：就你这两下子，不如我收你做徒弟吧。\n",
	"衙役说道：这两下子还差不多。\n"
	}) );


	set_skill("dodge",50);
	set_skill("parry", 50);
	
	setup();
	
	carry_object("/obj/weapon/blade")->wield();
	carry_object("/obj/cloth")->wear();
}
int accept_object(object who,object item)
{
	message_vision(CYN"\n$N从身上掏出"+item->query("unit")+item->query("name")+"递到衙役面前。\n"NOR,who);
	message_vision(CYN"$N陪笑道：这点小意思还望您老笑纳。\n\n"NOR,who);
	if(!item->query("money_id"))	{
	message_vision(CYN"衙役冲着$N冷笑道：大爷叫钱开眼，你不知道吗！这些破烂你自己留着用吧！\n"NOR,who);
	return 0;
	}
	if(item->value()>1000)
	{
	who->set_temp("oldsix_flag/enter",1);
	message_vision(CYN"衙役冲$N干笑了两声，道：还算你懂规矩。那就自己进去吧。\n"NOR,who);
		return 1;
	}
	else
	message_vision(CYN"衙役怒道："+who->query("name")+"，你也太不实相，这点钱就想打发我们？\n"NOR,who);
	return 0;
}
