// music   yangzhou's ��С��

#include <ansi.h>
inherit NPC;
void create()
{
	set_name("Ůͯ",({"nu tong","nu","tong"}));
	set("gender","Ů��");
	set("age",15);
	set("long",
	"����ɰ���СŮ����������΢Ц��\n");
	set("combat_exp",100);
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
	if(ob->query("gender")!="Ů��")	return;
	switch( random(2) ) {
		case 0:
	message_vision(CYN"Ůͯ��$N΢Ц��������λ"+
	RANK_D->query_respect(ob)+"����Ҫ���������Ӵ����"NOR,ob);
			break;
		case 1:
	message_vision(CYN"Ůͯ����˵����������װ˭��˭���ɺ�������\n"NOR,ob);
			break;
                           }
}
