// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>

inherit HANDS;

void create()
{
	set_name("������",({"tie shoutao","tieshoutao","shoutao"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","˫");
		set("oldsix/max_damage",30);
		set("oldsix/protect",4);
		set("material","tie");
		set("long", "����һ˫�����Ƴɵ����ף���������˫�֡�\n");
		set("armor_prop/armor",10);
		set("value",2000);
	}
	setup();
}
