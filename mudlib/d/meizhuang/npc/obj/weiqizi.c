// Mr.music yangzhou ����

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("Χ����",({"weiqizi","weiqi zi","zi","qizi"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long","����һö��ͨ��Χ���ӡ�\n");
			set("unit","Щ");
		set("base_unit","ö");
                set("base_weight", 10);
		set("base_value",50);
              }
	set_amount(1);
        init_throwing(5);
        setup();
}
