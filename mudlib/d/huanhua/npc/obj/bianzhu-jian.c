#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("������", ({"sword","jian"}));
   set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","����ⳤ��ϸ���̶����.��\n");
                set("unit", "��");
                set("value", 1000);
                set("material", "steel");
                set("wield_msg", "$N�Ӻ��̸����������һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n������еĺ��̸ˡ�\n");
        }
        init_sword(40);
        setup();
}

