// music   yangzhou's ��С��

inherit NPC;
inherit F_VENDOR;
void create()
{
	set_name("С���",({"xiao huoji","xiao","huoji"}));
	set("gender", "����" );
	set("age",15);
	set("long",
		"ü��Ŀ���С��ƣ�����Ц�����ģ�æ�ò����ֺ���\n");
	set("combat_exp",100);
	set_temp("apply/defense",10);
	set("attitude", "friendly");
	set("rank_info/respect","С�ֵ�");

	set_temp("apply/defense",10);
	set("vendor_goods", ([
                "����" : __DIR__"obj/baozi",
		"����" :__DIR__"obj/jitui",
	]));
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
	add_action("do_vendor_list", "list");
}

void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
		message_vision("С�������ǰ��������$N˵������λ"+
		RANK_D->query_respect(ob)+"¥���롣\n",ob);
			break;
		case 1:
		message_vision("С�����æ�Ĳ��ɿ�������û��ע�⵽$N������\n",ob);
			break;
                           }
}
