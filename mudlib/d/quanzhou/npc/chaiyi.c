#include <ansi.h>

inherit NPC;


void create()
{
	set_name("����",({"chaiyi"}));
	set("gender", "����" );
	set("age",24);
	set("str",50);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("long",
	"Ӣ��������ò���˰�������û��ǲ�Ҫ��������\n"
	);
	set("combat_exp",1000000);
	set("flag",0);
	set_skill("blade",50);

	set("attitude", "heroism");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"����Ц������㵱������ʲ��ط�������������Ұ��\n",
	"���۽е�������ס�ְɣ��ҿ�����ҵ��֡�\n",
	"����Ц���������������ӣ�������������ͽ�ܰɡ�\n",
	"����˵�����������ӻ���ࡣ\n"
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
		command("say �㵱����ʲô�ط�������ͽ���\n");
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
	command("say ���㻹����ݣ��Ǿ�����ɡ�\n");
		return 1;
	}
	else
		command("say ���Ǯ��������ǣ� \n");
		command("hehe");
	return 0;
}
