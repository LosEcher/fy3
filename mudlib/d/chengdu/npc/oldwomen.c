#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/½����"; }
void create()
{
#include <kzznpc.h>

	 set("vendor_goods",([
	  "���":__DIR__"obj/qingcai",
         "��ײ�":__DIR__"obj/dabaicai",
	  ]));
       set("area_name","�ɶ��˳�");
       set("area_file","/d/chengdu/cai.c");
	set("ziyuan","�߲�");
	set("jizhi",10);
	set("kaifa",60);
        setup();
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}

// #include <die.h>
