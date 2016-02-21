// yun.c
//Write by Huang (10/27/96)

#include <skill.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        string force;
        int result;
        
        seteuid(getuid());

        if( me->is_busy() )
                return notify_fail("(����һ��������û����ɣ�����ʩ���ڹ���)\n");

        if( !arg ) return notify_fail("��Ҫ���ڹ���ʲ�᣿\n");

        if( stringp(force = me->query_skill_mapped("force")) ) {
                notify_fail("����ѧ���ڹ���û�����ֹ��ܡ�\n");
                if( SKILL_D(force)->exert_function(me, arg) ) {
			if( random((int)me->query_skill("force"))>200)
                                me->improve_skill(force, 1, 1);
                        return 1;
                } else if( SKILL_D("force")->exert_function(me, arg) ) {
			if( random((int)me->query_skill("force",1))>120)
                                me->improve_skill("force", 1, 1);
                        return 1;
                }
                return 0;
        }

        return notify_fail("�������� enable ָ��ѡ����Ҫʹ�õ��ڹ���\n");
}

int help (object me)
{
        write(@HELP
ָ���ʽ��[yun | exert] <��������> [<ʩ�ö���>]

����������һЩ���칦�ܣ������Ҫָ��<��������>��<ʩ�ö���>����п��ޡ�
����ʹ��ĳһ���ڹ������칦��֮ǰ����������� enable ָ����ָ����Ҫʹ��
���ڹ���

��ο� help force �ɵ�֪һЩ�󲿷��ڹ����еĹ��ܣ���������õ��ڹ�����
��û�иù��ܣ���һ�Ի�ο�����˵����֪��

ע�������ı��Լ����ڹ�����ԭ�����������������ֱ��ת����ȥ������
    �� 0 ��ʼ��
 
HELP
        );
        return 1;
}
 
