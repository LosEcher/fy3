inherit KZZNPC;
inherit F_VENDOR;
string query_save_file() { return DATA_DIR+"npc/��С��";}

void create()
{
#include <kzznpc.h>
set("vendor_goods",([
"tea":__DIR__"obj/tea"
]));
	set("area_name","�������ͩ԰���");
	set("area_file","/d/jindezheng/tea-room.c");

	setup();
	add_money("silver",5);
	carry_object("/obj/cloth")->wear();
}
void init()
{
object ob;
::init();
if (interactive(ob=this_player())&&!is_fighting()) {
remove_call_out("greeting");
call_out("greeting",1,ob);
}
add_action("do_vendor_list","list");
}
void greeting(object ob)
{
 if (!living(ob)||environment(ob)!=environment()) return;
command("say ��λ�͹ٿ�Ҫ��һ��������,��һ������?\n");
return;
}


