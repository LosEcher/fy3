#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("��ա��", ({ "zhadao", "blade", "dao" }) );
        set_weight(8500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "һ�ѵ�����ڣ�����ѩ�ף�����ա����\n");
                set("unit", "��");
       set("wield_msg", "$N���һ��$n,��ͷ�ڵ������������¡�\n");
       set("unwield_msg", "$N��������$n���ѵ�Ҫ���سɷ�\n");
                set("value", 4000);
                set("material","steel");
        }
        init_blade(20);
        setup();
}

