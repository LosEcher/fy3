// blade.c

#include <weapon.h>
inherit AXE;

void create()
{
	set_name("����",({"tie fu","tiefu","fu","axe"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",1000);
		set("material", "tie");
		set("long","һ�ѳ�������Ž���������\n");
		set("wield_msg","$N������γ�һ�ѳ�����$n�������С�\n");
		set("unequip_msg","$N�����е�$n�������䡣\n");
	}
	init_axe(25);
	setup();
}
