//Oldsix's ľ��

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("ľ��",({"mudao","mu dao","dao","blade"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("value",100);
	set("long","��ľ�ƳɵĶ̵���ɱ������С��\n");
	set("material","wood");
	}
	init_blade(5);

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");

	setup();
}
