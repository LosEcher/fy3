inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/������"; }
void create()
{
#include <kzznpc.h>

	set("area_name","�䶨��������");
	set("area_file","/d/dali/qingzhulin.c");
	set("ziyuan","����");
	set("jizhi",15);
	set("kaifa",50);

	set("long", "һ��¬¹��������̨�ĸ�Ů�������˸��������һ�ѿ��񵶣���������\n");
        setup();
carry_object(__DIR__"obj/tongqun")->wear();
carry_object(__DIR__"obj/kandao")->wield();
}

// #include <die.h>
