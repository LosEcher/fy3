// sword.c : an example weapon

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("��", ({ "zhujian","sword" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "һ�Ѿ��ɵ��񽣣���Ȼû�г������������ȳ���Ҫ��Ķࡣ\n");
		set("material", "steel");
	}
	init_sword(15);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

// The setup() is required.

	setup();
}
