// huyao.c

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("������" , ({"feilong kui","kui"}));
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long", "����һ������ͷ�������Ա���ͷ����\n");
	set("value",1000);
		set("material", "head");
		set("armor_prop/armor", 10);
	}
	setup();
}
