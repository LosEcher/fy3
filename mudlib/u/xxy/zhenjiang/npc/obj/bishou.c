//Mr.music yangzhou ذ��

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("ذ��", ({ "bishou" , "bi"  }) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ�ѷ�����ذ�ס�\n");
		set("value", 200);
		set("material", "steel");
	}
	init_sword(15);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n�������䡣\n");

	setup();
}
