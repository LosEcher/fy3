#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("������", ({"yinyang-sword","sword"}));
   set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","һ�ѽ������,�������ë��������\n");
                set("unit", "��");
                set("value", 10000);
                set("material", "steel");
                set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n��ؽ��ʡ�\n");
        }
        init_sword(40);
        setup();
}

