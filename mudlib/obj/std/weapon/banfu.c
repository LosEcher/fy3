// blade.c

#include <weapon.h>
inherit AXE;

void create()
{
	set_name("�師",({"ban fu","banfu","fu","axe"}));
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",500);
		set("material", "tie");
		set("long","һ�ѽ���İ師��\n");
		set("wield_msg","$N������γ�һ�ѳ�����$n�������С�\n");
		set("unequip_msg","$N�����е�$n�������䡣\n");
	}
	init_axe(15);
	setup();
}
