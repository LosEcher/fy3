inherit ITEM;
inherit F_LIQUID;

void create()
{
 set_name("�໨��ˮ��", ({"shuiwan", "bowl"}));
   set_weight(1000);
   if (clonep())
     set_default_object(__FILE__);
   else {
set("long","һ���໨�Ĵ��룬ȱ���ϴ�һ������.\n");
set("unit","ֻ");
set("value",0);
set("max_liquid",15);
   }

   set("liquid", ([
"type":"water",
"name":"��ˮ",
"remaining": 15,
"drunk_apply": 3,
   ]));
}
