// gangzhang.c ����

#include <weapon.h>
inherit STAFF;

void create()
{
	set_name("����", ({ "gang zhang","gangzhang","zhang","staff" }));
	set_weight(7000);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","�ֳ��ĸ��ȣ������ž����Ļ��ơ�\n");
		set("value", 3000);
            set("material", "gang");
		set("wield_msg", "$N���һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n������䡣\n");
	}
  	init_staff(25);
	setup();
}
