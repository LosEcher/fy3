#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/���ն���"; }
void create()
{
#include <kzznpc.h>
set("area_name","��˹��ʥĹ");
set("area_file","/d/quanzhou/shengmu.c");
set("ziyuan","������");
set("kaifa",20);
set("jizhi",25);
	 setup();
carry_object("/d/obj/cloth/changpao")->wear();
carry_object("/obj/std/armor/yinjia")->wear();
}
#include <die.h>
