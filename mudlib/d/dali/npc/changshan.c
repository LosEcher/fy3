#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/���ٶ�"; }

void create()
{
#include <kzznpc.h>

	set("area_name","�����ɽ");
	set("area_file","/d/dali/cangshan.c");
	set("ziyuan","����ʯ");
	set("jizhi",40);
	set("kaifa",10);
	set("long","����ĥ�ѵ����꺺�ӣ������䵱ѧ�ա�\n");
        setup();
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/blade")->wield();
}

#include <die.h>