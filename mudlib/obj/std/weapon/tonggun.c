// shutonggun.c

#include <weapon.h>

inherit CLUB;

void create()
{
	set_name("ͭ��", ({"tong gun", ",tonggun","gun","club"}));
	set_weight(2000);

	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "һ��ʮ������ͭ����\n");
		set("value", 1000);
		set("material", "tong");
		set("wield_msg", "$N���ִ������һ��$n��\n");
		set("unwield_msg", "$N������һ�ۣ���$n�������\n");
	}
	init_club(15);
	setup();
}
