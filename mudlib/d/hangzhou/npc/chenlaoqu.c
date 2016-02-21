#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/������"; }
void create()
{
#include <kzznpc.h>

	 set("long","���ϰ������ھ�,�����ⷴ������ô����.\n");
	set("area_name","���ݾƷ�");
	set("area_file","/d/hangzhou/jiufang.c");
	set("ziyuan","����");
	set("jizhi",45);
	set("kaifa",25);

	 set("vendor_goods",([
	  "jiutan":__DIR__"obj/jiutan",
	  ]));
        setup();
	carry_object("/obj/std/armor/pijia")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
	carry_object("/obj/weapon/blade")->wield();
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}

#include <die.h>
