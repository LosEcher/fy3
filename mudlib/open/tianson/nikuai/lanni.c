// created by tianson 

inherit ITEM;

void create()
{
  set_name("����", ({"lan ni", "ni"}));
  set_weight(1500);
  if (clonep())
    set_default_object(__FILE__);
  else
  {
    set("unit", "��");
    set("long", "һ��û�˻�ע������ࡣ\n");
    set("material", "stone");
  }
  setup();
}
