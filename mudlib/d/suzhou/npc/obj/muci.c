// Mr.music yangzhou ����

#include <weapon.h>

inherit THROWING;

void create()
{
		set_name("ľ��",({"muci","ci"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long","ľͷ���ɵļ�̡�\n");
			set("unit","Щ");
			set("base_unit","֧");
                set("base_weight", 10);
              }
	set_amount(50);
	init_throwing(3);
        setup();
}
