// hammer.c

#include <weapon.h>

inherit HAMMER;

void create()
{
        set_name("ͭ��", ({ "tong chui" ,"tongchui" , "chui","hammer"}) );
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����һ����ͭ�����൱��ʵ��\n");
                set("value", 1000);
                set("material", "tong");
                set("wield_msg", "$N�ó�һ��$n��������������Ȼ���������С�\n");
                set("unwield_msg", "$N�������е�$n��\n");
        }

        init_hammer(15);
        setup();
}
