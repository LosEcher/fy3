// dart.c

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("�ɵ�", ({ "fei dao","feidao","dart" ,"dao"}) );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long",	"�����ɾ��ִ����ʮ�־��ɵķɵ���\n");
		set("unit", "Щ");
		set("base_unit", "��");
		set("base_weight", 40);
		set("base_value", 10);
		set("material", "gang");
		set("value", 10);
	}
	set_amount(1);
	init_throwing(20);
	setup();
}
