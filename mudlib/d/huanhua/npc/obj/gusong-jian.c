#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("���ɲ���", ({"sword","jian"}));
   set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","����һ���޹�ɫ���¾ɡ������ơ������һ��ĶϽ���\n");
                set("unit", "��");
                set("value", 1000);
                set("material", "steel");
                set("wield_msg", "$N��ɨ�����������һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n������е�ɨ�㡣\n");
        }
        init_sword(45);
        setup();
}

