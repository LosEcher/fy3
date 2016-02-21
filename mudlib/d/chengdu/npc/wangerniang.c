#include <ansi.h>
inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/������"; }
void create()
{
#include <kzznpc.h>

	set("ziyuan","�Ͼ�");
	set("jizhi",40);
	set("kaifa",30);
	set("area_name","�ɶ������");
	set("area_file","/d/chengdu/niangjiuwo.c");
        set("long",
		"��������50�����ˣ�����������ϣ������ȴ档\n��˵�������Ϲ�������岻���ġ�\n");
	set("vendor_goods", ([
		"�ƴ�":__DIR__"obj/jiudai",
		"�л���":__DIR__"obj/jiaohuaji",
	]));
	setup();
	carry_object("/obj/armor/female3-cloth")->wear();
	carry_object("/obj/std/armor/pijia")->wear();
}
void init()
{	
	::init();
        add_action("do_vendor_list", "list");

}

#include <die.h>
