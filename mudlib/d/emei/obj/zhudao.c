//Oldsix's ��

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("��",({"zhudao","zhu dao","dao","blade"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","�����ƳɵĶ̵���ɱ������С��\n");
	set("material","bamboo");
	}
	init_blade(10);

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");

	setup();
}
