//Oldsix's ����

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("��ī��",({"pomodao","pomo dao","dao","blade"}));
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("value",2000);
	set("long","һ����ڵ��䵶��\n");
	set("material","iron");
	}
	init_blade(20);

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");

	setup();
}
