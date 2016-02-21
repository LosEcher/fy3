#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
	string *dir,*area,area_name;
	string msg;
	object dipan;
	string banghui;
	string *npc_bh=({"����","���½�","��ػ�","ؤ��"});
	int kaifa,money,i;
	if(! stringp(banghui=me->query("banghui")))
		return notify_fail("��û�м����κΰ�ᣬ�޷���������������̡�\n");
	if(member_array(banghui,npc_bh)!=-1)
		return notify_fail("NPC���������Ȩ�������̡�\n");
	dir=get_dir("/data/area/",0);
	if(! dir)	dir=({});
	area=({});
	dipan=new("/obj/area");
	for(i=0;i<sizeof(dir);i++)	{
		sscanf(dir[i],"%s.o",area_name);
		dipan->create(area_name);
		if(! dipan->query("ziyuan"))	continue;
		if(dipan->query("banghui")!=banghui)	continue;
		area+=({area_name});
	}
	if(! arg|| member_array(arg,area)==-1)	{
		msg=HIC"����Կ����ĵ���\n\n"NOR;
		msg+=sprintf("%-16s%-10s%-10s%-10s\n",
		"��������","��Դ","������","��ֵ");
		msg+="��������������������������������������������������������������������������\n";
		for(i=0;i<sizeof(area);i++)	{
			dipan->create(area[i]);
			msg+=sprintf("%-16s%-10s%-10d%-10s\n",
			area[i],dipan->query("ziyuan"),dipan->query("kaifa"),
		MONEY_D->money_str(dipan->query("jizhi")*10));
		}
		destruct(dipan);
		me->start_more(msg);
		return 1;
	}
	dipan->create(arg);
	kaifa=dipan->query("kaifa");
	money=kaifa*10000;
	if((int)me->query("balance")<money)	{
		destruct(dipan);
		return notify_fail("�����ϵ�Ǯ����������"+arg+"����Ҫ"+
		MONEY_D->money_str(money)+"��\n");
	}
	money=-money;
	me->add("balance",money);
	me->save();
	if(kaifa<100)	dipan->set("kaifa",kaifa+1);
	else	{
		destruct(dipan);
		return notify_fail(arg+"�Ŀ������Ѵﵽ��󣬲����ٿ�����\n");
	}
	dipan->save();
	destruct(dipan);
	write("�㻨����"+MONEY_D->money_str(-money)+"����"+arg+
	"��");
	write("������������һ�㣡\n");
	return 1;
}
	
int help(object me)
{
        write(@HELP

ָ���ʽ��kaifa [��������]

���ڿ�������е��̣����Ӱ�����롣

HELP
        );
        return 1;
}

