#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/ɽ�¸ʻ᳤"; }
void create()
{
#include <kzznpc.h>

	set("ziyuan","Ƥ��");
	set("jizhi",80);
	set("kaifa",8);
	set("area_name","ɽ�¸ʻ��");
	set("area_file","/d/kaifeng/paifang.c");
        setup();
carry_object("/obj/armor/guardsuit")->wear();
}
#include <die.h>