// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("źɫɴ��",({"shan"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("material","silk");
		set("value",5000);
		set("armor_prop/armor",10);
	}
	setup();
}
