// gangzhang.c ����

#include <weapon.h>
inherit STAFF;

void create()
{
	set_name("ľ��", ({ "mu zhang","muzhang","zhang","staff" }));
	set_weight(1500);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ��ϸ����ľ�ȡ�\n");
		set("value", 200);
            set("material", "mu");
		set("wield_msg", "$N���һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n������䡣\n");
	}
  	init_staff(5);
	setup();
}
