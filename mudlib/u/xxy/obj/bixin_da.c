// ������ by ksusan 10/02/97 9:00
#include <ansi.h>

inherit ITEM;

void create()
{
        set_name(GRN"������"NOR, ({ "bixin wan","wan" }) );
        set("long",GRN
		"һ�����̵ĵ�ҩ����˵�н⺮������Ч������\n"NOR);
        set("no_sell", 1);
        set("unit", "��");
        set("weight", 20);
        set("value", 5000);
}

void init()
{
        add_action("do_eat", "eat");
        add_action("do_eat", "tun");
        add_action("do_eat", "yan");
}

int do_eat(string arg)
{
        object ob;

        if( !id(arg) ) return notify_fail("��Ҫ��ʲ�᣿\n");

        ob=this_player();
		message_vision("$N�ó�һ������ɫ�ĵ�ҩ�� ... æ������������ȥ .... ��\n", ob);
		ob->apply_condition("xy_poison",0);
        destruct(this_object());
        return 1;
}
