//Mr.music yangzhou ��Ƥ

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("��Ƥ����", ({ "diao pi","diaopi","pi" }) );
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else {

		set("material", "pi");
		set("value", 8000);
		set("unit", "��");
		set("armor_prop/armor", 8);
		set("armor_prop/personality",5);
	}
	setup();
}
