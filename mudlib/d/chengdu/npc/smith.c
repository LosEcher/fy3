inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/�⾪��"; }
void create()
{
#include <kzznpc.h>

	 set("vendor_goods",([
	  "tiejia":"/obj/armor/tiejia",
         "sword":"/obj/weapon/sword",
         "blade":"/obj/weapon/blade",
	  ]));
       set("area_name","�ɶ�������");
       set("area_file","/d/chengdu/cddtp.c");
        setup();
	carry_object("/obj/weapon/hammer")->wield();
	carry_object("/obj/cloth")->wear();
	add_money("silver",4);
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}



