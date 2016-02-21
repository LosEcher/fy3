// music   yangzhou's ��С��

inherit NPC;

void create()
{
	set_name("����ɮ",({ "seng"}));
	set("gender", "����" );
	set("age", 20);
	set("long",
		"�ػ���������ɮ���������ǽ�ʵ��\n");
	set("combat_exp",4000);
	set("attitude", "friendly");
	set_skill("unarmed",30);
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set_skill("parry",30);
	set_skill("dodge",30);
	setup();
	carry_object("/obj/cloth")->wear();
}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
		remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}
	add_action("do_jump","jump");
}
int do_jump()
{
	object me;
	me=this_player();
	message_vision("����ɮ����$N�����������徲֮�����벻Ҫ���ߡ�\n",me);
	return 1;
}
void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
			say("����ɮ˫�ֺ�ʮ���������ӷ�\n");
			break;
		case 1:
		message_vision("����ɮ����$N����Сɮ�ڴ˻�Ե��ʱ����ʩ����ʩЩ�ɡ�\n",ob);
			break;
                           }
}

int accept_object(object who, object ob)
{
	
	if (ob->query("money_id"))
	{
		message_vision("����ɮ��$N������л��λʩ��������ᱣ����ġ�\n",who);


// for if back money to who post in wizroom

		return 1;
	}

	return 0;
}
