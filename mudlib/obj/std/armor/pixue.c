// man-shoe.c
 
#include <armor.h>
 
inherit BOOTS;
 
void create()
{
	set_name("Ƥѥ", ({ "pi xue", "pixue","xue" }) );
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("material", "pi");
		set("unit", "˫");
		set("long", "����һ˫ţƤ������ѥ�ӣ����Ա���˫�š�\n");
		set("value", 1000);
		set("armor_prop/dodge", 5);
		set("armor_prop/armor", 2);
	}
	setup();
}
