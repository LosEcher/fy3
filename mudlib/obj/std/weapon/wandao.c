// blade.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("�䵶", ({ "wan dao" ,"wandao","dao","blade"}) );
	set_weight(2500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 200);
		set("material", "tie");
		set("long", "����һѰ�����䵶��������Լ�����Ľ��ء�\n");
		set("wield_msg", "$N���һ�����λε�$n�������С�\n");
		set("unequip_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(15);
	setup();
}
