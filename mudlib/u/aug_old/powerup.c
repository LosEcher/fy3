// powerup.c  ս��
// 97.9.15 by Aug

//inherit SSERVER;

#include <ansi.h>

int exert(object me, object target)
{
	int i;

	if ((int)me->query_skill("suiyu-force",1)<40)
		return notify_fail("��������񹦹����������޷�ʹ��ս��\n");

	i=me->query("max_force")/2;
	if(i<300) i=300;
	if ((int)me->query("force")<i)
		return notify_fail("�����������������ʹ��ս��\n");

	me->set("force",me->query("force")-i);

	me->set("max_force",me->query("max_force")*2);
	me->set("force",me->query("force")*2);
	me->set("max_kee",me->query("max_kee")*2);
	me->set("eff_kee",me->query("eff_kee")*2);
	me->set("kee",me->query("kee")*2);
	me->set("str",me->query("str")+10);
	me->set("con",me->query("con")+10);

	message_vision(MAG"$N"+MAG+
"˫��΢�ᣬһ��һ����Ŀ�ⶸȻ��ʢ�����ϵ��۷��߸�����
һ������Χ��ȫ���·���ս���塣\n"NOR,me);	

	call_out("do_warn",30,me);

	return 1;
}
	
void do_warn(object me)
{
	tell_object(me,HIY"���������Ĺ��죬ȫ����һ�����ѵĸо���\n"NOR);
	
	call_out("do_endpowerup",30,me);
}

void do_endpowerup(object me)
{
	int i;
	object * all;

	me->set("max_force",me->query("max_force")/2);
	if(me->query("force")>me->query("max_force"))
		me->set("force",me->query("max_force"));

	me->set("max_kee",me->query("max_kee")/2);
	if(me->query("eff_kee")>me->query("max_kee"))
		me->set("eff_kee",me->query("max_kee"));
	if(me->query("kee")>me->query("max_kee"))
		me->set("kee",me->query("max_kee"));

	me->set("str",me->query("str")-10);
	me->set("con",me->query("con")-10);	

	all = all_inventory(environment(me)); 
	for (i=0; i<sizeof(all); i++)
	{
		if(all[i]==me)
			tell_object(me,HIY"����Ҳ֧�ֲ�ס�����ϵ��ǹ��ھ�һ������ʧ����Ӱ���١�\n"NOR);
		else
			tell_object(all[i],HIY+me->name()+HIY+"��Ҳ֧�ֲ�ס�����ϵ��ǹ��ھ�һ������ʧ����Ӱ���٣�������һ��������ȥ��\n"NOR);	
	} 
}

