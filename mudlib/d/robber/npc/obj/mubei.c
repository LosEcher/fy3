
#include <weapon.h>

inherit HAMMER;

void create()
{
        set_name("����Ĺ��", ({ "mubei" }) );
        set_weight(20000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����д����[�ȿ��Ƹ����ϱ�֮Ĺ]��\n");
                set("value", 300);
                set("material", "stone");
                set("wield_msg", "$N��������һ��$n,���������ࡣ\n");
                set("unwield_msg", "$N�������е�$n,ȴ�����ҵ��˽Ű塣\n");
        }
        init_hammer(10);
        setup();
}

