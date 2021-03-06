// nick.c

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object player,lp;
	string bh;
	mapping data;
	string name;

	if(! arg)	return notify_fail("指令格式：kaichu <玩家id>\n");

	bh=(string)me->query("banghui");
	if( !bh)	return notify_fail("只有帮会的帮主才的开除他人。\n");

	lp=new("/obj/lingpai");
	lp->create(bh);
	if( lp->query("no_use"))        {
		destruct(lp);
		return notify_fail("你的帮会文件有问题，请与巫师联系。\n");
	}
	if(lp->query("bangzhu_id")!=me->query("id"))    {
		destruct(lp);
		return notify_fail("你不是帮会帮主，无法使用这条指令。\n");
	}
	if( arg==lp->query("bangzhu_id"))	{
		destruct(lp);
		return notify_fail("开除自己？\n");
	}
	data=lp->query("player");
	if( !mapp(data))	data=([]);
	if( !stringp(name=data[arg]))	{
		destruct(lp);
		return notify_fail("你的帮会中没有这个玩家。\n");
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
	message("channel:rumor",YEL"【谣言】某人："+name+"("+arg+")被"+
		"帮会「"+bh+"」开除！\n"NOR,users());

	return 1;
}
int help(object me)
{
        write(@HELP
指令格式 : kaichu <玩家id>

本指令是帮主专用指令，用于开除本帮会中的玩家。

HELP
        );
        return 1;
}
