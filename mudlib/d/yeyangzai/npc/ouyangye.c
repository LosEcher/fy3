#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/ŷ��Ұ"; }
void create()
{
#include <kzznpc.h>
	set("area_name","Ұ��կ");
	set("area_file","/d/yeyangzai/da.c");
	set("ziyuang","���");
	set("jizhi",100);
	set("kaifa",5);
	setup();
        carry_object("/d/yeyangzai/npc/obj/zijindao")->wield();
        carry_object("/d/yeyangzai/npc/obj/wujinfu")->wield();
        carry_object("/d/yeyangzai/npc/obj/jinsijia")->wear();
	add_money("gold",1);

}

#include <die.h>
