
#include <ansi.h>
#include <weapon.h>

inherit SWORD;

void create()
{
	set_name(HIW"��������ֽ����"NOR , ({ "shan", "shanzi" }) );
	set_weight(600);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "�������Ʋ���������ͼ,����ϵ�˸�������׹�ӡ�\n");
		set("value", 120);
		set("material", "wood");
		set("wield_msg", "$N৵�һ����$n��\n");
		set("unwield_msg", "$N��£�����е�$n��\n");
	}

	init_sword(10);
	setup();
}
