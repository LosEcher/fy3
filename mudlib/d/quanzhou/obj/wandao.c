#include <weapon.h>
inherit BLADE;
void create()
{
  set_name("�������䵶",({"wan dao", "blade" }) );
  set_weight(2000);
  if( clonep() )
     set_default_object(__FILE__);
  else {
    set("long", "һ�������ս����\n");
    set("unit", "��");
    set("value", 400);
    set("material","metal");
  }
  init_blade(25);
  setup();
}

