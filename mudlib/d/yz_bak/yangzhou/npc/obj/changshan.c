//Mr. music yangzhou ����

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("����",({"cloth","changshan","shan"}));
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("value", 400);
		set("unit", "��");
		set("material", "cloth");
		set("armor_prop/armor", 5);
	}
	setup();
}
