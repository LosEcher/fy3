#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/����"; }
void create()
{
#include <kzznpc.h>

       set("area_name","���ɴ���");
	set("area_file","/d/dali/wumeng.c");
	set("ziyuan","ɽ��");
	set("jizhi",40);
	set("kaifa",20);

        setup();
	carry_object(__DIR__"obj/wchangqun")->wear();
	carry_object("/obj/weapon/whip")->wield();
}

#include <die.h>