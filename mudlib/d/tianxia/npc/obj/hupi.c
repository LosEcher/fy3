inherit ITEM;
void create()
{
  set_name("��Ƥ", ({"hu pi"}));
  set_weight(1000);
  if( clonep() )
    set_default_object(__FILE__);
  else
  {
    set("long", "һ�������Ļ�Ƥ,�����ư��������ơ�\n");
    set("unit", "��");
    set("value", 1000);
  }
}


