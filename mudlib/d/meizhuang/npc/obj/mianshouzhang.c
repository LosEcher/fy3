// tieshou.c

#include <armor.h>

inherit "/std/weapon/unarmed.c";

void create()
{
	set_name("ľ������",({"mianshouzhang","mian shouzhang","shouzhang"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("material","linen");
	set("value",100);
	set("unit","˫");
	}
	init_unarmed(5);
	setup();
}
