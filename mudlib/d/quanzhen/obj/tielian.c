// rope.c

#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
        set_name( "����", ({"tie lian"}) );
        set_weight(2800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
       set("long","һ���ִ������,����մ�ź�ɫѪ˿.\n");
                set("unit", "��");
                set("value", 1500);
                set("material", "steel");
        }
        init_whip(20);

        set("wield_msg", "$N��������һ��$n�������С�\n");
        set("unwield_msg", "$N�����е�$n�������䡣\n");

        setup();
}

