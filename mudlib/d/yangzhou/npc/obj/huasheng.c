
inherit ITEM;
inherit F_FOOD;
#include <ansi.h>

void create()
{
        set_name(HIY"���㻨����"NOR, ({"wuxiang huasheng", "huasheng"}));
        set_weight(50);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", "һ�����㻨���ס�\n");
                set("unit", "��");
                set("value", 50);
                set("food_remaining", 1);
                set("food_supply", 50);
        }
}
