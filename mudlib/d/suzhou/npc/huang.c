// huoji. ҩ�̻��

inherit KZZNPC;
inherit F_VENDOR;
string query_save_file() { return DATA_DIR + "npc/������"; }


void create()
{
#include <kzznpc.h>

	set("area_name","���ݱ�����");
	set("area_file","/d/suzhou/bingqipu.c");
	set("long","���ݳ�����ͷ��������������𾴡�\n");
	set("attitude", "friendly");
	set_temp("apply/defense",50);
	set_temp("apply/attack",40);
	set_temp("apply/armor",50);

	set("vendor_goods", ([
	"gangdao":"/obj/std/weapon/gangdao",
	"wandao":"/obj/std/weapon/wandao",
	"changjian":"/obj/std/weapon/changjian",
	"duanjian":"/obj/std/weapon/duanjian",
	"banfu":"/obj/std/weapon/banfu",
	"tiefu":"/obj/std/weapon/tiefu",
	"tongchui":"/obj/std/weapon/tongchui",
	"tiechui":"/obj/std/weapon/tiechui",
	"muzhang":"/obj/std/weapon/muzhang",
	"tiezhang":"/obj/std/weapon/tiezhang",
	"gangzhang":"/obj/std/weapon/gangzhang",
	"mugun":"/obj/std/weapon/mugun",
	"tonggun":"/obj/std/weapon/tonggun",
	"tiegun":"/obj/std/weapon/tiegun",
	"pibian":"/obj/std/weapon/pibian",
	"changbian":"/obj/std/weapon/changbian",
	"feibiao":"/obj/std/weapon/feibiao",
	"feidao":"/obj/std/weapon/feidao",
	]));

	setup();
	carry_object(__DIR__"obj/hupi")->wear();
	carry_object(__DIR__"obj/changjian")->wield();
	add_money("gold",1);
}

void init()
{
        ::init();

        add_action("do_vendor_list", "list");
}


