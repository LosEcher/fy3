inherit ITEM;
void create()
{
  set_name("����", ({"shu xu"}));
  set_weight(30);
  if( clonep() )
    set_default_object(__FILE__);
  else
  {
    set("long", "�����������������,ӲӲ����Щ���ˡ�\n");
    set("unit", "��");
    set("value", 100);
  }
}


