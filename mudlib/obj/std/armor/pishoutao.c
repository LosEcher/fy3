// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>

inherit HANDS;

void create()
{
	set_name("Ƥ����",({"pi shoutao","pishoutao","shoutao"}));
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","˫");
		set("material","pi");
		set("long", "����һ˫ţƤ�Ƴɵ����ף���������˫�֡�\n");
		set("armor_prop/armor",5);
		set("value",500);
	}
	setup();
}
