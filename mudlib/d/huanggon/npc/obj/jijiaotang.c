inherit ITEM;
inherit F_LIQUID;

void create()
{
   set_name("�ɻ�����", ({"tangpen", "pen"}));
   set_weight(1700);
   if (clonep())
     set_default_object(__FILE__);
   else {
     set("long", "һ���ɻ���״�Ĵ�����.\n");
     set("unit", "��");
     set("value", 500);
     set("max_liquid", 20);
   }
   set("liquid", ([
     "type": "water",
     "name": "��Ģ������",
     "remaining": 10,
     "drunk_supply": 10,
   ]));
}
