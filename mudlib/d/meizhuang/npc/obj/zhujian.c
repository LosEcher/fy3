//Oldsix's ��

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("��",({"zhujian","zhu jian","jian","sword"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","�������ƳɵĶ̽���ɱ������С��\n");
	set("material","bamboo");
	set("value",500);
	}
	init_sword(10);

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

	setup();
}
