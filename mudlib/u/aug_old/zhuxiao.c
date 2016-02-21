// zhuxiao.c                
// 97.7.18 by Aug

#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	set_name(GRN"����"NOR, ({ "zhuxiao", "xiao" }) );
	set_weight(500);

	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
		set("unit", "��");
		set("long", GRN"����һ�����������ɵ�������\n"NOR);
		set("value", 100);		
		set("material", "bamboo");
		set("sing_level",1);
		set("can_sing","yes");
	}
	init_sword(15);

	set("wield_msg", GRN"$N��ৡ���һ���������г��һ��$n"+GRN+"�������С�\n"NOR);
	set("unwield_msg", GRN"$N�����е�$n"+GRN+"������졣\n"NOR);

	setup();
}
