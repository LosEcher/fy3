// music   yangzhou's ��С��
#include <ansi.h>
inherit NPC;
void create()
{
	set_name("����",({"tu fei","tufei"}));
	set("gender", "����" );
	set("age",25);
	set("long",
		"��ҽ���ĺڵ����һ���ĺ��⡣\n");
	set("combat_exp",8000);
	set("pursuer",1);
	set("home",1);
	set_skill("dodge",30);
	set("mingwang",-1);
	set_temp("apply/attack",20);
	set_temp("apply/defense",20);
	set_temp("apply/damage",10);
	set_skill("blade",30);
	set_skill("parry",30);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/blade")->wield();
	add_money("silver",50);
}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
//remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}
}

void greeting(object ob)
{
	object *inv;
	int i,mount;
	if( !ob || environment(ob) != environment() ) return;
	inv=all_inventory(ob);
	if(!sizeof(inv))	{
		message_vision(CYN"���˳�$N������������������ӹ�Զ�㣡\n"NOR,ob);
	return;
	}
	for(i=0;i<sizeof(inv);i++)	{
if(inv[i]->query("value")>=1000||inv[i]->value()>=1000)	{
			message_vision(CYN"���˶���$N���һ������"+inv[i]->query("name")+"����ү�����£���\n"NOR,ob);
			kill_ob(ob);
	ob->fight_ob(this_object());
			return;
		}
	}
	message_vision(CYN"���˳�$N������������������ӹ�Զ�㣡\n"NOR,ob);
	return;
}
