
#include <armor.h>

inherit BOOTS;

void create()
{
	set_name("����ѥ",({"xuantie xue","xue"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "˫");
		set("material", "boots");
		set("armor_prop/dodge", 5);
		set("armor_prop/armor",5);
		set("oldsix/protect",100000);
		set("oldsix/max_damage",100000);
	}
	setup();
}
