#include <weapon.h>

inherit BLADE;

void create()
{
   set_name("ţ���⵶", ({"niuer dao", "dao", "blade"}) );
   set_weight(800);
   if( clonep() )
     set_default_object(__FILE__);
   else {
     set("unit", "��");
     set("value", 300);
     set("material", "iron");
     set("long", "����һ���仡�ε�С�⵶��\n");
     set("wield_msg", "$N��ѥͲ�г��һ��$n��৵��������С�\n");
     set("unequip_msg", "$N�����е�$n����ѥͲ��\n");
   }
   init_blade(10);
   setup();
}
