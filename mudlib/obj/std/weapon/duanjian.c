// sword.c : an example weapon

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("�̽�", ({ "duan jian" , "duanjian" , "jian","sword" }) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ�ѿ����൱��ͨ�Ķ̽���\n");
		set("value", 200);
		set("material", "tie");
	}
	init_sword(15);

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

	setup();
}
