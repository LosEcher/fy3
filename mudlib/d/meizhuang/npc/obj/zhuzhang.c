//Oldsix's ����

#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("������",({"zhuzhang","zhu zhang","zhang","staff"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("value",500);
	set("long","�����ƶ��ɵ����ȡ�\n");
	set("material","bamboo");
	}
	init_staff(10);


	setup();
}
