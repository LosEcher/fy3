// music   yangzhou's ��С��

inherit NPC;
void create()
{
	set_name("С����",({"xiao heshang","xiao","heshang"}));
	set("gender", "����" );
	set("age",15);
	set("long",
	"ͷ�Ϲ�������С���С�\n");
	set("mingwang",1);
	set("combat_exp",1000);
	set_skill("dodge",20);
	set_skill("unarmed",20);
	set("attitude", "friendly");
	setup();
	carry_object(__DIR__"obj/qingbusengyi")->wear();
}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
//	remove_call_out("greeting");
//	call_out("greeting", 1, ob);
	}
}

void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
	say("Сɳ������ɨ���ɨ�ŵ��ϵ���Ҷ��\n");
			break;
		case 1:
	say("Сɳ�ַ���ɨ�㣬���˲���ͷ�ϵĺ���\n");
			break;
                           }
}
