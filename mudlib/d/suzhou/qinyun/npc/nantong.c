// music   yangzhou's ��С��

#include <ansi.h>
inherit NPC;
void create()
{
	set_name("��ͯ",({"nan tong","nan","tong"}));
	set("gender", "����" );
	set("age",15);
	set("long",
	"ü��Ŀ���С�к���������΢Ц��\n");
	set("combat_exp",150);
	set("attitude", "friendly");
	set("rank_info/respect","С�ֵ�");
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
	if(ob->query("gender")!="����")	return;
	switch( random(2) ) {
		case 0:
	message_vision(CYN"��ͯ��$N���յ�������λ"+
	RANK_D->query_respect(ob)+"����Ҫ���������Ӵ����\n"NOR,ob);
			break;
		case 1:
	message_vision(CYN"��ͯ�������������֪����������װ��˭�ء�\n"NOR,ob);
			break;
                           }
}
