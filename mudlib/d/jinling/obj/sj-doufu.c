// jingling ����

inherit ITEM;
inherit F_FOOD;
#include <ansi.h>

void create()
{
        set_name(HIW"ˮ������"NOR, ({"shuijing doufu", "doufu"}));
        set_weight(200);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", HIW"һ��ɰ�͸���Ķ�������Ө��͸����֪���Ļ���Ϊ�ǿ�ˮ��\n"NOR);
                set("unit", "��");
                set("value", 80);
                set("food_remaining", 5);
                set("food_supply", 50);
        }
}
