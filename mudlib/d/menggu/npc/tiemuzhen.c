inherit KZZNPC;
#include <ansi.h>
string query_save_file() { return DATA_DIR + "npc/��ľ��"; }
void create()
{
#include <kzznpc.h>
	set("long","��ľ�����ɹŲ�ԭ��Ӣ��!\n");
	set("area_name","�ɹŲ�ԭ");
	set("area_file","/d/menggu/yinzhang");
	set("ziyuan","����");
	set("jizhi",100);
	set("kaifa",60);
	setup();
   carry_object("/d/obj/weapon/blade/gudingdao")->wield();
   carry_object("/d/obj/cloth/zhanpao")->wear();
	add_money("gold",1);
}
#include <die.h>
