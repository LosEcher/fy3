// gaoyao.c

inherit ITEM;
#include <ansi.h>
void create()
{
	set_name("大理石", ({"stone"}));
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "块");
		set("long", "苍山所产的大理石,上有天然花纹。\n");
		set("value", 5000);
		set("weight",10000);
	}
	setup();
}
