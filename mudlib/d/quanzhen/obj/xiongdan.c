// xiongdan.c �ܵ�


inherit ITEM;
#include <ansi.h>

void init()
{
        add_action("do_eat", "eat");
}

void create()
{
	set_name(HIR"�ܵ�"NOR, ({"xiongdan"}));
        set_weight(1000);
        set("unit", "��");
	set("long", "����һ���ʺ���ܵ�������������ҩ��\n");
        setup();
}

int do_eat(string arg)
{
	object me=this_player();

	if( !living(me))	return 0;
	if (!(arg))  return notify_fail("��Ҫ��ʲô��\n");
	if(arg=="xiongdan") 
	{
	if((int)me->query("max_force")<=500)	{
		write("�����һ���ܵ���ֻ������ů��������������\n");
		me->add("max_force",10);
		me->add("force",10);
	}
	else	write("�����һ���ܵ���������ûʲô�ô���\n");
                destruct(this_object());
                me->unconcious();
	}
	return 1;
}
