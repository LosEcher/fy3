inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/Ǯ��ţ"; }
void create()
{
#include <kzznpc.h>

set("vendor_goods", ([
		"����":__DIR__"obj/mixian",
		"Ҷ����":__DIR__"obj/yeerba",
		"����":__DIR__"obj/huotui",
		"������":__DIR__"obj/qiguoji",
		"���":__DIR__"obj/puercha",
	]));
       set("area_name","����̫�;�");
       set("area_file","/d/dali/taiheju.c");
        setup();
	carry_object("/obj/std/armor/tongjia")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
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
			say( "Ǯ��ţЦ�����˵������λ" + RANK_D->query_respect(ob)
				+ "�������ȱ��裬ЪЪ�Ȱɡ�\n");
			break;
		case 1:
			say( "Ǯ��ţ�ò����ϵ�ë��Ĩ��Ĩ�֣�˵������λ" + RANK_D->query_respect(ob)
				+ "����������\n");
			break;
	}
}


