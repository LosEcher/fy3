// jinchuang.c ��ҩ

#include <ansi.h>
inherit ITEM;



void create()
{
	set_name("������",({"zhengqi wan","wan"}));
		set("unit","��");
		set("long","����ҩ�������ָ�����\n");
		set("value",1000);
	setup();
}
void init()
{
    add_action("do_eat", "eat");
}
int do_eat(string arg)
{
	object me=this_player();
	if(!living(me))	return 0;
	if (!id(arg))
		return notify_fail("��Ҫ��ʲôҩ��\n");
if ((int)time()-me->query("oldsix_flag/eat_yao")<60)
return notify_fail("��ճԹ���ҩ,�����������ܲ���.\n");
	me->set("kee",(int)me->query("max_kee"));
	me->set("eff_kee",(int)me->query("max_kee"));
me->set("oldsix_flag/eat_yao",time());
	message_vision("$N����һ�������裬��������ɫ����\n",me);
	destruct(this_object());
	return 1;
}

