#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("������" , ({ "staff", "zhuzhang" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "һ������,���ھ���ʹ��,ͷ���Ѿ������ˡ�\n");
		set("value", 120);
		set("material", "wood");
		set("wield_msg", "$N�ó�һ��΢�Ƶ�$n�������С�\n");
		set("unwield_msg", "$N�������е�$n��\n");
	}

	init_staff(10);
	setup();
}
