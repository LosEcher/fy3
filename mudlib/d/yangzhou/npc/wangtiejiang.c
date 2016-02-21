inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/������"; }
void create()
{
#include <kzznpc.h>

	set("area_name","���ݴ�����");
	set("area_file","/d/yangzhou/tiepu.c");

        set("vendor_goods", ([
                     "����":     __DIR__"obj/changjian",
                     "�̽�":     __DIR__"obj/duanjian",
                     "ذ��":     __DIR__"obj/bishou",
                     "�ֵ�":     __DIR__"obj/gangdao",
                     "����":     __DIR__"obj/feibiao",
		"tiejia":"/obj/std/armor/tiejia",
		"tongjia":"/obj/std/armor/tongjia",
		"pijia":"/obj/std/armor/pijia",
        ]) );

        setup();
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/hammer")->wield();
carry_object("/obj/std/armor/tiekui")->wear();
carry_object("/obj/std/armor/tiejia")->wear();
carry_object("/obj/std/armor/tiexue")->wear();

add_money("silver",30);
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
}
	
