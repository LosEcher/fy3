// music   yangzhou's ��С��

#include <ansi.h>
inherit NPC;
void create()
{
	set_name("ɱ��",({"sha shou","sha","shou"}));
	set("gender", "����" );
	set("age",30);
	set("pursuer",1);
	set("long",
	"һλ�������ɱ�֣�����ݺݵĵ����㡣\n");
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
	if(ob->query("family/family_name")=="����Ľ��")	{
	message_vision(CYN"ɱ�ֳ�$N��Ц��������$Nֻ����ͷƤ���顣\n"NOR,ob);
		return;
	}
	message_vision(RED"ɱ�ֶ�$N�����ȵ�����˭����˽�����أ���������\n"NOR,ob);
	kill_ob(ob);
	ob->fight_ob(this_object());
}
