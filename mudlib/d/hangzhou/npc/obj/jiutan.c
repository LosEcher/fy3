inherit ITEM;
inherit F_LIQUID;

void create()
{
set_name("�״ɾ�̳",({"jiutan","jiu","tan"}));
  set_weight(8000);
  if (clonep())
    set_default_object(__FILE__);
  else
  {
     set("long", "һ������װ�Ƶ�С��̳��\n");
     set("unit", "��");
     set("value", 2000);
     set("max_liquid", 150);
  }

  set("liquid", ([
        "type": "alcohol",
        "name": "����",
        "remaining": 150,
        "drunk_supply": 12,
      ]));
}

