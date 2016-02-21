// guard.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        string dir;
        object ob, *guards;
        mixed old_target;
	int i;

        if( me->is_busy() )
                return notify_fail("������û�а취����ȥ�������£�\n");

        old_target = me->query_temp("guarding");

        if( !arg || arg=="" ) {
                if( !old_target )
                        return notify_fail("ָ���ʽ��guard <����>|<��Ʒ>|<����>\n");
                if( objectp(old_target) )
                        if( living(old_target) )
                                write("�������ػ���" + old_target->name() + "��\n");
                        else
                                write("��������" + old_target->name() + "һ�ԣ���ֹ�������ߡ�\n");
                else
                        write("������ס " + old_target + " �ķ��򣬲�׼�κ����뿪��\n");
                return 1;
        }

        ob = present(arg, environment(me));

        if( ob ) {
                if( ob==me ) return notify_fail("�����Լ�������˵��Ҳ�������԰ɡ�\n");
                me->set_temp("guarding", ob);
        }
        else if( environment(me)->query("exits/" + arg) ) {
                if( environment(me)->query("no_fight") )
                        return notify_fail("���ﲻ׼ս������Ҳ��׼��ס����ȥ·��\n");
                me->set_temp("guarding", arg);
        }
        else if( arg!= "cancel" )
                return notify_fail("��Ҫ����˭��ʲ�ᣬ�����ĸ�����\n");

        if( objectp(old_target) ) {
                guards = old_target->query_temp("guarded");
                guards -= ({ me });
                old_target->set_temp("guarded", guards);
                if( living(old_target) )
                        tell_object( old_target, me->name() + "���ٱ������ˡ�\n");
        } else if( stringp(dir=old_target) ) {
                guards = environment(me)->query("guarded/" + dir);
                if( arrayp(guards) ) {
                        guards -= ({ me });
                        environment(me)->set("guarded/" + dir, guards);
                }
        }

        if( arg=="cancel" ) {
		  me->delete_temp("guarding");
                write("Ok.\n");
                return 1;
        }

        if( objectp(ob) ) {

//clean not exist objects

		guards=ob->query_temp("guarded");
		if(sizeof(guards))	{
		for(i=0;i<sizeof(guards);i++)
			if(! objectp(guards[i]))	guards[i]=0;
		guards-=({ 0 });
		ob->set_temp("guarded",guards);
		}
                ob->add_temp("guarded", ({ me }) );
                if( living(ob) )
                        message_vision("$N��ʼ����$n��\n", me, ob);
                else
                        message_vision("$Nվ�����ϵ�$nһ���������������ȡ�ߡ�\n", me, ob);
        } else {

//clean not exist objects

		guards=environment(me)->query("guarded/"+arg);
		if(sizeof(guards))	{
		for(i=0;i<sizeof(guards);i++)
			if(! objectp(guards[i]))	guards[i]=0;
		guards-=({0});
		environment(me)->set("guarded/"+arg, guards);
		}

                environment(me)->add("guarded/" + arg, ({ me }));
                message_vision("$N��ʼ��ס�� " + arg + " �ķ������κ���ͨ�С�\n", me);
        }

        return 1;
}

int help(object me)
{
        write(@TEXT
ָ���ʽ��guard [<ĳ��>|<����ĳ��>|<ĳ������>|cancel]

���ָ�����������÷�ʽ���ֱ����᣺

guard <ĳ��>      ����<ĳ��>�����������ܵ�����ʱ�������߻��Զ�����ս��������
                  �ܹ�����˳λ�����ڱ�������ǰ�棬���ֻ�й���˳λǰ�ĸ�Ŀ��
                  �Ż��ܵ����������������������ĸ���  guard �㣬��Ͳ�����
                  ���κι�����

guard <����ĳ��>  ��ס���ڵ��ϵ�ĳ����������ֹ�������ã�ֻҪ�㻹��������䣬
                  ����û��æ�������£����˾��޷��������������

guard <ĳ������>  ��סĳ�����ڷ�ֹ�����˴���������뿪���������������������
                  �ĵ��˻���·��������¡�

guard cancel      ȡ����ǰ�� guard ����
guard             �����κβ�������ʾ��Ŀǰ guard �Ķ���

ע�⣬ͨ������ guard <ĳ��> ���������⣬ֻҪ��һ�ƶ���guard ��״̬�ͻ�����
TEXT
        );
        return 1;
}