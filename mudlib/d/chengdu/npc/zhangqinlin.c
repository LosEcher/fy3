inherit KZZNPC;
inherit F_VENDOR;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/������"; }
void create()
{
#include <kzznpc.h>

	set("area_name","�ɶ��������ӵ�");
	set("area_file","/d/chengdu/zongzidian.c");
	set("ziyuan","����");
	set("jizhi",30);
	set("kaifa",30);
        set("vendor_goods", ([
                "����":__DIR__"obj/zongzi",
        ]));
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/std/armor/pijia")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
}
void init()
{
	::init();
	add_action("do_vendor_list","list");
}

#include <die.h>
