// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("����",({"ya yi","yayi"}));
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
	set_temp("apply/attack",20);
	set("mingwang",1);
	set_temp("apply/defense",30);
	set("combat_exp",8000);
	set_skill("blade",50);

	set("attitude", "heroism");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"����Ц������㵱������ʲ��ط�������������Ұ��\n",
	"���۽е�������ס�ְɣ��ҿ�����ҵ��֡�\n",
	"����Ц���������������ӣ�������������ͽ�ܰɡ�\n",
	"����˵�����������ӻ���ࡣ\n"
	}) );


	set_skill("dodge",50);
	set_skill("parry", 50);
	
	setup();
	
	carry_object("/obj/weapon/blade")->wield();
	carry_object("/obj/cloth")->wear();
}
int accept_object(object who,object item)
{
	message_vision(CYN"\n$N�������ͳ�"+item->query("unit")+item->query("name")+"�ݵ�������ǰ��\n"NOR,who);
	message_vision(CYN"$N��Ц�������С��˼��������Ц�ɡ�\n\n"NOR,who);
	if(!item->query("money_id"))	{
	message_vision(CYN"���۳���$N��Ц������ү��Ǯ���ۣ��㲻֪������Щ�������Լ������ðɣ�\n"NOR,who);
	return 0;
	}
	if(item->value()>1000)
	{
	who->set_temp("oldsix_flag/enter",1);
	message_vision(CYN"���۳�$N��Ц�����������������㶮��ء��Ǿ��Լ���ȥ�ɡ�\n"NOR,who);
		return 1;
	}
	else
	message_vision(CYN"����ŭ����"+who->query("name")+"����Ҳ̫��ʵ�࣬���Ǯ��������ǣ�\n"NOR,who);
	return 0;
}
