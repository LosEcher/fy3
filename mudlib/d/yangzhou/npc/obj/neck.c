// by snowcat 11/22/1997

#include <armor.h>

inherit NECK;

void create()
{
  set_name("�׽���Ȧ", ({ "baijin xiangquan", "xiangquan", "neck" }));
  set("weight", 200);
  if (clonep())
    set_default_object(__FILE__);
  else {
    set("unit", "��");
    set("value", 5000);
    set("material", "gold");
    set("armor_prop/armor", 5);
  }
  setup();
}
