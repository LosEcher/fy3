inherit ITEM;
inherit F_LIQUID;

void create()
{
   set_name("��ɰ��", ({"zisha hu", "hu"}));
   set_weight(800);
   if (clonep())
     set_default_object(__FILE__);
   else {
     set("unit", "��");
     set("value", 300);
     set("max_liquid", 15);
   }
   set("liquid", ([
     "type": "water",
     "name": "�ն���",
     "remaining": 15,
     "drunk_supply": 10,
   ]));
}
