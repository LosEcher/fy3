#include <ansi.h>
inherit ITEM;
void create()
{
  set_name(HIG"����"NOR, ({"scale","long lin"}));
  set_weight(800);
  if( clonep() )
    set_default_object(__FILE__);
  else
  {
    set("long", "һƬ��������Ƭ,��Ӳ�ޱȡ�\n");
    set("unit", "Ƭ");
    set("value", 1000);
  }
}


