// gao.c ���߸�


inherit ITEM;
#include <ansi.h>

void init()
{
        add_action("do_eat", "eat");
}

void create()
{
	set_name(HIW"���߸�"NOR, ({"guiling gao","gao"}));
        set_weight(3000);
        set("unit", "��");
	set("long", "����һ�����ڹ�׺��������óɵĹ��߸࣬�����������١�\n");
        setup();
}

int do_eat(string arg)
{
	object me=this_player();

	if( !living(me))	return 0;
	if (!(arg))  return notify_fail("��Ҫ��ʲô��\n");
	if(arg=="gao") 
	{
		if ((int)me->query("max_atman")<=200)	{
			write(YEL"�������һ����߸ֻ࣬���þ�����֮��������ֱ�����ڶ�����\n"NOR);
			me->add("max_atman",10);
			me->add("atman",10);
		}
		else {
			write("�������һ����߸࣬���Ǻ���ûʲô�á�\n");		
		}
		destruct(this_object());
		me->unconcious();
	}
	return 1;
}
