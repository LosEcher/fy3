//Oldsix's ����

#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("����",({"tiezhang","tie zhang","zhang","staff"}));
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("value",2000);
	set("long","��������Ļ��ȡ�\n");
	set("material","iron");
	}
	init_staff(20);


	setup();
}
