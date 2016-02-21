inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/��һС"; }
void create()
{
#include <kzznpc.h>

	 set("vendor_goods", ([
		"����":__DIR__"obj/jitui",
		"�ƴ�":__DIR__"obj/jiudai",
		"����":__DIR__"obj/baozi",
             "��Ƭ":__DIR__"obj/piang",
	]));
       set("area_name","�ɶ����Ӿ�¥");
       set("area_file","/d/chengdu/jiulou1.c");
        setup();
}
void init()
{	
	object ob; 

	ob = this_player();

	::init();
	if( interactive(ob) && !is_fighting() ) {
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
			say( "��һСЦ�����˵������λ" + RANK_D->query_respect(ob)
				+ "����ӭ�������Ӿ�¥��\n");
			break;
		case 1:
			say( "��һС�ò����ϵ�ë��Ĩ��Ĩ�֣�˵������λ" + RANK_D->query_respect(ob)
				+ "����������\n");
			break;
	}
}


