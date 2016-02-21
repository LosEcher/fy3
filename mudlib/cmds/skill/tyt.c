// abandon.c
#include <ansi.h>
#include <room.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object ob,env,*inv;
	string str,*dirs;
	mapping exits;
	int i;

	if( (int)me->query("age")<17)
		return notify_fail("�����̫С������������\n");
	if(me->is_fighting() || me->is_busy())
		return notify_fail("����æ���أ�û��ʹ������ͨ��\n");
	if( me->is_ghost())
		return notify_fail("�����ò��˷𷨣�\n");
	if( environment(me)->query("no_fight"))
		return notify_fail("�����ˮ���ã��޷�ʩչ����ͨ��\n");
	if((int)me->query_skill("foxuexinde",1)<40)
		return notify_fail("��ķ�ѧ�ĵ²���������ʹ������ͨ��\n");
	if((int)me->query("mana")<50)
		return notify_fail("��ķ𷨲������޷�ʩչ����ͨ��\n");
	if(! arg)
		return notify_fail("��׼��ʩչ����ͨѰ��˭��\n");
	ob=find_player(arg);
	if(! ob)	ob=find_living(arg);
	if(! ob || !me->visible(ob))
		return notify_fail("û����ô���ˡ�\n");
	if(! env=environment(ob))
		return notify_fail("���޷�������ͨ����"+ob->query("name")+"��\n");
	if( (int)ob->query("age")<17)
		return notify_fail("��о������Է��Ĵ��ڡ�\n");

	me->add("mana",-50);
	message_vision(HIY"$N˫Ŀ΢��˫�ֺ�ʲ��ʩչ������ͨ��������\n"NOR,me);
	if(random((int)me->query_kar())>random((int)ob->query_kar()))	{
	write(HIY"���Ժ���һ����һ������ӡ������......\n"NOR);
        str = sprintf( "%s - \n    %s%s",
		env->query("short"),
		env->query("long"),
		env->query("outdoors")?
		NATURE_D->outdoor_room_description() : "" );
        if( mapp(exits = env->query("exits")) ) {
                dirs = keys(exits);
                for(i=0; i<sizeof(dirs); i++)
                        if( (int)env->query_door(dirs[i], "status") & DOOR_CLOSED )
                                dirs[i] = 0;
                dirs -= ({ 0 });
                if( sizeof(dirs)==0 )
                        str += "    ����û���κ����Եĳ�·��\n";
                else if( sizeof(dirs)==1 )
                str += "    ����Ψһ�ĳ����� " + BOLD + dirs[0] + NOR +"��\n";
		else
                str += sprintf("    �������Եĳ����� " + BOLD + "%s" +
NOR + "�� " + BOLD + "%s" + NOR + "��\n",
                implode(dirs[0..sizeof(dirs)-2], "��"), dirs[sizeof(dirs)-1]);
        }
        inv = all_inventory(env);
        for(i=0; i<sizeof(inv); i++) {
                if( inv[i]==me ) continue;
                if( !me->visible(inv[i]) ) continue;
                if( inv[i]->query("no_shown")  ) continue;
                str += "  " + inv[i]->short() + "\n";
                }

		write("\n"+str+HIY"\n............\n"NOR);
		if( userp(ob) && random((int)ob->query_skill("foxuexinde"))>
		(int)me->query_skill("foxuexinde")/2)	{
		if( random((int)ob->query("mana"))>(int)me->query("mana")/2)
		tell_object(ob,HIY"��ͻȻ�е�ͷƤһ���飬����"+
		me->query("name")+"���ڿ����㣡\n"NOR);
		else
		tell_object(ob,HIY"��ͻȻ�е�ͷƤһ���飬����"+
		"�������ڿ����㣡\n"NOR);
		}

		return 1;
	}
	else	return notify_fail(HIY"�����һ�֣��ƺ��о�����"+ob->query("name")+"�Ĵ��ڣ���ȴ�޷���������\n"NOR);
}

int help()
{
	write(@TEXT

ָ���ʽ��tyt <ĳ��>
��ѧ�ĵ�ѧϰ����ʮ����������ѧ�ô���𷨡�
��������ÿ�ζ��ܳɹ�Ѱ�ҵ�Ŀ�꣬�⻹�����
��Ե��һ���Ĺ�ϵ��

TEXT
	);
	return 1;
}
