// music   yangzhou's ��С��

inherit NPC;
void create()
{
	set_name("���Ƥ��",({"makepilo","make pilo","make"}));
	set("gender", "����" );
	set("age",35);
	set("long",
	"�𷢱��۵�����ˡ�\n");
	set("mingwang",1);
	set("nickname","����");
	set_temp("apply/defense",50);
	set_temp("apply/damage",5);
	set_temp("apply/armor",50);
	set("combat_exp",100000);
	set_skill("unarmed",100);
	set_skill("parry",100);
	set_skill("xiyang-quanshu",100);
	map_skill("parry","xiyang-quanshu");
	set_skill("dodge",150);
	set("max_force",1500);
	set("force",1500);
	set("attitude", "friendly");
	set("force_factor",50);
	map_skill("unarmed","xiyang-quanshu");
	setup();
	carry_object(__DIR__"obj/xifu")->wear();
	add_money("gold",2);
	carry_object(__DIR__"obj/xiangyanke");
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
	switch( random(3))	{
		case 0:
	say("���Ƥ�޲��ž�ǻ˵�����ð����Ķ���\n");
			break;
		case 1:
	say("���Ƥ����������Ҳ��֪��˵Щʲô�󻰡�\n");
			break;
	case 2:
	say("���Ƥ���ͳ�֧�������еĳ���������\n");
		break;
                           }
}
int accept_fight(object me)
{
	command("say �������������й�����");
	return 1;
}
