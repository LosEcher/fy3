//Oldsix's �ֵ�

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("�ֵ�",({"gangdao","gang dao","dao","blade"}));
	set_weight(9000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("value",5000);
	 set("long","���ִ��ƵĹ�ͷ����ɱ������ǿ��\n");
	set("material","steel");
	}
	init_blade(30);

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");

	setup();
}
