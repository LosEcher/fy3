#include <ansi.h>
inherit ITEM;
void create()
{
  set_name(RED"�챦ʯ"NOR, ({"baoshi","red sparkler","hong baoshi"}));
  set_weight(200);
  if( clonep() )
    set_default_object(__FILE__);
  else
  {
    set("long", "һ��ѩ��ı�ʯ,ůů�������Ķ���\n");
    set("unit", "��");
    set("value", 1000);
  }
}


