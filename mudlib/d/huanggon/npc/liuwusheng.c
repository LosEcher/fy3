#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;
string query_save_file() { return DATA_DIR + "npc/������"; }

void create()
{
#include <kzznpc.h>
set("vendor_goods",([
"baizhengao":__DIR__"obj/baizhengao.c",
"congyoubaocui":__DIR__"obj/congyoubaocui.c",
"lvdougao":__DIR__"obj/lvdougao.c",
"puercha":__DIR__"obj/puercha.c",
]));
set("area_name","���Ǹ������");
set("area_file","/d/huanggon/chaguan.c");
	setup();
carry_object("/obj/std/armor/tiejia")->wear();
carry_object("/obj/cloth")->wear();
add_money("silver",2);
}
void init()
{
::init();
  add_action("do_vendor_list","list");
}
