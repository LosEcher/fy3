// music   yangzhou's ��С��

inherit NPC;
void create()
{
	set_name("����",({"pao tang","pao","tang"}));
	set("gender", "����" );
	set("age",22);
	set("long",
		"�ɺ�¥�������ģ��������ͷ�����ġ�\n");
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
	switch( random(2) ) {
		case 0:
		message_vision("�����Ŀ첽��ǰ������λ"+
		RANK_D->query_respect(ob)+"���Щʲô��\n",ob);
			break;
		case 1:
		message_vision("������������$N������$N��ˡ�\n",ob);
			break;
                           }
}
