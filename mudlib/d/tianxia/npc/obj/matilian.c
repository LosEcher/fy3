inherit ITEM;
void create()
{
  set_name("������", ({"mati lian"}));
  set_weight(800);
  if( clonep() )
    set_default_object(__FILE__);
  else
  {
    set("long", "һ����״��ͬ����İ�ɫ������\n");
    set("unit", "��");
    set("value", 1000);
  }
}


