// music   yangzhou's ��С��

inherit NPC;

void create()
{
	set_name("��С��", ({ "xiaoer", "xiao", "waiter","xiao er","er" }) );
	set("gender", "����" );
	set("age", 20);
	set("long",
		"ü��Ŀ���С��ƣ�����Ц�����ģ�æ�ò����ֺ���\n");
	set("combat_exp", 1000);
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

if( !wizardp(ob) )
    {
	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
			say( "��С��������"+this_player()->query("name")+
   "һ�ᣬЦ������λ" + RANK_D->query_respect(ob)+ "�����ܲ��Ǳ����˰ɣ�\n");
			break;
		case 1:
			say( "��С����������ϸ���˲���˵������λ" + RANK_D->query_respect(ob)
				+ "������������\n");
			break;
                           }
   }
else
  {
  say("��С��������Ц��: ��" + 
  ob->query("name")+RANK_D->query_respect(ob) + "����?\n");
  say("��С������"+ob->query("name")+"һö��ɽѩ����\n");
  clone_object(__DIR__"obj/xuelian")->move(ob);
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
