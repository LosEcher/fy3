// xuejie.c Ѫ��


inherit ITEM;
#include <ansi.h>

void init()
{
        add_action("do_eat", "eat");
}

void create()
{
	set_name(RED"Ѫ��"NOR, ({"xuejie"}));
        set_weight(800);
        set("unit", "��");
	set("long", "����һ���ʺ��Ѫ�ߣ�����������ҩ��\n");
        setup();
}

int do_eat(string arg)
{
	if ( !living(this_player()))	return 0;
	if (!(arg))  return notify_fail("��Ҫ��ʲô��\n");
	if(arg=="xuejie") 
	{
		write("���������ڰ�Ѫ�߳�����ȥ��\n");
		destruct(this_object());
	}
	return 1;
}