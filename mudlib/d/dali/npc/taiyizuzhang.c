inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/�ڶ�¡"; }
void create()
{
#include <kzznpc.h>

	set("area_name","������");
	set("area_file","/d/dali/hexi.c");
	set("ziyuan","����");
	set("jizhi",70);
	set("kaifa",5);
	set("long","һ��ʮ�ִ�׳�Ĵ󺺣���˵���ڴ���θ������Ҷ���\n");

        setup();
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/sword")->wield();
}

#include <die.h>