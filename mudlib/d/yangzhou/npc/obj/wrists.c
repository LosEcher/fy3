// by snowcat 11/22/1997

#include <armor.h>

inherit ITEM;


void create()
{
  set_name("�̽�����", ({ "liujin wanlian", "wanlian", "wrists" }));
  set("weight", 200);
  if (clonep())
    set_default_object(__FILE__);
  else {
    set("unit", "��");
    set("value", 20000);
    set("material", "gold");
//    set("armor_prop/armor", 5);
  }
  setup();
}
