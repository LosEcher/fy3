
#include <weapon.h>

inherit HAMMER;

void create()
{
        set_name("���Ǵ�", ({ "hammer" }) );
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "���ص����Ǵ�,���沽���˼�̡�\n");
                set("value", 300);
                set("material", "iron");
                set("wield_msg", "$N�ó�һ��$n,��������������Ȧ�ӡ�\n");
                set("unwield_msg", "$N�ɿ����е�$n,ȴ�����ҵ��˽Ű塣\n");
        }
        init_hammer(15);
        setup();
}

