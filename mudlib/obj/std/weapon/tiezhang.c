// gangzhang.c ����

#include <weapon.h>
inherit STAFF;

void create()
{
	set_name("����", ({ "tie zhang","tiezhang","zhang","staff" }));
	set_weight(5000);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ���ֳ������ȡ�\n");
		set("value", 1500);
            set("material", "tie");
		set("wield_msg", "$N���һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n������䡣\n");
	}
  	init_staff(15);
	setup();
}
