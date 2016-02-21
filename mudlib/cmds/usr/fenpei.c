inherit F_CLEAN_UP;

int main(object me, string arg)
{
	string skl,what;
	int hard,point,qn,lv,all,left;
	mapping ln,skills;

	qn=(int)me->query("wgjn");
	if(! arg)	{
		write("Ŀǰ�㻹ʣ"+qn+"���书���ܿɹ����䡣\n");
		return 1;
	}
	if( sscanf(arg,"%s %s",skl,what)!=2)
		return notify_fail("��ʹ��help fenpei�鿴��ָ��˵����\n");
	skills=me->query_skills();
	if( !mapp(skills))	skills=([]);
	if(! skills[skl])
		return notify_fail("�㲢û��ѧ�������书���޷�Ϊ����似�ܵ�����\n");
	if((string)SKILL_D(skl)->type()!="martial")
		return notify_fail("��ֻ�ܶ��书ʹ��Щָ�\n");
	lv=(int)me->query_skill(skl,1);
	if(lv>=2000)
		return notify_fail("�����书�Ѿ��ﵽ��ߵȼ��ˡ�\n");
	if( !(hard=SKILL_D(skl)->hard_point()))		hard=1;
	ln=me->query_learned();
	all=(lv+1)*(lv+1)*hard*hard;
	left=all-(int)ln[skl];
	if(what=="?")		{
		if(lv<30)	write("�����书����"+(left+1)+"���ܵ�����һ���ˡ�\n");
		else	{
			if(left<=0)	write("��������书�Ѿ��ﵽ����(shengji)�����ˡ�\n");
			else		write("�����书Ҫ����(shengji)���輼�ܵ���"+left+"�㡣\n");
		}
		return 1;
	}
	if( sscanf(what,"%d",point)!=1)
		return notify_fail("��ʹ��help fenpei�鿴��ָ��˵����\n");
	if(point>qn)
		return notify_fail("����书���ܵ���������\n");
	if(point<=0)
		return notify_fail("������书���ܵ�������Ϊ1�㣡\n");
	if(left<=0 && lv>=30)		write("��������书�Ѿ��ﵽ����(shengji)�����ˡ�\n");
	else	{
		me->add("wgjn",-point);
		me->improve_skill(skl,point,1);
		write("���"+to_chinese(skl)+"������"+point+"�㼼�ܡ�\n");
	}
	return 1;
}

int help(object me)
{
        write(@HELP

ָ���ʽ��
fenpei <�书����> <���ܵ���>
	�����ܵ��������ָ�����书��
fenpei <�书����> <?>
	�鿴ָ���书��������ļ��ܵ�����
fenpei
	�鿴����ʣ���书���ܵ�����

����ÿ�γɹ��������֮������书���ܵ����Ľ�����
��ָ��������������Ҫ���ѻ�õ��书���ܵ�������
������Ҫ��չ���书�ϡ�


HELP
        );
        return 1;
}


