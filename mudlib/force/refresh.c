// regenerate.c

//inherit SSERVER;

int exert(object me, object target)
{
	if (target != me) 
	return notify_fail("��ֻ�����ڹ��ָ��Լ�����ʡ�\n");
	if(me->query("sen")==me->query("eff_sen"))
	return notify_fail("��������ʷ���ĺ��ģ�\n");
	if ((int)me->query("force") <20)
		return notify_fail("�������������\n");

	me->add("force",-20);
	me->receive_heal("sen",(int)me->query_skill("force") / 3);
	
	message_vision("$N�������˼���������ɫ�������ö��ˡ�\n", me);

        if( me->is_fighting() ) me->start_busy(1);
	
	return 1;
}

