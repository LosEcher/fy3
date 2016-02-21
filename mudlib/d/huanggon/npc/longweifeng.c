#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;
string query_save_file() { return DATA_DIR + "npc/������"; }

void create()
{
#include <kzznpc.h>
set("vendor_goods",([
"diaopi":__DIR__"obj/diaopi.c",
"yupei":__DIR__"obj/yupei.c",
"shouzhuo":__DIR__"obj/shouzhuo.c",
]));
set("area_name","���Ǿ۱���");
set("area_file","/d/huanggon/jubaoge.c");
	setup();
carry_object("/obj/cloth")->wear();
carry_object("/obj/std/armor/yinjia")->wear();
add_money("silver",2);
}
void init()
{
  ::init();
  add_action("do_vendor_list","list");
}