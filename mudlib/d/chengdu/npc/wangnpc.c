inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/������"; }
void create()
{
#include <kzznpc.h>

        set("long","���ϰ������������ĳɶ��ˣ����˼�ʮ���С������\n");
	set("age",45);
	set("vendor_goods", ([
		"�鲼��":__DIR__"obj/mabudai",
		"huozhezi":__DIR__"obj/huozhezi",
		"����":__DIR__"obj/beixin",
		"ͷ��":__DIR__"obj/toukui",
		"fu":"/d/suzhou/npc/obj/tulingfu",
	]));
       set("area_name","�ɶ��ӻ���");
       set("area_file","/d/chengdu/cdhuo.c");
        setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",4);
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}



