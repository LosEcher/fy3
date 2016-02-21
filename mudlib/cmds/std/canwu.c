// dazuo.c
//Write by Huang (10/27/96)

#include <skill.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        int sen_cost, mana_gain;

        seteuid(getuid());
        
        if( me->is_fighting() )
                return notify_fail("ս���в��ܲ��򣬻��߻���ħ��\n");
        if( me->query("food")<70 )
                return notify_fail("�ո����ܲ��򣬻��߻���ħ��\n");

	if(!(int)me->query_skill("foxuexinde",1))
		return notify_fail("�����ѧ�ᡸ��ѧ�ĵá�����ѧ�ʡ�\n");

        if( !arg
        ||      !sscanf(arg, "%d", sen_cost) )
                return notify_fail("��Ҫ�����������\n");

        if( sen_cost < 10 ) return notify_fail("������Ҫ�� 10 �㡸�񡹲��ܽ��в���\n");

        if( (int)me->query("sen") < sen_cost )
                return 
notify_fail("�����ڵ���̫���ˣ��޷����в���\n");

        if( (int)me->query("gin") * 100 / (int)me->query("max_gin") < 70 )
                return notify_fail("�����ھ����������޷�����\n");

        if( (int)me->query("kee") * 100 / (int)me->query("max_kee") < 70 )
                return notify_fail("�����������������޷�����\n");

        write("��������˫�ֺ�ʲ���붨����\n");

        me->receive_damage("sen", sen_cost);

        // This function ranged from 1 to 15 when sen_cost = 30
        mana_gain = sen_cost * ((int)me->query_skill("foxuexinde", 1)
                + (int)me->query("kar") ) / 300;

        if( mana_gain < 1 ) {
                write("���ǵ����й���ϣ�ֻ��������һƬ�հס�\n");
                return 1;
        }

        me->add("mana", mana_gain );

        if( (int)me->query("mana") > (int)me->query("max_mana") * 2) {
                if( (int)me->query("max_mana") >= 
                        ((int)me->query_skill("foxuexinde", 1) + 
me->query_skill("foxuexinde")/5) * 10 ) {
                        
write("������ķ�ѧ�ĵò������𷨲�û�����ӣ�\n");
                } else {
                        write("��ķ���ǿ�ˣ�\n");
                        me->add("max_mana", 1);
                }
                me->set("mana", me->query("max_mana"));
        }       
        
        return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : canwu [<�ķѡ��񡹵���>]

��ָ����Խ������ת��Ϊ�𷨣���������Լ��ľ���

HELP
        );
        return 1;
}
 
