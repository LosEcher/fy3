//Mr. music yangzhou ����

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("��䳤ȹ", ({"feicui qun","qun", "feicuiqun","cloth" }) );
	set_weight(1500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("value", 2000);
		set("unit", "��");
		set("material", "cloth");
		set("armor_prop/armor", 5);
		set("armor_prop/personality",3);
		set("female_only",1);
	}
	setup();
}
