inherit ITEM;

void create()
{
  set_name("�����ϵ�·��", ({ "luyin"}));
  set("unit", "��");
  set_weight(300);
  if( clonep() )
     set_default_object(__FILE__);
  else {
    set("value", 120);
    set("material", "paper");
  }
  setup();
}

