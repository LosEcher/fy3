// abandon.c
#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object ob;
	int many;

	if(me->is_fighting() || me->is_busy())
		return notify_fail("����æ���أ�û��ʹ����������\n");
//add ld busy lxh 0-2-13 4:20		
//         if ((time()-me->query("last_ld"))<90)
//                return notify_fail("��Ϣһ����������������!\n");
	if( me->is_ghost())
		return notify_fail("�����ò��˵�����\n");
	if( environment(me)->query("no_fight"))
		return notify_fail("�����ˮ���ã��޷�ʩչ��������\n");
	if((int)me->query_skill("daoxuexinde",1)<100)
		return notify_fail("��ĵ�ѧ�ĵ²���������ʹ����������\n");
	if(! arg)	return notify_fail("��Ҫʹ�ö��ٵ��н���������\n");
	if(sscanf(arg,"%d",many)!=1)
			return notify_fail("��Ҫʹ�ö��ٵ��н���������\n");
	if(many<50)	return notify_fail("ʩչ����������Ҫ50����С�\n");

	if((int)me->query("atman")<many)
		return notify_fail("��ĵ��в������޷�ʩչ��������\n");
	message_vision(HIY"$N���������дʣ�ͻȻ���������һָ��\n"NOR,me);
	me->add("atman",-many);
	if(random((int)me->query_spi())>10)	{
		//add bust time lxh 0-2-13 4:19
//                 me->set("last_ld",time());
		ob=new("/obj/medicine/jiuhuandan");
		ob->create(many);
		message_vision(HIY"ֻ��$N�����Ϸ��׹�һ��������һ��"
		+ob->query("name")+HIY"��\n"NOR,me);
		if(! ob->move(me))	{
			destruct(ob);
			return notify_fail(HIY"��ϧ�������޷�װ����ŵ�ҩ��\n"NOR);
		}
		write(HIY"��һ���֣������"+ob->query("name")+HIY"���뻳�С�\n"NOR);
		return 1;
	}
	else	return notify_fail(HIY"���Ȼ�е�����һ����ڣ�ʲôҲû���ɡ�\n"NOR);
}

int help()
{
	write(@TEXT

ָ���ʽ��ld <���е���>
��ѧ�ĵ�ѧϰ��һ�ټ���������ѧ�ô��������
���Ƶĵ�ҩҩ��������ʹ�õĵ����й�ϵ��
��������ÿ�ζ����Գɹ����õ�ҩ�����������
����һ����ϵ��

TEXT
	);
	return 1;
}
