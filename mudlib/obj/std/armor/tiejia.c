// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>

inherit ARMOR;

void create()
{
	set_name("����",({"tie jia","tiejia","jia"}));
	set_weight(3500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("material","tie");
		set("oldsix/max_damage",30);
		set("oldsix/protect",4);
		set("long", "����һ�������Ƴɵļ��У����������ϰ���\n");
		set("armor_prop/armor",20);
		set("value",6000);
	}
	setup();
}
