inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/������"; }
void create()
{
#include <kzznpc.h>

	set("area_name","����軨ɽ");
	set("area_file","/d/dali/chahuashan5.c");
	set("ziyuan","ɽ��");
	set("jizhi",30);
	set("kaifa",30);

        setup();
carry_object("/obj/cloth")->wear();
carry_object("/obj/std/weapon/muzhang")->wield();
}

#include <die.h>
