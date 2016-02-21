// nick.c

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object player,lp;
	string bh;
	mapping data;
	string name;

	if(! arg)	return notify_fail("ָ���ʽ��kaichu <���id>\n");

	bh=(string)me->query("banghui");
	if( !bh)	return notify_fail("ֻ�а��İ����ŵĿ������ˡ�\n");

	lp=new("/obj/lingpai");
	lp->create(bh);
	if( lp->query("no_use"))        {
		destruct(lp);
		return notify_fail("��İ���ļ������⣬������ʦ��ϵ��\n");
	}
	if(lp->query("bangzhu_id")!=me->query("id"))    {
		destruct(lp);
		return notify_fail("�㲻�ǰ��������޷�ʹ������ָ�\n");
	}
	if( arg==lp->query("bangzhu_id"))	{
		destruct(lp);
		return notify_fail("�����Լ���\n");
	}
	data=lp->query("player");
	if( !mapp(data))	data=([]);
	if( !stringp(name=data[arg]))	{
		destruct(lp);
		return notify_fail("��İ����û�������ҡ�\n");
	}
	map_delete(data,arg);
	lp->set("player",data);
	lp->save();
	destruct(lp);
	
	player=find_player(arg);
	if( !objectp(player))	{
		player=new("/cmds/adm/stdnpc");
		player->create(arg);
		if( player->query("no_use"))	{
			destruct(player);
		}
		else	{
			player->delete("banghui");
			if(!undefinedp(player->query("score")))
				player->delete("score");
			if(!undefinedp(player->query("bh_rank")))
				player->delete("bh_rank");
			if(!undefinedp(player->query("rank_lv")))
				player->delete("rank_lv");
			player->save();
			destruct(player);
		}
	}
	else	{
			player->delete("banghui");
			if(!undefinedp(player->query("score")))
				player->delete("score");
			if(!undefinedp(player->query("bh_rank")))
				player->delete("bh_rank");
			if(!undefinedp(player->query("rank_lv")))
				player->delete("rank_lv");
			player->save();
	}
	message("channel:rumor",YEL"��ҥ�ԡ�ĳ�ˣ�"+name+"("+arg+")��"+
		"��ᡸ"+bh+"��������\n"NOR,users());

	return 1;
}
int help(object me)
{
        write(@HELP
ָ���ʽ : kaichu <���id>

��ָ���ǰ���ר��ָ����ڿ���������е���ҡ�

HELP
        );
        return 1;
}
