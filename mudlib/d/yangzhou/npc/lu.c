inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/³��"; }
void create()
{
#include <kzznpc.h>

	set("area_name","ľ����");
	set("area_file","/d/yangzhou/muqipu.c");
        set_name("³��", ({"lu ban", "lu"}));
set("long", "�º����������ˡ�\n");
set("vendor_goods", ([
                     "blade": "/d/yangzhou/npc/obj/mudao",
                "sword": "/d/yangzhou/npc/obj/mujian",
                "staff": "/d/yangzhou/npc/obj/muzhang",
        ]) );
        setup();
carry_object("/obj/armor/guardsuit")->wear();
add_money("silver",30);
}
void init()
{
::init();
  add_action("do_vendor_list","list");
}
