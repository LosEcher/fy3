// zhongzhou �������ĸ���
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("���þ���",({"datang jingli","jingli"}));
	set("gender","Ů��");
	set("age", 20);
	set("long",
	"���Ǳ��������ĵĴ��ø���ר�ŽӴ����ˡ�\n");
	set("combat_exp", 100000);
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
	command("say ����С�����������͸���໨������Ҳֵ����");
			break;
		case 1:
	command("say ÿ�����䶼�б��ƣ�����ǧ��Ҫ�ߴ�ط�Ŷ��");
			break;
                           }
}

int accept_object(object who, object ob)
{
	
	if (ob->query("money_id") && ob->value() >= 5000)
	{
	tell_object(who,CYN"��λ�ϰ�������������Ȼ��С��Ӵ��㣡\n"NOR);

		who->set_temp("to_girls",1);


		return 1;
	}

	return 0;
}
