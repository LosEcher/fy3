#include <ansi.h>
inherit ITEM;
inherit F_FOOD;
void create()
{
  set_name(YEL"��ɩ��"NOR, ({"fish","songsaoyu","yu"}));
  set_weight(1000);
  if (clonep())
    set_default_object(__FILE__);
  else {
    set("unit", "��");
    set("value", 10000);
    set("long","����һ���յô����������������.");
    set("food_remaining", 60);
    set("food_supply", 350);
  }
  set("no_sell",1);
}
