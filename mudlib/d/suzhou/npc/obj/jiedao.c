//Mr.music yangzhou �̽�

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("�䵶",({"jiedao","jie dao","dao","blade"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","�������Ƶ��䵶����һ����ɱ������\n");
	set("material","iron");
	}
	init_blade(10);

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");

	setup();
}
