//Oldsix's ľ��

#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("ľ��",({"muzhang","mu zhang","zhang","staff"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("value",100);
	set("long","��ɽ��ľ�Ƴɵ����ȡ�\n");
	set("material","wood");
	}
	init_staff(5);


	setup();
}
