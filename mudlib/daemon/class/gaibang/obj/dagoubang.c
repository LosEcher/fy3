#include <weapon.h>
#include <ansi.h>
inherit STAFF;

void create()
{
set_name(HIG"�򹷰�"NOR, ({"dagou bang", "bang", "staff"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("unit", "��");
set("value", 100);
set("no_drop",1);
set("material", "bamboo");
set("long","һ����ɫ���̵����,�̵ô���.\n");
set("wield_msg","$N���$n,����һ��,�����߰������̵�Ӱ��.\n");
set("unwield_msg","$N��һ������$n�������������\n");
        }
init_staff(90);
setup();
}

