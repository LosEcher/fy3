//Oldsix's ��

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("��",({"zhuding","ding"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long","�������ƶ��ɵĶ��ӡ�\n");
			set("unit","Щ");
		set("base_value",5);
		set("base_unit","ö");
		set("base_weight",15);
              }
	set_amount(1);
	init_throwing(4);
        setup();
}
