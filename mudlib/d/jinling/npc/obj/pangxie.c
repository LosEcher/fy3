
inherit ITEM;
inherit F_FOOD;
#include <ansi.h>

void create()
{
        set_name(HIC"�����з"NOR, ({"pangxie", "xie"}));
        set_weight(100);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", "һֻ����ĳ����з��\n");
                set("unit", "ֻ");
                set("value", 500);
                set("food_remaining", 4);
                set("food_supply", 40);
        }
}
