//Oldsix's ����

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("����",({"tiejian","tie jian","jian","sword"}));
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long", "����һ�ѿ����൱��ͨ����������һ��ɱ������\n");
	set("value",2000);
	set("material","iron");
	}
	init_sword(20);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

// The setup() is required.

	setup();
}
