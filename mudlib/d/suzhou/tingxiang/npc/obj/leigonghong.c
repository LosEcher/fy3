// Mr.music yangzhou ��Ҷ


#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("�׹���",({"leigong hong","leigong","hong"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long", "����ɵĶ��Ű�����\n");
	set("unit","��");
	set("base_unit","ö");
	set("base_weight",5);
		set("value", 100);
              }
	set_amount(1);
        init_throwing(1);
        setup();
}
