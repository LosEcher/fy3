#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("������ˮ��", ({"sword","bailian","fengshui","fenshui","jian"}));
   set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","һ��ͨ��ѩ�׵ĳ�����\n");
                set("unit", "��");
                set("value", 1000);
                set("material", "steel");
                set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n��ؽ��ʡ�\n");
        }
        init_sword(30);
        setup();
}

