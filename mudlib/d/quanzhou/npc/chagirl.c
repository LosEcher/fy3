#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/��ܽ"; }
void create()
{
#include <kzznpc.h>
set("area_name","Ȫ�ݲ�԰");
set("area_file","/d/quanzhou/chayuan.c");
set("ziyuan","������");
set("jizhi",35);
set("kaifa",20);

set("chat_chance",3);
set("chat_msg",({
"�ɲ�Ů����һƬ���̵��²�,�յ��Ǳ�������,�ŵ���¨��.\n",
"�ɲ�Ů��ӯ��ת����,�Ƶ�������������.\n",
"�ɲ�Ů����Ц��Ц��:��������ڵ�������ѽ.\n",
}));	
	 setup();
carry_object("/obj/cloth")->wear();
add_money("silver",3);
}
// #include <die.h>
