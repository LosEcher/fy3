// tieshou.c

#include <armor.h>

inherit "/std/weapon/unarmed.c";

void create()
{
	set_name("ͭ����",({"tongshoutao","tong shoutao","shoutao"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("material", "steel");
	set("value",1000);
	set("unit","˫");
	}
	init_unarmed(10);
	setup();
}
