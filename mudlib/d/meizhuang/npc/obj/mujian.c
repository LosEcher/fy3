//Oldsix's ľ��

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("ľ��",({"mujian","mu jian","jian","sword"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","��ľ���ɵĶ̽���ɱ������С��\n");
	set("material","wood");
	set("value",100);
	}
	init_sword(5);

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

	setup();
}
