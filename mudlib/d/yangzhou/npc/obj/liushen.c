#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("������",({"liushen wan","wan"}));
      set("unit", "��");
	set("value",1000);
	set("long","һ�����ڻָ����ҩ�衣\n");
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
	me->set("sen",(int)me->query("max_sen"));
	me->set("eff_sen",(int)me->query("max_sen"));
me->set("oldsix_flag/eat_yao",time());
	message_vision("$N����һ�������裬��������ɫ����\n",me);
	destruct(this_object());
	return 1;

}
