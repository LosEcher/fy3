#include <armor.h>
inherit ARMOR;
void create()
{
	set_name("��Ƥ��",({"yangpi ao","cloth"}));
	set_weight(900);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("long","���˴�С�������Ƥ����\n");
	set("value",5000);
		set("material","armor");
		set("armor_prop/armor", 4);
	}
	setup();
}
