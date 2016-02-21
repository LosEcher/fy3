// get.c
//Update by Huang (10/26/96)

#include <ansi.h>

inherit F_CLEAN_UP;

int do_get(object me, object ob);

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
	string from, item;
	object obj, *inv, env, obj2;
	int i,j, amount;
	object *guards;

	if( !arg ) return notify_fail("��Ҫ����ʲ�ᶫ����\n");
	if( me->is_busy() )
		return notify_fail("����һ��������û����ɣ�\n");

	if( (int)environment(me)->query("hotel") && !wizardp(me))
		return notify_fail("��С��̽ͷ������������һ�ۣ�\n");

	// Check if a container is specified.
	if( sscanf(arg, "%s from %s", arg, from)==2 ) {
		env = present(from, me);
		if(!env) env = present(from, environment(me));
		if(!env) return notify_fail("���Ҳ��� " + from + " ����������\n");
		if(living(env) && (wiz_level(me) <= wiz_level(env)))
			return notify_fail("�����ʦ�ȼ�����ȶԷ��ߣ���������\n");
	} else env = environment(me);

	guards=env->query_temp("guarded");
	if(sizeof(guards))	{
	for(i=0;i<sizeof(guards);i++)	{
		if(! objectp(guards[i]))	guards[i]=0;
		else if( environment(env)!=environment(guards[i]))	guards[i]=0;
		else if( guards[i]==me)	guards[i]=0;
	}
	guards-=({ 0 });
	}
	if(sizeof(guards))	
		return notify_fail(env->query("name")+"����"+
		guards[0]->query("name")+"�����ţ����޷�������ȡ������\n");

//check Ŀ������Ƿ�Ҫ��,add by xxy.
if (env->query("vacuous/status")) return notify_fail(env->name()+"��û����!\n");

	// Check if a certain amount is specified.
	if(sscanf(arg, "%d %s", amount, item)==2) {
		if( !objectp(obj = present(item, env)) )
			return notify_fail("����û������������\n");

	guards=obj->query_temp("guarded");
	if(sizeof(guards))	{
	for(i=0;i<sizeof(guards);i++)	{
		if(! objectp(guards[i]))	guards[i]=0;
		else if( environment(obj)!=environment(guards[i]))	guards[i]=0;
		else if( guards[i]==me)	guards[i]=0;
	}
	guards-=({ 0 });
	}
	if(sizeof(guards))
		return notify_fail(obj->query("name")+"����"+
		guards[0]->query("name")+"�����ţ�\n");


		if( !obj->query_amount() )
			return notify_fail( obj->name() + "���ܱ��ֿ����ߡ�\n");
		if( amount < 1 )
			return notify_fail("�����ĸ���������һ����\n");
		if( amount > obj->query_amount() )
			return notify_fail("����û��������" + obj->name() + "��\n");
		else if( amount == (int)obj->query_amount() ) {
			return do_get(me, obj);
		} else {
/*			obj->set_amount( (int)obj->query_amount() - amount );*/
			obj2 = new(base_name(obj));
			obj2->move(env);
			obj2->set_amount( (int)obj->query_amount() - amount);
                        obj->set_amount( amount );
			// Counting precise amount costs more time.
			if( me->is_fighting() ) me->start_busy(3);
			return do_get(me, obj);
		}
	}

	// Check if we are makeing a quick get.
	if(arg=="all") {
		if( me->is_fighting() )	return notify_fail("�㻹��ս���У�ֻ��һ����һ����\n");
		if( !env->query_max_encumbrance() )	return notify_fail("�ǲ���������\n");

		inv = all_inventory(env);
		if( !sizeof(inv) )
			return notify_fail("������û���κζ�����\n");

		for(i=0; i<sizeof(inv); i++) {
			if( inv[i]->is_character() || inv[i]->query("no_get") ) continue;

	guards=inv[i]->query_temp("guarded");
	if(sizeof(guards))	{
	for(j=0;j<sizeof(guards);j++)	{
		if(! objectp(guards[j]))	guards[j]=0;
		else if( environment(inv[i])!=environment(guards[j]))	guards[j]=0;
		else if( guards[j]==me)	guards[j]=0;
	}
	guards-=({ 0 });
	}
	if(sizeof(guards))	continue;

			do_get(me, inv[i]);
		}
		write("Ok��\n");
		return 1;
	}

	if( !objectp(obj = present(arg, env)) || living(obj) )
		return notify_fail("�㸽��û������������\n");

	guards=obj->query_temp("guarded");
	if(sizeof(guards))	{
	for(i=0;i<sizeof(guards);i++)	{
		if(! objectp(guards[i]))	guards[i]=0;
		else if( environment(obj)!=environment(guards[i]))	guards[i]=0;
		else if( guards[i]==me)	guards[i]=0;
	}
	guards-=({ 0 });
	}
	if(sizeof(guards))
		return notify_fail(obj->query("name")+"����"+
		guards[0]->query("name")+"�����ţ�\n");

	if( obj->query("no_get") )
		return notify_fail("��������ò�������\n");
	
	return do_get(me, obj);
}
	
int do_get(object me, object obj)
{
	object old_env, *enemy;
	int equipped,i;

	if( !obj ) return 0;
	old_env = environment(obj);

	if( obj->is_character() ) {
		if( living(obj) ) return 0;
		//	if( !userp(obj) && !obj->is_corpse() )
		//		return notify_fail("��ֻ�ܱ���������ҵ����塣\n");
		// If we try to save someone from combat, take the risk :P
	} else {
		if( obj->query("no_get") ) return 0;
	}

	if( obj->query("equipped") ) equipped = 1;
	if( obj->move(me) ) {
		if( me->is_fighting() ) me->start_busy(1);
		if( obj->is_character() )
			message_vision( "$N��$n�����������ڱ��ϡ�\n", me, obj );
		else
			message_vision( sprintf("$N%sһ%s$n��\n", 
				old_env==environment(me)? "����":
					(old_env->is_character() ?
						"��" + old_env->name() + "����" + (equipped? "����" : "�ѳ�"):
						"��" + old_env->name() + "���ó�"),
				obj->query("unit")), me, obj );
		return 1;
	}
	else return 0;
}

int help(object me)
{
	write(@HELP
ָ���ʽ : get <��Ʒ����> [from <������>]
 
���ָ��������������ϻ������ڵ�ĳ����Ʒ.
 
HELP
    );
    return 1;
}
 
