#include <weapon.h>

inherit HAMMER;

void create()
{
   set_name("������", ({ "tie suanpan", "suanpan", "hammer"}) );
   set_weight(2000);
   if( clonep() )
     set_default_object(__FILE__);
   else {
     set("unit", "��");
     set("value", 1000);
     set("material", "iron");
     set("long", "һ�ѱ����Ƴɵ�����,������������ð�����͡�\n");
     set("wield_msg", "$N����һ��$n,ҡ���˼��¡�\n");
     set("unwield_msg", "$N�������е�$n��\n");
   }
   init_hammer(15);
   setup();
}
