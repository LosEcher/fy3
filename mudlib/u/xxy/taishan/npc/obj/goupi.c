//Mr.music yangzhou ��Ƥ

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("��Ƥ", ({ "goupi","pi" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {

                set("material", "leather");
                set("value", 50);
		set("unit", "��");
		set("armor_prop/armor", 8);
	}
	setup();
}
