//Oldsix's ľ��

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("ľ��",({"muding","ding"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long","ľͷ���ɵļⶤ��\n");
			set("unit","Щ");
		set("base_value",1);
			set("base_unit","֧");
                set("base_weight", 10);
              }
	set_amount(1);
	init_throwing(2);
        setup();
}
