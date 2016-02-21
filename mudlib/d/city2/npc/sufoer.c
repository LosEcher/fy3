inherit KZZNPC;
inherit F_VENDOR;
string query_save_file() { return DATA_DIR+"npc/�շ��";}
void create()
{
#include <kzznpc.h>
set("area_name","������ջ");
set("area_file","/d/city2/kedian.c");
set("vendor_goods",([
"����":     "/d/yangzhou/npc/obj/baozi",
"�ƺ�":     "/d/yangzhou/npc/obj/jiuhu",
"����":     "/obj/std/food/jitui",
"��ˮ��" :  "/d/yangzhou/npc/obj/yanshuie",
"������" :  "/d/yangzhou/npc/obj/huashengmi",
])); 
	setup();
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
  }         
