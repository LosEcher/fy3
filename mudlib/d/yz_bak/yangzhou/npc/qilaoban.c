inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/������"; }
void create()
{
#include <kzznpc.h>

	set("area_name","����ҩ��");
	set("area_file","/d/yangzhou/yaopu.c");
set("long", "�º����������ˡ�\n");
set("vendor_goods", ([
                     "�˲�":     __DIR__"obj/renshen",
                     "ѩ��":     __DIR__"obj/xuelian",
                     "��֥":     __DIR__"obj/lingzhi",
		"sanqing":__DIR__"obj/sanqing",
		"jinchuang":__DIR__"obj/jinchuang",
		"nianhua":__DIR__"obj/nianhua",
		"liushen":__DIR__"obj/liushen",
		"yangjing":__DIR__"obj/yangjing",
		"zhengqi":__DIR__"obj/zhengqi",
        ]) );
        setup();
carry_object("/obj/armor/guardsuit")->wear();
add_money("coin",30);
}
void init()
{
::init();
  add_action("do_vendor_list","list");
}
