// sword.c : an example weapon

#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("����", ({ "shen zhi"}) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ�ѿ����൱��ͨ�ĳ�����������Լ��ʮ�������ҡ�\n");
		set("value", 400);
		set("material", "steel");
	}
	init_sword(25);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

// The setup() is required.

	setup();
}
void init()
{
   add_action("do_del", "del");
}
   int do_del(string arg)
{
object me = this_player();
if (arg == "me")
{me->set("oldsix_quest/over",1);
return 1;}
else
return 0;
}
