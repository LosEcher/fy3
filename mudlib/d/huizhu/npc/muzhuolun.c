inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/ľ׿��"; }
void create()
{    
#include <kzznpc.h>
	set("area_name","���岿��");
	set("area_file","/d/huizhu/zhangpeng.c");
	set("ziyuan","��Ⱥ");
	set("kaifa",10);
	set("jizhi",65);
	setup();
  carry_object("/obj/weapon/blade")->wield();
  carry_object("/d/obj/cloth/baipao")->wear();
  add_money("gold",1);
}
#include <die.h>