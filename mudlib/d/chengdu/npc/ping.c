inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/��÷�"; }
void create()
{
#include <kzznpc.h>

	set("long", "������ҽ���߳�����÷����������Ը�Ź֣�����ʲô�˶�ҽ�ġ�\n");
	 set("vendor_goods",([
	  "��ҩ": "/d/suzhou/npc/obj/jinchuang",
	"������":"/d/suzhou/npc/obj/yangjing",
	"������":"/d/suzhou/npc/obj/liushen",
	  ]));
       set("area_name","�ɶ�ҩ��");
       set("area_file","/d/chengdu/cdyaopu.c");
        setup();
carry_object("/d/obj/cloth/changpao")->wear();
add_money("gold",1);
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}


