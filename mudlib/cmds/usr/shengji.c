#include <ansi.h>

inherit F_CLEAN_UP;

mapping valid_types = ([
        "unarmed":      "ȭ��",
        "sword":        "����",
        "blade":        "����",
        "club":         "����",
        "staff":        "�ȷ�",
        "throwing":     "����",
        "force":        "�ڹ�",
        "parry":        "�м�",
        "dodge":        "�Ṧ",
        "hammer":       "����",
        "axe":          "����",
        "whip":         "�޷�",
]);

int main(object me, string arg)
{
        string skill,target;
        object master;
        int money,level,point,my_skill,master_skill;
        int betrayer;
        mapping my_skl,you_skl,lrn;
        if(! arg)       return notify_fail("�����ʽ��shengji <�书��> from <ʦ����>\n");
        if(sscanf(arg,"%s from %s",skill,target)!=2)
                return notify_fail("�����ʽ��shengji <�书��> from <ʦ����>\n");
        master=present(target,environment(me));
        if(! objectp(master))
                return notify_fail("���û����ô���ˡ�\n");
        if(! master->is_character())
                return notify_fail("��������������Ǹ����\n");
        if(! living(master))
                return notify_fail("����Ȱ���Ū����˵��\n");
        if(master==me)
                return notify_fail("�Լ����Լ���\n");
        if ( !me->is_apprentice_of(master))      {
                notify_fail("ֻ�����ʦ����ͬ����һЩ�ֵܲ�����������书��\n");
                if( ! master->recognize_apprentice(me)) return 0;
        }
        my_skl=me->query_skills();
        if(! mapp(my_skl))      my_skl=([]);
        if(undefinedp(my_skl[skill]))
                return notify_fail("�㲢û��ѧ�������书��\n");
        if( SKILL_D(skill)->type()!="martial")
                return notify_fail("��ֻ�������书��\n");
        you_skl=master->query_skills();
        if(! mapp(you_skl))     you_skl=([]);
        if(! you_skl[skill])    {
                return notify_fail("�Է��ƺ����������书���޷�����������\n");
        }
        if(my_skl[skill]>=you_skl[skill])       {
                return notify_fail("����书�ȼ��ѳ������ˣ�\n");
        }
        if(! (point=SKILL_D(skill)->hard_point()))  point=1;
        my_skill = me->query_skill(skill,1);
        if( betrayer = me->query("betrayer") )
              {if( my_skill >= (master_skill - betrayer * 20 ))
 {       message_vision("$N��ɫ���ƺ���$n����ʮ�����Σ�Ҳ��������$p��ǰ����ʦ�ŵ����� ...��\n",master,me);
command("say �� .... ʦ���ܽ���Ķ����ˣ����������Լ����ɡ�");
return notify_fail(master->name() + "��Ը���������ܡ�\n");
}
}
// return notify_fail("���ʦ���뵽����ǰ��������ʦ�ţ���Ը����㹦���ˡ���\n");
        lrn=me->query_learned();
        if(! lrn)       lrn=([]);
        if(lrn[skill]<(my_skl[skill]+1)*(my_skl[skill]+1)*point*point)
                return notify_fail("�㻹û���ʸ����������书��\n");

        if(my_skl[skill]*my_skl[skill]*my_skl[skill]/10 >
        (int)me->query("combat_exp"))   
                return notify_fail("���ʵս���鲻�����޷����������书��\n");

        if( valid_types[skill]) money=my_skl[skill]*my_skl[skill]/2;
        else                    money=my_skl[skill]*my_skl[skill];
        if(money==0)    money=1;
        money*=2;
        if(! me->pay_money(money))      {
                message_vision(HIY"$N̾�˿�������$n���ϵ�Ǯ���������ٵ�"+
                MONEY_D->money_str(money)+"����\n"NOR,master,me);
                return 1;
        }
        message_vision("$N����$n"+MONEY_D->money_str(money)+"��\n",me,master);
        me->improve_skill(skill,1);
        return 1;
}
int help(object me)
{
        write(@HELP
ָ���ʽ��shengji <�书����> from <ʦ����ͬ�����>

����ָ�������������Լ����书�ȼ���
ֻ��ͨ��ս�����������������ܻ�������书�ȼ��Ļ��ᡣ��
����书��Ϊ�ﵽһ��������ʹ��skills����ᷢ�ִ����书��
���ɫ��˵�����书�Ѵﵽ������������
���书�ȼ�С��30��ʱ���������ս���л��Ƿ���(fenpei)ָ����
����书������������30��֮������뻨һ����Ǯ����ʦ������
ͬ�����ֵİ����£����书�Ż���һ�����׻�˵�ĺã����ĸ���
�����㲻����������֮ʱ�������˶�׬ЩǮ��
 
HELP
        );
        return 1;
}
