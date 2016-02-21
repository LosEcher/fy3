#include <ansi.h>

inherit F_CLEAN_UP;
#include "/data/npc/npcneed.h"

string *npc_banghui=({
	"����",
	"���½�",
	"��ػ�",
	"ؤ��",
});

int main(object me, string arg)
{
	object ob,*target;
	string banghui,n1,n2;
	int money,i,flag;
	object lingpai;
	mapping data;
	string *what,stuffid,stuffname;
	string name;
	if(! (banghui=me->query("banghui")))
		return notify_fail("��û�вμ��κΰ�ᣬ�޷��������˼��롣\n");
	lingpai=new("/obj/lingpai");
	lingpai->create(banghui);
	if(lingpai->query("no_use"))	{
		destruct(lingpai);
		return notify_fail("��İ���ļ������⣬������ʦ��ϵ�ɡ�\n");
	}
	flag=0;
	if( lingpai->query("bangzhu_id")==me->query("id")
	|| ( stringp(me->query("bh_rank")) &&
	sscanf((string)me->query("bh_rank"),"%s������%s",n1,n2)==2))
		flag=1;
	destruct(lingpai);
	if(! arg)
		return notify_fail("��Ҫ����˭������İ�᣿\n");
	if( me->query("id")==arg)
		return notify_fail("�����Լ�����\n");
	if(! objectp(ob=present(arg,environment(me))))
		return notify_fail("�����û��ô���ˡ�\n");
	if(! ob->is_character() )
		return notify_fail("��ֻ�����롸�ˡ�������İ�ᡣ\n");
	if(ob->query("banghui")==me->query("banghui"))
		return notify_fail(ob->query("name")+"�Ѿ��Ǳ�������ˡ�\n");
	if(me->is_fighting()|| me->is_busy())
		return notify_fail("����æ���ء�\n");
	if(ob->is_fighting()|| ob->is_busy())
		return notify_fail("�Է���æ���ء�\n");
	if(!living(ob))	return notify_fail("�����Ū������˵��\n");
	if(member_array(banghui,npc_banghui)!=-1
		&& userp(ob))
		return notify_fail("����Ȩ������Ҽ��롸"+banghui+"����\n");
	if( userp(ob) && !flag)
		return notify_fail("����Ȩ������Ҽ��롸"+banghui+"����\n");

	message_vision("$N����$n�μӰ�ᡸ"+me->query("banghui")+"����\n",me,ob);
	if(! userp(ob) )	{
		if(!ob->query("zhengzhao"))
			return notify_fail("������"+ob->query("name")+
				"����İ��û����Ȥ��\n");
		switch(ob->query("zhengzhao"))	{
		case 1: if((!(banghui=ob->query("banghui"))|| ob->query("zhongcheng")<me->query_per())&&ob->query("kee")*100>ob->query("max_kee")*80)	{
			message_vision("$N��$n˵������������ˣ����Ҳ����д�(qiecuo)һ���书��Σ���\n",ob,me);
			ob->set_temp("oldsix/target",me);
			return 1;
			}
			message_vision("$N����$nЦ�������ҿɲ��Ҹ��ʹ�ﰡ����\n",ob,me);
			return 1;
		case 2: if(!(banghui=ob->query("banghui")) ||
			ob->query("zhongcheng")<me->query_per())    {
			money=ob->query("combat_exp")/1000;
			if(money<1)	money=1;
			money=money*1000;
			message_vision("$N���ٺ١��˼�������$n������"+
			chinese_number(money/1000)+"���ƽ���һ����Ҳ���С����\n",ob,me);
			ob->set_temp("oldsix/target",me);
			ob->set_temp("oldsix/money",money);
			return 1;
			}
			message_vision("$N����$nЦ�������ҿɲ��Ҹ��ʹ�ﰡ����\n",ob,me);
			return 1;
		case 3:	if(!(banghui=ob->query("banghui")) ||
			ob->query("zhongcheng")<me->query_per())    {
			data=ob->query_temp("oldsix/target");
			if(! mapp(data))	data=([]);
			target=keys(data);
			if(member_array(me->query("id"),target)!=-1) {
			sscanf(data[me->query("id")],"%s:%s",stuffid,stuffname);
			message_vision("$N��$n���������Ҳ���˵�����𣿰�"+stuffname+"("+stuffid+")����������\n",ob,me);
			return 1;
			}
			if(sizeof(target)>=4)		{
			message_vision("$NЦ�������ɴ�ҿ�����"+RANK_D->query_respect(ob)+"��ʤ�м���\n",ob);
			return 1;
			}
			what=keys(npcneed);
			stuffid=what[random(sizeof(what))];
			stuffname=npcneed[stuffid];
			data[me->query("id")]=stuffid+":"+stuffname;
			ob->set_temp("oldsix/target",data);
			message_vision("$N����$n����ֻҪ������������֮�ڰ�"+
			stuffname+"("+stuffid+")"+
			"����������һ�к�������\n",ob,me);
			call_out("delete_target",180,ob,me->query("id"));
			return 1;
			}
			message_vision("$N����$nЦ�������ҿɲ��Ҹ��ʹ�ﰡ����\n",ob,me);
			return 1;
		}
	}
	else	{
		tell_object(ob,"�����Ը�����Է��İ�ᣬ��ʹ��jiaru "+me->query("id")+"��\n");
		ob->set_temp("oldsix/target",me);
		return 1;
	}
}

void delete_target(object npc,string name)
{
	mapping data;
	if(! objectp(npc))	return;
	data=npc->query_temp("oldsix/target");
	if(! mapp(data))	return;
	map_delete(data,name);
	npc->set_temp("oldsix/target",data);
}


int help(object me)
{
        write(@HELP
ָ���ʽ��yaoqing <ĳ��>
���ָ����������ĳ�˼�����İ�ᡣ
ĳ�˿�������һ��ǿ����е�NPC��
ע�⣺������Ҽ����ᣬ������ǰ�
��İ��������ɰ�������(renming)��
��������

HELP
        );
        return 1;
}
