// jiaozi.c ����

#include <ansi.h>

inherit ITEM;

void init()
{
        add_action("do_eat", "eat");
}
void create()
{
        set_name("����", ({"jiaozi", "zi"}));
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "������Ѫ������ʦ���ر�Ϊ��Ҹ����Ľ��ӣ�ϣ�����������֣�\n");
                set("value", 0);
                set("no_get", 1);
                set("no_put", 1);
                set("no_drop", 1);
                set("no_give", 1 );
        setup();
        }
}
int do_eat(string arg)
{
        int force_limit, neili_limit, force_skill, add_skill, improve;
        object me = this_player();

        force_limit = me->query_skill("force")*10;
        neili_limit = me->query("max_force");
        force_skill = me->query_skill("force", 1);
        
        if (! id(arg) || ! living(me))
                return notify_fail("��Ҫ��ʲô��\n");
        else if ( neili_limit <= force_limit  )
        {
                me->add("max_foece", 100);
                me->add("int",5);
                me->add("combat_exp",5000);
                message_vision(HIY "$N����һ�����ӣ���Ȼ��ֻ��...\n" NOR, this_player());
        }
        destruct(this_object());
        return 1;
}
