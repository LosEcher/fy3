#include <weapon.h>

inherit HAMMER;

void create()
{
	set_name("ľ��", ({"muyu"}) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 200);
		set("material", "wood");
		set("long", "һ����ľ�����ľ�㡣\n");
	}
	init_hammer(10);
	setup();
}
