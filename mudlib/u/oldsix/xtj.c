// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>

inherit ARMOR;

void create()
{
	set_name("������",({"xuantie jia","jia"}));
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("material","iron");
		set("armor_prop/armor",5);
		set("oldsix/protect",100000);
		set("oldsix/max_damage",100000);
	}
	setup();
}
