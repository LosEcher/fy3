#include <weapon.h>

inherit HAMMER;

void create()
{
        set_name("�׳�ɡ", ({"baichou san","san"}));
        set_weight(600);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
		   set("long", "һ��������Ϊ��,�׳�Ϊ���ɡ��\n");
                set("wield_msg","$N��ȻһЦ,���ɵش�һ��$n!\n");
                             set("unwield_msg","$N΢Ц���������е�$n!\n");
        }
        init_hammer(25);
        setup();
}

