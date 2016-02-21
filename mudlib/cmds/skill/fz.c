// abandon.c
#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object ob,env,npc;
	int lv;

	if(me->is_fighting() || me->is_busy())
		return notify_fail("����æ���أ�û��ʹ�÷�������\n");
	if( me->is_ghost())
		return notify_fail("�����ò��˵�����\n");
	if( environment(me)->query("no_fight"))
		return notify_fail("�����ˮ���ã��޷�ʩչ��������\n");
	if((int)me->query_skill("daoxuexinde",1)<60)
		return notify_fail("��ĵ�ѧ�ĵ²���������ʹ�÷�������\n");
	if((int)me->query("atman")<100)
		return notify_fail("��ĵ��в������޷�ʩչ��������\n");
	npc=present("corpse",environment(me));
	if(! objectp(npc))	return notify_fail("���û��ʬ����á�\n");
	if(! arg)
		return notify_fail("��׼����˭ʩչ���䣿\n");
	ob=find_player(arg);
//	if(! ob)	ob=find_living(arg);
	if(! ob || !me->visible(ob))
		return notify_fail("û����ô����ҡ�\n");
	if(! env=environment(ob))
		return notify_fail("���޷���"+ob->query("name")+"ʹ�÷��䣡\n");
//	if( env->query("no_fight"))
//		return notify_fail(ob->query("name")+"Ŀǰ���ڵĵط��������޷�ʩչ��������\n");
//	if(wizardp(ob))	return notify_fail("�㲻�ܶ���ʦʹ�÷�������\n");
	message_vision(HIY"$N���������дʣ�����$nһָ�����䣡\n"NOR,me,npc);
	me->add("atman",-100);
	if(random((int)me->query_spi())>random((int)ob->query_spi()))	{
		message_vision(HIY"���ϵ�$NͻȻ��������������¶ɽ���ص�Ц�ݣ�\n"NOR,npc);
		lv=(int)me->query_skill("daoxuexinde",1);
		npc=npc->animate(me,ob,lv);
		npc->move(env);
		message_vision(HIY"$NͻȻ������$n��ǰ�����ص�Ц��������\n"NOR,npc,ob);
		return 1;
	}
	else	return notify_fail(HIY"��ķ������ƺ���"+ob->query("name")+"û�����ã�\n"NOR);
}

int help()
{
	write(@TEXT

ָ���ʽ��fz <ĳ��>
��ѧ�ĵ�ѧϰ����ʮ����������ѧ�ô��������
����ԶԵ�ǰ�����е�ʬ��ʩչ����������ʬ��
��ɽ�ʬ��������ָ����ĳλ��ң��������
���䣬��ȡ������Ѫ���������ڿ����Ž�ʬ����
���������������
��Ȼ������ÿ�ζ��ܳɹ���ʩչ���������⻹��
���������һ���Ĺ�ϵ��

TEXT
	);
	return 1;
}
