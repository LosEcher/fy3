// shutonggun.c

#include <weapon.h>

inherit CLUB;

void create()
{
	set_name("����", ({"tie gun", ",tiegun","gun","club"}));
	set_weight(2500);

	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "һ��ʮ������������\n");
		set("value", 2000);
		set("material", "tie");
		set("wield_msg", "$N���ִ������һ��$n��\n");
		set("unwield_msg", "$N������һ�ۣ���$n�������\n");
	}
	init_club(25);
	setup();
}
