inherit ITEM;
void create()
{
  set_name("鼠须", ({"shu xu"}));
  set_weight(30);
  if( clonep() )
    set_default_object(__FILE__);
  else
  {
    set("long", "几根长长的老鼠胡子,硬硬的有些刺人。\n");
    set("unit", "根");
    set("value", 100);
  }
}


