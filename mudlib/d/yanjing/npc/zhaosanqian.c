inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/����Ǯ";}
void create()
{
#include <kzznpc.h>
	set("area_name","�ྩ�ش�ҩ��");
	set("area_file","/d/yanjing/yaopu.c");
     set("vendor_goods",([
     	"�ܵ�":__DIR__"obj/xiongdan",
     	"����":__DIR__"obj/tianqi",
     	"ûҩ":__DIR__"obj/muoyao",
     	"Ѫ��":__DIR__"obj/xuejie",
    ]));
    setup();
    carry_object("/d/obj/cloth/choupao")->wear();
    add_money("silver",20);    
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
 }

