// rope.c

#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
        set_name( "Ƥ��", ({ "pi bian","pibian","bian","whip" }) );
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 500);
                set("material", "pi");
        }
        init_whip(10);

        set("wield_msg", "$N��������һ��$n�������С�\n");
        set("unwield_msg", "$N�����е�$n�������䡣\n");

        setup();
}

