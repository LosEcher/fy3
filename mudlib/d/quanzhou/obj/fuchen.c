#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("�ڱ�����", ({ "fuchen", "chen" }) );
	set_weight(3000);

	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
		set("unit", "��");
		set("long", "��ľΪ��,����˿���Ƴɵķ���,����������.\n");
		set("value", 1000);		
		set("material", "stone");
	}
	init_whip(10);

	set("wield_msg", "$N��ৡ���һ�����һ��$n��\n");
	set("unwield_msg", "$N�������е�$n��\n");

	setup();
}
