//Mr.music yangzhou �̽�

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("�̽�", ({ "duanjian","sword" , "duan jian" , "jian" }) );
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ�ѿ����൱��ͨ�Ķ̽���\n");
		set("value", 200);
		set("material", "steel");
	}
	init_sword(15);

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

	setup();
}
