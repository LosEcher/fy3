// huyao.c

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("����" , ({"tie kui","tiekui","kui"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ�������Ƴɵ�ͷ�������Ա���ͷ����\n");
		set("value",2000);
		set("material", "tie");
		set("oldsix/max_damage",30);
		set("oldsix/protect",4);
		set("armor_prop/armor", 10);
	}
	setup();
}
