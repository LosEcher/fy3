#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/֣��"; }
void create()
{
#include <kzznpc.h>
	set("area_name","Ȫ���в�˾");
	set("area_file","/d/quanzhou/tingtang.c");
	set("ziyuan","��˹��");
	set("kaifa",15);
	set("jizhi",75);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/d/obj/weapon/blade/wandao")->wield();
}
#include <die.h>