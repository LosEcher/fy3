#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;
string query_save_file() { return DATA_DIR + "npc/���ϸ�"; }
void create()
{
#include <kzznpc.h>

set("long", "����һ����ĥ����ʯ��ʯ��������ֻ����һ�����磬ȫ�����˺�ʵ�ļ��⡣\n");
set("chat_chance",2);
set("chat_msg", ({
"���ϸ���һ��ûһ�µ��������е�һ�鱮�ģ���������ţ�����ɽ֮��ʢ����ʯ��
���ƴ���ʯ������Ҳ��ʯ���������¡���\n",
"���ϸ˷����������������˲���ͷ�ĺ�ˮ��\n",
        }));
       set("area_name","����ʯ��");
       set("area_file","/d/dali/stoneshop.c");
	set("ziyuan","��ʯ");
	set("jizhi",30);
	set("kaifa",30);

set("vendor_goods",([
"stone":__DIR__"obj/stone",
]));
        setup();
carry_object("/obj/std/weapon/tiezhang")->wield();
carry_object("/obj/cloth")->wear();
add_money("silver",2);
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
  }

#include <die.h>