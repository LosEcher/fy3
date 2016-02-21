// huoji. ҩ�̻��

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/ѦĽ��"; }

void create()
{
#include <kzznpc.h>

	set("long","������һ��ҽ�������˳�Ѧ��ҽ��\n");
	set("area_name","���ݻش���");
	set("area_file","/d/suzhou/yaopu.c");
	set_temp("apply/defense",30);
	set_temp("apply/attack",30);
	set_temp("apply/damage",15);
	set("attitude", "friendly");
	set("vendor_goods", ([
	"zhengqi":__DIR__"obj/zhengqi",
	"������":__DIR__"obj/yangjing",
	"������":__DIR__"obj/liushen",
	"sanqing":__DIR__"obj/sanqing",
	"jinchuang":__DIR__"obj/jinchuang",
	"nianhua":__DIR__"obj/nianhua",
	"xiaojing":__DIR__"obj/xiaojing",
	"xuqi":__DIR__"obj/xuqi",
	"lingshen":__DIR__"obj/lingshen",
	]));

	setup();
	carry_object("/obj/std/armor/pixue")->wear();
	carry_object("/obj/cloth")->wear();
	add_money("silver",30);
}

void init()
{
	::init();
	add_action("do_vendor_list", "list");
}
