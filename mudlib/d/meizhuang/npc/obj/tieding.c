//Oldsix's ����

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("����",({"tieding","ding"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long","��������Ķ��ӡ�\n");
			set("unit","Щ");
		set("base_value",25);
		set("base_unit","ö");
	set("base_weight",20);
              }
	set_amount(1);
	init_throwing(8);
        setup();
}
