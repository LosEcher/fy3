//Mr.music yangzhou �̽�

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("��",({"zhujian","zhu jian","jian","sword"}));
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","�������ɵĶ̽���ɱ������С��\n");
	set("value",100);
	set("material","bamboo");
	}
	init_sword(5);

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

	setup();
}
