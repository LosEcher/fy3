//Oldsix's ����

#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("������",({"gangzhang","gang zhang","zhang","staff"}));
	set_weight(9000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("value",5000);
	set("long","�������ƳɵĻ��ȡ�\n");
	set("material","steel");
	}
	init_staff(30);


	setup();
}
