// shutonggun.c

#include <weapon.h>

inherit CLUB;

void create()
{
	set_name("ľ��", ({"mu gun", ",mugun","gun","club"}));
	set_weight(1000);

	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "һ��ʮ��������ɵ�ľ����\n");
		set("value", 200);
		set("material", "mu");
		set("wield_msg", "$N���ִ������һ��$n��\n");
		set("unwield_msg", "$N������һ�ۣ���$n�������\n");
	}
	init_club(5);
	setup();
}
