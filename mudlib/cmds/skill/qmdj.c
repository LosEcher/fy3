// abandon.c
#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object ob,env;
	string file;

	if(me->is_fighting() || me->is_busy())
		return notify_fail("����æ���أ�û��ʹ�����Ŷݼ�����\n");
	if( me->is_ghost())
		return notify_fail("�����ò��˵�����\n");
	if( environment(me)->query("no_fight"))
		return notify_fail("�����ˮ���ã��޷�ʩչ���Ŷݼ�����\n");
	if((int)me->query_skill("daoxuexinde",1)<40)
		return notify_fail("��ĵ�ѧ�ĵ²���������ʹ�����Ŷݼ�����\n");
	if((int)me->query("atman")<50)
		return notify_fail("��ĵ��в������޷�ʩչ���Ŷݼ�����\n");
	if(! arg)
		return notify_fail("��׼��ʩչ���Ŷݼ������ε�˭��ߣ�\n");
	ob=find_living(arg);
	if(! ob || !me->visible(ob))
		return notify_fail("û����ô���ˡ�\n");
	if(! env=environment(ob))
		return notify_fail("���޷����ε�"+ob->query("name")+"����ߣ�\n");
//	if( userp(ob))
//		return notify_fail("��о������Է��Ĵ��ڡ�\n");

	if( base_name(env)[0..8]=="/d/death/")
		return notify_fail("����ȥ�ĸ��졣:)\n");
	
if (ob->query("combat_exp")>1500000)
return notify_fail("��о���һ��ǿ���ɷ�����㵲�˻�����\n");
	message_vision(HIY"$N��������������������дʣ�ʩչ�������Ŷݼס�����\n"NOR,me);
	me->add("atman",-50);
	if(random((int)me->query_spi())>random((int)ob->query_spi()))	{
		message_vision(HIY"$N��ӰͻȻ������\n"NOR,me);
		me->move(env);
		message_vision(HIY"$NͻȻ�����������У�\n"NOR,me);
		return 1;
	}
	else	return notify_fail(HIY"���ƺ��о�����"+ob->query("name")+"�Ĵ��ڣ���ȴ�е�����һƬ�հף�\n"NOR);
}

int help()
{
	write(@TEXT

ָ���ʽ��qmdj <ĳ��>
��ѧ�ĵ�ѧϰ����ʮ����������ѧ�ô��������
��������ÿ�ζ��ܳɹ����ε�Ŀ����ߣ��⻹��
���������һ���Ĺ�ϵ��

TEXT
	);
	return 1;
}
