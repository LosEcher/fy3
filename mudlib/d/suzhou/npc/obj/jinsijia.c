// huyao.c

#include <armor.h>

inherit ARMOR;

void create()
{
	set_name("��˿��",({"jinsi jia","jia"}));
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("long","���������ɷ�Ǻÿ��Ľ�˿�ס�\n");
	set("value",5000);
		set("material","armor");
		set("armor_prop/armor", 10);
	}
	setup();
}
