// halt.c
// By Xiang@XKX (12/17/95)

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	if((int)me->query_temp("pending/exercise") != 0) {
		message_vision("$N���������е�����ǿ��ѹ�ص��վ��������\n", me);
                me->interrupt_me();
		return 1;
        }
	if( me->is_fighting())	{
		if(wizardp(me))	{
        me->remove_all_killer();
        message_vision("$N����ʦ������ֹͣ���ⳡ�򶷡�\n", me);
        write("Ok.\n");
        return 1;
   }
	else if(me->is_busy())
		return notify_fail("���������ֲ��ţ��޷�ֹͣս����\n");
	else	{
		me->remove_all_enemy();
                message_vision("$N�������һԾ������սȦ�����ˡ�\n", me); 
		return 1;
	}
	}
	if(!me->is_busy())
		return notify_fail("�����ڲ�æ��\n");
//	else if ((int)me->query_temp("pending/respirate") != 0)
//		me->interrupt_me();
//	me->interrupt_me();
	else return notify_fail("����æ��Ӧ��ĳ�����飬�޷�ͣ������\n");
}
	
int help(object me)
{
   write(@HELP
ָ���ʽ: halt

����ֹͣ����(��)�йص�ս����
HELP
   );
   return 1;
}
    
