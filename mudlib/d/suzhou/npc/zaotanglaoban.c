// music   yangzhou's ��С��
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("�����ϰ�",({"zaotang laoban","laoban"}));
	set("gender", "����" );
	set("age", 20);
	set("long",
	"�˵����õĴ��ϰ塣\n");
	set("combat_exp",200);
	set_temp("apply/defense",10);
	set_temp("apply/attack",5);
	set("attitude", "friendly");
	setup();
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

void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
	command("say ϴһ��һ�����ӣ�������������˵ļ��ˡ�");
			break;
		case 1:
	command("say �п��������ߣ�Ů�Ͷ��ߡ����Ͽɱ��ߴ��˵ء�");
			break;
                           }
}

int accept_object(object who, object ob)
{
	
	if (ob->query("money_id") && ob->value() >= 100) 
	{
	tell_object(who,CYN"�����ϰ������ѻ��������������\n"NOR);

		who->set_temp("rent_paid",1);

// for if back money to who post in wizroom

		return 1;
	}

	return 0;
}
