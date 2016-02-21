#include <weapon.h>

inherit HAMMER;

void create()
{
   set_name("铁算盘", ({ "tie suanpan", "suanpan", "hammer"}) );
   set_weight(2000);
   if( clonep() )
     set_default_object(__FILE__);
   else {
     set("unit", "把");
     set("value", 1000);
     set("material", "iron");
     set("long", "一把炳铁制成的算盘,上面的算盘子用白银打就。\n");
     set("wield_msg", "$N拿起一把$n,摇晃了几下。\n");
     set("unwield_msg", "$N放下手中的$n。\n");
   }
   init_hammer(15);
   setup();
}
