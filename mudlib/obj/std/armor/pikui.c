// huyao.c

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("Ƥ��" , ({"pi kui","pikui","kui"}));
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long", "����һ��ţƤ�Ƴɵ�ͷ�������Ա���ͷ����\n");
	set("value",500);
		set("material", "pi");
		set("armor_prop/armor", 5);
	}
	setup();
}
