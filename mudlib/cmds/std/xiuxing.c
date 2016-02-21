// dazuo.c
//Write by Huang (10/27/96)

#include <skill.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        int gin_cost, atman_gain;

        seteuid(getuid());
        
        if( me->is_fighting() )
                return notify_fail("ս���в������У����߻���ħ��\n");
        if( me->query("food")<70 )
                return notify_fail("�ո��������У����߻���ħ��\n");

	if(!(int)me->query_skill("daoxuexinde",1))
		return notify_fail("�����ѧ�ᡸ��ѧ�ĵá�����ѧ�ʡ�\n");

        if( !arg
        ||      !sscanf(arg, "%d", gin_cost) )
                return notify_fail("��Ҫ�����پ����У�\n");

        if( gin_cost < 10 ) return notify_fail("������Ҫ�� 10 �㡸�����������С�\n");

        if( (int)me->query("gin") < gin_cost )
                return 
notify_fail("�����ڵľ�̫���ˣ��޷����С�\n");

        if( (int)me->query("sen") * 100 / (int)me->query("max_sen") < 70 )
                return notify_fail("�����ھ���״��̫���ˣ��޷�����רһ��\n");

        if( (int)me->query("kee") * 100 / (int)me->query("max_kee") < 70 )
                return notify_fail("�����������������޷����У�\n");

        write("��������˫����£�����е��С�\n");

        me->receive_damage("gin", gin_cost);

        // This function ranged from 1 to 15 when gin_cost = 30
        atman_gain = gin_cost * ((int)me->query_skill("daoxuexinde", 1)
                + (int)me->query("spi") ) / 300;

        if( atman_gain < 1 ) {
                write("���ǵ����й���ϣ�ֻ����ͷ���ۻ���\n");
                return 1;
        }

        me->add("atman", atman_gain );

        if( (int)me->query("atman") > (int)me->query("max_atman") * 2) {
                if( (int)me->query("max_atman") >= 
                        ((int)me->query_skill("daoxuexinde", 1) + 
me->query_skill("daoxuexinde")/5) * 10 ) {
                        
write("������ĵ�ѧ�ĵò��������в�û�����ӣ�\n");
                } else {
                        write("��ĵ�����ǿ�ˣ�\n");
                        me->add("max_atman", 1);
                }
                me->set("atman", me->query("max_atman"));
        }       
        
        return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : xiuxing [<�ķѡ���������>]

��ָ����Խ���ľ�ת��Ϊ���У���������Լ��ľ�����

HELP
        );
        return 1;
}
 
