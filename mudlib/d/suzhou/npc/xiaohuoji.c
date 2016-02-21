// music   yangzhou's ��С��

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/������"; }

void create()
{
#include <kzznpc.h>

	set("long",
		"ü��Ŀ���С��ƣ�����Ц�����ģ�æ�ò����ֺ���\n");
	set("zhengzhao",2+random(2));
	set("area_name","�����ɺ�¥");
	set("area_file","/d/suzhou/songhelou.c");
	set_temp("apply/defense",10);
	set("attitude", "friendly");
	set("rank_info/respect","С�ֵ�");

	set_temp("apply/defense",10);
	set("vendor_goods", ([
                "����" : __DIR__"obj/baozi",
		"����" :__DIR__"obj/jitui",
		"jiuhu":__DIR__"obj/jiuhu",
		"hulu":__DIR__"obj/hulu",
	]));
	setup();
	carry_object("/obj/std/armor/pikui")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
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
	add_action("do_vendor_list", "list");
}

void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
		message_vision("����������ǰ��������$N˵������λ"+
		RANK_D->query_respect(ob)+"¥���롣\n",ob);
			break;
		case 1:
		message_vision("��������æ�Ĳ��ɿ�������û��ע�⵽$N������\n",ob);
			break;
                           }
}
