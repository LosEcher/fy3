
#include <ansi.h>

inherit ITEM;

void setup()
{}

void init()
{
        add_action("do_eat", "eat");
}

void create()
{
        set_name("�ߵ�", ({"she dan", "dan"}));
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����һ�������ߵ���������������\n");
                set("value", 500000);
        }
        setup();
}

int do_eat(string arg)
{
        int force_limit, neili_limit, force_skill, add_skill, improve;

        object me = this_player();

        force_limit = me->query_skill("force")*10;
        neili_limit = me->query("max_neili");
        force_skill = me->query_skill("force", 1);
        
        if (!id(arg))
        return notify_fail("��Ҫ��ʲô��\n");



        else if ( neili_limit <= force_limit  )
        {
/*              improve = force_limit - neili_limit;

                if ( improve < 100 ) { 
                        add_skill = force_skill + (100 - improve)/5 + 1;
                        me->set_skill("force", add_skill );
                }
*/      
                me->add("max_force", 100);
               me->add("force", 100);

                message_vision(HIY "$N����һ���ߵ�����Ȼ��ֻ��һ�������ޱȵ������ӵ���ֱ�����...\n" NOR, this_player());
                me->apply_condition("shedan_drug", 1000);
        }
        me->start_busy(100);
//      me->unconcious();
        destruct(this_object());
        return 1;
}

