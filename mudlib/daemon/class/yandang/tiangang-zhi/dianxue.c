#include <ansi.h>
inherit SSERVER;
int perform(object me, object target)
{
int  me_dodge,ob_dodge;
int dx;
        string msg;
        string xuewei,dodskill ;
        string* name = ({"����ͻѨ��","����ȪѨ��","���н�Ѩ��","���㸮Ѩ��","������Ѩ��","���츮Ѩ��","������Ѩ��","���и�Ѩ��","������Ѩ��","������Ѩ��","����ԨѨ��","������Ѩ��","������Ѩ��", "���羮Ѩ��","���ٻ�Ѩ��","����ȱѨ��","������Ѩ��","��ƫ��Ѩ","������Ѩ��","�����Ѩ��","���ٺ�Ѩ��","���ٸ�Ѩ��","��ͨ��Ѩ��"});
        xuewei = name[random(sizeof(name))];
 

    if( !target
        ||      !target->is_character()
        ||      target->is_corpse()
        ||      target==me)
         return notify_fail("�����˭ʩչ����\n");

        me_dodge = me->query_skill("dodge",1);
        ob_dodge = target->query_skill("dodge",1);
        dx= me->query_skill("fy_finger",1);

        if( (int)me->query("force") < 500 )
 
                return notify_fail("�������������û�а취�����괩ʯ����\n");

        if((int) me->query_skill("tiangang-zhi",1) <= 150)
        return notify_fail("��ġ����ָָ�����������������ܡ����괩ʯ����\n");
        if((int)me->query_skill("yuxuan-guizhen") < 100 )
                return notify_fail("��ġ��������桹��򲻹���\n");
        if((int)me->query("force") < (int)target->query("force")/3 ) 
        return notify_fail("������ָ�ᵯ��һ���������ھ���ָ��������Է���"+xuewei+"ȴ����ţ�뺣û���κη�Ӧ��\n");
        if(random(dx+me_dodge)<ob_dodge) {
             message_vision(
                BLU "����ʳָ΢����һ���������ھ���ָ����,�����$n�����ˡ�\n" NOR, me,target);
                target->kill_ob(me);
             return 1;
        }
        if(target->is_busy())
                return notify_fail(target->name()+"�Ѿ�����ѽ!һ�����ð�\n");

        message_vision( GRN "$N����$nңң���һָ,�ھ��ƿն���,���ǡ����괩ʯ��\n"NOR,me,target);
        msg = GRN "$N��ָ΢���ᵯһ�ɻ��������ھ�����$n��"+xuewei ;
        msg +=  "\n$n��ʱֻ����ͷ��ѣ�Σ�ȫ����ľ��Ҳ�ж�����.\n" NOR;
        message_vision(msg, me, target);
        target->start_busy((int)me->query("force")/500);
        me->add("force",-300);
        return 1;
}

