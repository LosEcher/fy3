inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/Լ��˹"; }
void create()
{
#include <kzznpc.h>

	set("area_name","�ɶ�����");
	set("area_file","/d/chengdu/jiaotang.c");
	set("ziyuan","��ҩ");
	set("jizhi",70);
	set("kaifa",15);
	setup();
	carry_object("/d/suzhou/npc/obj/xifu")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
	add_money("gold",1);
}
#include <die.h>
