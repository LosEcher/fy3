//Mr.music yangzhou ����

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("�൶",({"nidao","blade"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","�ǰ�ľ���൶����������ǿ���ƺ��Ǹ��Ŷ���\n������������Ĳ�֪д��Щʲô��\n");
		set("value",50000);
		set("material","wood");
		set("skill",([
							"name" :"blade",
                                "exp_required":0,
                                "sen_cost":20,
                                "difficulty" :20,
                                "max_skill":30,
		]));
	}
	init_blade(2);

// These properties are optional, if you don't set them, it will use the
// default values.


		set("wield_msg", "$N���һ����ڵ�$n�������С�\n");
                set("unequip_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	setup();
}
