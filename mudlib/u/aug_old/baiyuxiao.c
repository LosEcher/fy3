// baiyuxiao.c                
// 97.7.18 by Aug

#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	set_name(HIW"����"NOR, ({ "yuxiao", "xiao" }) );
	set_weight(3000);

	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
		set("unit", "��");
		set("long", HIW"����һ��ͨ���׵�����������м�Ʒ����������������Ҳ�ر�Ķ�����\n"NOR);
		set("value", 12000);		
		set("material", "steel");
		set("sing_level",9);
		set("can_sing","yes");
	}
	init_sword(50);

	set("wield_msg", HIW"$N��ৡ���һ���������г��һ��$n"+HIW+"�������С�\n"NOR);
	set("unwield_msg", HIW"$N�����е�$n"+HIW+"������졣\n"NOR);

	setup();
}
