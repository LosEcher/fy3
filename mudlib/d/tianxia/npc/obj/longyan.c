#include <ansi.h>
inherit ITEM;
void create()
{
  set_name(HIC"��Һ��"NOR, ({"longyan cao"}));
  set_weight(800);
  if( clonep() )
    set_default_object(__FILE__);
  else
  {
    set("long", "��ɫ�ĸ���,���̵ľ�ƬҶƬ.��������µ�һ��ݡ�\n");
    set("unit", "��");
    set("value", 1000);
  }
}


