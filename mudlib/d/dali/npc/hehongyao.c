#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/�κ�ҩ"; }
void create()
{
#include <kzznpc.h>

	 set("vendor_goods", ([
        "��ҩ":"/d/suzhou/npc/obj/jinchuang",
        "������":"/d/suzhou/npc/obj/yangjing",
        "������":"/d/suzhou/npc/obj/liushen",
        ]));

       set("area_name","����ҩ��");
       set("area_file","/d/dali/yaoshop.c");
	set("ziyuan","��ҩ");
	set("jizhi",60);
	set("kaifa",5);

        setup();
carry_object("/d/obj/cloth/skirt")->wear();
add_money("gold",1);
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}

//#include <die.h>
