#include <ansi.h>
inherit F_CLEAN_UP;


int main(object me, string arg)
{
	object lp;
	string banghui,msg;
	string str;
	object target,*name;
	int i,cnt;

	if(! (banghui=me->query("banghui")))
			return notify_fail("ֻ�а��İ�������ʹ���������\n");
	lp=new("/obj/lingpai");
	lp->create(banghui);
	if((string)lp->query("bangzhu_id")!=me->query("id"))	{
		destruct(lp);
		return notify_fail("ֻ�а�������ʹ������ָ�\n");
	}
	destruct(lp);
	if(! arg)	{
		msg=HIR"������\n"NOR;
		msg+="��������������������������������������������������������������������������\n";
		name=users();
		cnt=0;
		for(i=0;i<sizeof(name);i++)	{
			if(name[i]->query("vendetta/"+banghui))	{
			msg+=sprintf("%-18s%s",name[i]->query("name")+"("+name[i]->query("id")+")",
			(cnt%4==3? "\n":""));
			cnt++;
			}
		}
		if(cnt==0||(cnt%4))	msg+="\n";
		msg+="��������������������������������������������������������������������������\n";
		me->start_more(msg);
		return 1;
	}
	if(sscanf(arg,"-a %s",str)==1)	{
		target=find_player(str);
		if(! target)
			return notify_fail("����׷ɱ����Ҳ�����Ϸ�С�\n");
		if(target==me)
			return notify_fail("׷ɱ�Լ���û����ɡ�\n");
		if(target->query("vendetta/"+banghui))
			return notify_fail("��������ں������С�\n");
		target->set("vendetta/"+banghui,1);
		target->save();
		if(banghui==(string)target->query("banghui"))
		message("channel:rumor",
		YEL"��ҥ�ԡ�"+ "ĳ�ˣ���"+banghui+"����ʼ׷ɱ����"+
		target->query("name")+"("+target->query("id")+")��\n"NOR,users());
		else
		message("channel:rumor",YEL"��ҥ�ԡ�"+ "ĳ�ˣ���"+banghui+"����ʼ׷ɱ"+target->query("name")+"("+target->query("id")+")��\n"NOR,users());
		return 1;
	}
	if(sscanf(arg,"-d %s",str)==1)	{
		target=find_player(str);
		if(! target)	return notify_fail("�˴�û����ô����ҡ�\n");
		if(! target->query("vendetta/"+banghui))
			return notify_fail("����Ҳ�����׷ɱ�ĺ������С�\n");
		target->delete("vendetta/"+banghui);
//		target->remove_all_killer();
		target->save();
		message("channel:rumor",
		YEL"��ҥ�ԡ�"+ "ĳ�ˣ���"+banghui+"��ֹͣ׷ɱ"+target->query("name")+"("+target->query("id")+")��\n"NOR,users());
		return 1;
	}
	return notify_fail("ָ���ʽ��zhuisha [-a][-d]<���ID>\n");
}

int help(object me)
{
        write(@HELP
ָ���ʽ��zhuisha [-a][-d]<����ID>
��ָ��Ϊ����ר�ã����Ӳ�����ʾĿǰ���߱�
׷ɱ����ҡ�-a ׷ɱĳ��ң�-d ȡ��׷ɱĳ
��ҡ�����׷ɱ������������Զ�ֹͣ׷ɱ��
HELP
        );
        return 1;
}
