//Mr.music yangzhou ����

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("�Ž�",({"gujian","jian","sword"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ���⼣�߰ߵ���ͭ�����ƺ��Ǹ��Ŷ���\n������������Ĳ�֪д��Щʲô��\n");
		set("value",100000);
		set("material","iron");
		set("skill",([
				"name" :"sword",
				"exp_required":0,
                                "sen_cost":10,
				"max_skill":50,
		]));
	}
	init_sword(20);

// These properties are optional, if you don't set them, it will use the
// default values.


		set("wield_msg", "$N���һ���⼣�߰ߵ�$n�������С�\n");
		set("unequip_msg", "$N�����е�$n��������Ľ��ʡ�\n");
	setup();
}
