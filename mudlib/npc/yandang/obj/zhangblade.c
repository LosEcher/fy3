#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("�ص�" , ({ "zhang_blade", "blade" }) );
	set_weight(1500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "һ�Ѳص�,�����ޱȡ�\n");
		set("value", 120);
		set("material", "steel");
		set("wield_msg", "$N���һ��$n,��ʱŨ�ص�ɱ���ӵ���ɢ��������\n");
		set("unwield_msg", "$N�������е�$n��\n");
	}

	init_blade(20);
	setup();
}
