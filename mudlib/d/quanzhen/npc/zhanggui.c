
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/���"; }

void create()
{
#include <kzznpc.h>

	set("area_name","�������¥");
	set("area_file","/d/quanzhen/jiuluo2.c");

	set("long",
		"����λ�ͺ������������ˡ�\n");
        set_temp("apply/attack", 30);
        set_temp("apply/defense", 40);


	setup();
	carry_object(__DIR__"obj/cloth")->wear();
	add_money("silver",20);
}

