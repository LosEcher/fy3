
#include <weapon.h>

inherit SWORD;

void create()
{
   set_name("���Ҹִ�", ({ "gang ci"}) );
   set_weight(1000);
   if( clonep() )
     set_default_object(__FILE__);
   else {
     set("unit", "��");
     set("value", 700);
     set("material", "steel");
     set("long", "�ô��ִ������,��������,�����и�,�Ǽ�Ϭ���ı�����\n");
     set("wield_msg", "$N�������е�$n,�γ�һ���������Ĺ⻷��\n");
     set("unequip_msg", "$N���е�$nת�˼�ת,�����ˡ�\n");
   }
   init_sword(16);
   setup();
}
