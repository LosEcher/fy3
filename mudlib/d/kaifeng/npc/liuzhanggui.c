inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/������"; }
void create()
{
#include <kzznpc.h>
	set("area_name","����������");
	set("area_file","/d/kaifeng/ciqi.c");
	set("vendor_goods",([
	"��Ŀ��":__DIR__"obj/ciwan",
	"������":__DIR__"obj/luowenhai",
	"�̲��":__DIR__"obj/bibohu",
]));
	setup();
	carry_object("/obj/std/armor/pijia")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
 }

