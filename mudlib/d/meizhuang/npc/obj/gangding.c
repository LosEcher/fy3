//Oldsix's �ֶ�

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("�ֶ�",({"gangding","ding"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long","���ִ��Ƶļⶤ��\n");
			set("unit","Щ");
		set("base_value",50);
		set("base_unit","ö");
		set("base_weight",40);
              }
	set_amount(1);
	init_throwing(10);
        setup();
}
