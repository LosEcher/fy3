// tiexiao.c                
// 97.7.18 by Aug

#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	set_name(YEL"����"NOR, ({ "tiexiao", "tie xiao","xiao" }) );
	set_weight(6000);

	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
		set("unit", "��");
		set("long", YEL"����һ���þ����Ƴɵ�����������������������ܲ���\n"NOR);
		set("value", 3000);		
		set("material", "steel");
		set("sing_level",5);
		set("can_sing","yes");
	}
	init_sword(30);

	set("wield_msg", YEL"$N��ৡ���һ���������г��һ��$n"+YEL+"�������С�\n"NOR);
	set("unwield_msg", YEL"$N�����е�$n"+YEL+"������졣\n"NOR);

	setup();
}
