//gun.c



#include <weapon.h>

inherit GUN;

void create()
{
	set_name("�����ǹ", ({ "gun"}) );
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit", "ͦ");
		set("value", 500);
		set("material", "iron");
	set("long", "����һͦ�¹�����������ǹ,������������,���Ժ���ʿ��������\n");
	set("wield_msg", "$N�ó�һͦ�����ܴ��$n�������С�\n");
	set("unequip_msg", "$N�����е�$n�������䡣\n");
	}
	init_blade(25);
	setup();
}
