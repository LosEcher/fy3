// huyao.c

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("������",({"xuantie kui","kui"}));
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("material", "head");
		set("armor_prop/armor", 5);
		set("oldsix/protect",100000);
		set("oldsix/max_damage",100000);
	}
	setup();
}
