// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("����",({"xifu","fu","cloth","xi fu"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("material", "cloth");
	set("armor_prop/armor", 10);
	set("value",5000);
	}
	setup();
}
