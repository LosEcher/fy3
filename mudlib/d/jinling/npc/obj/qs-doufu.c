// jingling ����

inherit ITEM;
inherit F_FOOD;
#include <ansi.h>

void create()
{
        set_name(HIW"��ˮ����"NOR, ({"qingshui doufu", "doufu"}));
        set_weight(200);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", HIW"һ�鴿��ɫ�Ķ���������һ�����㡣��û�Ծ��ѱ��ˡ�\n"NOR);
                set("unit", "��");
                set("value", 200);
                set("food_remaining", 6);
                set("food_supply", 50);
        }
}
