//Mr.music yangzhou ��Ƥ

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("��Ƥ", ({ "hupi","pi" }) );
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else {

                set("material", "leather");
                set("value", 2000);
		set("unit", "��");
		set("armor_prop/armor", 20);
	}
	setup();
}
