inherit ITEM;
void create()
{
  set_name("��ѻ��ë", ({"plume", "yumao"}));
  set_weight(20);
  if( clonep() )
    set_default_object(__FILE__);
  else
  {
    set("long", "һ����ѻ����ë,�������ɢ���͹⡣\n");
    set("unit", "��");
    set("value", 90);
  }
}


