#include <weapon.h>

inherit STAFF;

void create()
{
        set_name("����", ({"gang zhang", "zhang", "staff"}));
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("unit", "��");
                set("value", 300);
                set("material", "steel");
set("long","�������ĸ��ȣ�Ħ涵�ʮ�ֹ⻬��\n");
set("wield_msg","$N˫�־���һ��$n,��Ȼ�ܳ���.\n");
set("unwield_msg","$N������$n�ڵ�������һ�٣�$n���������.\n");
        }
        init_staff(35);
        setup();
}

