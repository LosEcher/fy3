inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/��������"; }
void create()
{
#include <kzznpc.h>
set("area_name","������");
set("area_file","/d/sandboy/zizhuan.c");
set("ziyuan","����");
set("kaifa",40);
set("jizhi",35);
	setup();
	carry_object("/d/dali/npc/obj/cynrobe")->wear();
	carry_object("/obj/weapon/thin_sword")->wield();
	add_money("gold",1+random(5));
}
#include <die.h>
