//jiuyin-baiguzhao perform ��������

#include <ansi.h>
#include <skill.h>
#include <weapon.h>
#include <combat.h>

inherit SSERVER;

void remove_effect(object me, int aamount, int damount);

int perform(object me, object target)
{
        object weapon;  
        string msg;
        int d_count, count, kee, maxkee, skill;

        if( (int)me->query_temp("shengyan") ) 
                return notify_fail(HIG"���Ѿ����˹����ˡ�\n");

        if( !me->is_fighting() )
        return notify_fail("���������̡�ֻ����ս����ʹ�á�\n");

    if( (int)me->query("max_force") < 700 )
                return notify_fail("���������Ϊ�������ߣ�\n");

        if( (int)me->query_skill("jiuyin-shengong", 1) < 60)
                return notify_fail("��ľ����񹦵���Ϊ����������ʹ�á��������̡�! \n");

//      if( (int)me->query_skill("jiuyin-baiguzhao") < 60 )
//              return notify_fail("��ľ����׹�צ�������ң��޷�ʹ�á��������̡���\n");

        if( me->query_skill_mapped("unarmed") != "jiuyin-baiguzhao") 
                return notify_fail("��û�м��������׹�צ���޷�ʹ�á��������̡���\n");
        
        
    msg = RED "$Nʹ�������澭�ľ������������̡���������Ȼ���ӣ�\n" NOR;
        
        kee = me->query("kee");
        maxkee = me->query("max_kee");
        skill = (int) (me->query_skill("jiuyin-baiguzhao",1) / 3);
        count = me->query_str();
        d_count = (int)me->query_int() / 2;

        if(kee > (maxkee * 0.4))
        {   
        message_vision(msg, me, target);
                
                me->add_temp("str", count * 2); 
                me->add_temp("int", 0-d_count);
                me->set_temp("shengyan", 1);
                me->start_call_out( (: call_other, __FILE__, "remove_effect", me, count*2, d_count :), skill);

                me->add("force", -150);
        return 1;
        }
        else{
                msg = HIR "$Nƴ����������ʹ���˾����澭���ռ�����, ȫ�����һ����, �������ƴ����������!\n" NOR;
                message_vision(msg, me, target);
                me->add_temp("str", count * 9);
                me->set_temp("shengyan", 1);

                me->start_call_out( (: call_other, __FILE__, "remove_effect", me, count*9, 0 :), 2);
                COMBAT_D->do_attack(me, target, me->query_temp("weapon"), 0);
                me->set("force",0);
                me->add("max_force",-10);

 //             msg = HIR "$N�þ������һ������, ���һ����Ѫ, һͷ�Ե��ڵ�!\n" NOR;
                message_vision(msg, me, target);

                me->set("gin",0);
                me->set("kee",0);

//              me->unconcious();


                return 1;
        }
}

void remove_effect(object me, int aamount, int damount)
{
        
 
 if ( (int)me->query_temp("shengyan") )
                me->add_temp("str", -aamount);
        {
                me->add_temp("int", damount);
                me->delete_temp("shengyan");
                tell_object(me, HIY "��ġ��������̡�������ϣ��������ջص��\n" NOR);
                me->start_busy(random(4));


        }
}
