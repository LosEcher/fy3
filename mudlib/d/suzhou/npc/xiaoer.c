// music   yangzhou's ��С��

inherit NPC;

void create()
{
	set_name("��С��",({"xiao er","xiao","er"}));
	set("gender", "����" );
	set("age", 20);
	set("long",
		"ü��Ŀ���С��ƣ�����Ц�����ģ�æ�ò����ֺ���\n");
	set("combat_exp",200);
	set_temp("apply/defense",10);
	set_temp("apply/attack",5);
	set("attitude", "friendly");
	set("rank_info/respect", "С����");
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
			message_vision("��С��������$Nһ�ᣬЦ������λ"+
			RANK_D->query_respect(ob)+"�����ܲ��Ǳ����˰ɣ�\n",ob);
			break;
		case 1:
			say( "��С����������ϸ���˲���˵������λ" + RANK_D->query_respect(ob)
				+ "������������\n");
			break;
                           }
}

int accept_object(object who, object ob)
{
	
	if (ob->query("money_id") && ob->value() >= 100) 
	{
		tell_object(who, "С��һ������˵������л���ϣ�¥�����롣\n");

		who->set_temp("rent_paid",1);

// for if back money to who post in wizroom

		return 1;
	}

	return 0;
}
