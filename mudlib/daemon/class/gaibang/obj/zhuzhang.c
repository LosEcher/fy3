#include <weapon.h>

inherit STAFF;

void create()
{
set_name("���", ({"zhu bang", "bang", "staff"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("unit", "��");
                set("value", 100);
set("material", "bamboo");
set("long","һ����ɫ���Ƶ����,����ȥ��ͦ��ʵ.\n");
set("wield_msg","$N���һ��:��������Ƥ�������һ��$n.\n");
set("unwield_msg","$N��һ������$n�������������\n");
        }
        init_staff(15);
        setup();
}

