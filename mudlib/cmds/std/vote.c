// vote command..
// Modified by Marz, 04/18/96

#include <ansi.h>

inherit F_CLEAN_UP;

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
	object victim;
	string mode, victim_name;
	string *data;
	int count;

	if( !arg)	return notify_fail("�뿴�����ļ���\n");
	if( me->query("age")<16 && !wizardp(me))
		return notify_fail("�����̫С����\n");
	if( sscanf(arg,"%s %s",mode,victim_name)!=2)
		return notify_fail("�뿴�����ļ���\n");
	if( mode!="-c" && mode!="-o")
		return notify_fail("�뿴�����ļ���\n");
	if( victim_name==me->query("id"))
		return notify_fail("��û�и��\n");
	if( me->query("bad_chat"))
		return notify_fail("����ȨͶƱ��\n");
	if( time()-(int)me->query("vote_time")<60)
		return notify_fail("�����ʹ��ͶƱȨ����һ������˵�ɡ�\n");
	if( !wizardp(me))
		me->set("vote_time",time());

	victim=find_player(victim_name);
	if( !objectp(victim))
		return notify_fail("û����ô���ˡ�\n");
	if( wizardp(victim))
		return notify_fail("����Ȩ����ʦͶƱ��\n");
	if( mode=="-c"&& (int)victim->query("bad_chat"))
		return notify_fail(victim->query("name")+"������Ȩ�����ѱ��رա�\n");
	if( mode=="-o" && !(int)victim->query("bad_chat"))
		return notify_fail(victim->query("name")+"������Ȩ����Ϳ����ˡ�\n");
	if( mode=="-c")	{
		data=victim->query("close_chat");
		if( !sizeof(data))	data=({});
		if( member_array(me->query("id"),data)!=-1)
			return notify_fail("����Ͷ���ر�"+victim->query("name")+"����Ȩ����һƱ�ˡ�\n");
		data+=({ me->query("id") });
		victim->set("close_chat",data);
		count=5-sizeof(data);
		victim->apply_condition("vote_clean",10);
		if(count>0)
		message("channel:chat",HIC"�����ġ�"+me->query("name")+"ͶƱ�ر�"+
		victim->query("name")+"������Ȩ��������"+chinese_number(count)+
		"Ʊ��\n"NOR,users());
		else	{
		message("channel:chat",HIC"�����ġ�"+me->query("name")+"ͶƱ�ر�"+
		victim->query("name")+"������Ȩ����"+victim->query("name")+
		"������Ȩ�����ر��ˣ�\n"NOR,users());
		victim->set("bad_chat",1);
		victim->delete("close_chat");
		victim->apply_condition("vote_clean",-10);
		}
	}
	else	{
		data=victim->query("open_chat");
		if( !sizeof(data))	data=({});
		if( member_array(me->query("id"),data)!=-1)
			return notify_fail("����Ͷ������"+victim->query("name")+"����Ȩ����һƱ�ˡ�\n");
		data+=({ me->query("id") });
		victim->set("open_chat",data);
		count=5-sizeof(data);
		victim->apply_condition("vote_clean",10);
		if(count>0)
		message("channel:chat",HIC"�����ġ�"+me->query("name")+"ͶƱ����"+
		victim->query("name")+"������Ȩ��������"+chinese_number(count)+
		"Ʊ��\n"NOR,users());
		else	{
		message("channel:chat",HIC"�����ġ�"+me->query("name")+"ͶƱ����"+
		victim->query("name")+"������Ȩ����"+victim->query("name")+
		"������Ȩ�����ָ��ˣ�\n"NOR,users());
		victim->delete("bad_chat");
		victim->delete("open_chat");
		victim->apply_condition("vote_clean",-10);
		}
	}
	return 1;
}

int help(object me)
{
write(@HELP
ָ���ʽ : vote [-c|-o] <ĳ��> 

�����������ĳ�˲�ȡ�ж����ɴ��ͶƱ��������������������û���˸��飬
ͶƱ���Զ�ȡ����ͶƱ���������һ���Ӻ�����ٴ�ͶƱ��

-c: �ر�ĳ�˽�̸Ƶ��������Ʊͬ�⡣
-o: ��ĳ�˽�̸Ƶ��������Ʊͬ�⡣

HELP
    );
    return 1;
}
