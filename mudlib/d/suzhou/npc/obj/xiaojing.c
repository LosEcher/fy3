#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("С����",({"xiaojing dan","dan"}));
	set("unit","��");
	set("value",100);
	set("long","���Իָ��������ĵ�ҩ��\n");
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
	me->receive_curing("gin",10);
	me->receive_heal("gin",10);
me->set("oldsix_flag/eat_yao",time());
	message_vision("$N������һ���������������������ָ��ˡ�\n",me);
	destruct(this_object());
	return 1;

}
