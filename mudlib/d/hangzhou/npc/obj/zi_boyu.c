#include <weapon.h>

inherit HAMMER;
inherit F_LIQUID;

void create()
{
        set_name("�Ͻ���", ({"boyu", "zijing"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long", "һ���Ͻ����ƵĲ��ۡ�\n");
                set("unit", "��");
		set("value", 3000);
		set("max_liquid", 5);
                set("wield_msg", "$Nץ��һ��$n���������е�������\n");
                set("material", "steel");
        }

        set("liquid", ([
                "type": "water",
                "name": "��ˮ",
                "remaining": 5,
        ]) );
        init_hammer(5);
        setup();

}

