#include <ansi.h>

inherit ITEM;

void create()
{
   set_name("������", ({"yangjing dan", "dan"}));
      set("unit", "��");
	set("value",1000);
	set("long","һ�ֿ��Իָ����ĵ�ҩ��\n");
   setup();
}

int init()
{
   add_action("do_eat", "eat");
}

int do_eat(string arg)
{
   object me = this_player();
      if( living(this_player()) ==0 ) return 0;
   if(!id(arg))
       return notify_fail("��Ҫ��ʲô��\n");
if ((int)time()-me->query("oldsix_flag/eat_yao")<60)
return notify_fail("��ճԹ���ҩ,�����������ܲ���.\n");
	me->set("gin",(int)me->query("max_gin"));
	me->set("eff_gin",(int)me->query("max_gin"));
me->set("oldsix_flag/eat_yao",time());
	message_vision("$N������һ���������������������ָ��ˡ�\n",me);
	destruct(this_object());
	return 1;

}
