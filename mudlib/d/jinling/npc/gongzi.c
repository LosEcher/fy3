// music   yangzhou's ��С��

inherit NPC;
void create()
{
	set_name("���Ӹ�",({"gongzi ge","gongzi","ge"}));
	set("gender", "����" );
	set("age",25);
	set("long",
		"ü��Ŀ��Ĺ��Ӹ硣�����������£�ֻ֪�Ժ����֡�\n");
	set("combat_exp",1000);
	set_temp("apply/attack",10);
	set_temp("apply/defense",10);
	set_skill("unarmed",20);
	set("mingwang",-1);
	set_skill("dodge",20);
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
                        say("���Ӹ���������������Ÿ�Ľ�����湻ζ����\n");
			break;
		case 1:
			message_vision("���Ӹ����$N��Ц����"+RANK_D->query_respect(ob)+
                        "Ҳ������Ѱ���ӡ��İɡ�\n",ob);
			break;
                           }
}
