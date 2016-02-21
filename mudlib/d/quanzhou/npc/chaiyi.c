#include <ansi.h>

inherit NPC;


void create()
{
	set_name("差役",({"chaiyi"}));
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
	set("combat_exp",1000000);
	set("flag",0);
	set_skill("blade",50);

	set("attitude", "heroism");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"差役笑骂道：你当这里是什麽地方，敢来这里撒野？\n",
	"差役叫道：还是住手吧，我看你非我敌手。\n",
	"差役笑道：就你这两下子，不如我收你做徒弟吧。\n",
	"差役说道：这两下子还差不多。\n"
	}) );
	set("inquiry", ([
	]) );


	set_skill("dodge",50);
	set_skill("parry", 50);
	
	setup();
	
	carry_object("/d/quanzhou/obj/blade")->wield();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	this_player()->set("flag",0);
	add_action("do_go","go");
}
int do_go(string str)
{
	if (str=="west" || str=="w")
		if (this_player()->query("flag")==0)
	{
		command("grin");
		command("say 你当这是什么地方，想进就进？\n");
	return 1;
	}
	else
	
	return 0;
}
int accept_object(object who,object item)
{
	if (item->query("id")=="silver")
		if(item->query_amount()>=10)
	{
	who->set("flag",1);
		command("haha");
	command("say 算你还懂规据，那就请进吧。\n");
		return 1;
	}
	else
		command("say 这点钱就想打发我们？ \n");
		command("hehe");
	return 0;
}
