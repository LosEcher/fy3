inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() {return DATA_DIR+"npc/������";}
void create()
{
#include <kzznpc.h>
set("chat_chance",5);
set("chat_msg",({
"�����ɽк�:��Ь,�´�Ĳ�Ь,˭Ҫ���Ь?\n",
"������������:��������Ĳ�Ь��������ȥ��.\n",
(:random_move:),
}));
set("vendor_goods",([
"caoxie":__DIR__"obj/caoxie",
]));
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/std/armor/pijia")->wear();
	carry_object("/obj/std/weapon/wandao")->wield();
}
void init()
{
	::init();
add_action("do_vendor_list","list");
}


