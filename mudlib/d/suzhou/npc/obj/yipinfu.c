// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("һƷ�ٷ�",({"cloth"}));
	set_weight(3500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("material", "cloth");
		set("value",10000);
		set("armor_prop/armor",10);
	}
	setup();
}
