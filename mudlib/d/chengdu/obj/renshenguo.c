/* renshen-guo.c �˲ι�*/

#include <ansi.h>

inherit ITEM;

 void create()
{
        set_name(HIG "�˲ι�" NOR, ({"renshen guo", "guo"}));
        set_weight(20);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("unit", "ö");
                set("long", "һö��ò����Ĺ��ӡ�\n");
                set("value", 100000);
        }

        setup();
}

void init()
{
    if (!wizardp(this_player())) {
        set("no_get"," �ٺ٣����ΰ�! \n");
        set("no_drop","��ô������˲ι�����������! \n");
       }
        add_action("do_eat", "eat");
       
}

int do_eat(string arg)
{
        object me = this_player();

	if( !living(me))	return 0;

        if (!id(arg))
           return notify_fail("��Ҫ��ʲô��\n");
        me->set("kee",(int)this_player()->query("max_kee"));
	me->set("gin",(int)this_player()->query("max_gin"));
	me->set("sen",(int)me->query("max_sen"));
	me->set("force", (int)this_player()->query("max_force"));
        me->set("food", 300);
        me->set("water", 300);
        
        message_vision(HIG
        "$N����һö�˲ι���ֻ���þ���������Ѫ��ӯ����������ԴԴ�������������ٸе������ɿ�! \n"NOR,me);

        destruct(this_object());
}


