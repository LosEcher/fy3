#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/�������"; }
void create()
{
#include <kzznpc.h>
	set("area_name","���������");
	set("area_file","/d/kaifeng/sanqing.c");
	set("ziyuan","����");
	set("jizhi",35);
	set("kaifa",30);
	setup();
	carry_object("/obj/armor/dao-cloth")->wear();
	carry_object("/obj/weapon/blade")->wield();
	add_money("silver",50);
}
#include <die.h>