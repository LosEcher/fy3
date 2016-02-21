#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/阿芙"; }
void create()
{
#include <kzznpc.h>
set("area_name","泉州茶园");
set("area_file","/d/quanzhou/chayuan.c");
set("ziyuan","乌龙茶");
set("jizhi",35);
set("kaifa",20);

set("chat_chance",3);
set("chat_msg",({
"采茶女采下一片嫩绿的新茶,凑到鼻边闻了下,放到茶篓中.\n",
"采茶女轻盈得转个身,绕到你身后躲了起来.\n",
"采茶女抿嘴笑了笑道:这可是正宗的乌龙茶呀.\n",
}));	
	 setup();
carry_object("/obj/cloth")->wear();
add_money("silver",3);
}
// #include <die.h>
