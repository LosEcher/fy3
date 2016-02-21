// check.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object *usr;
	int i;
	string msg;

	msg=sprintf("%-20s%-20s%-20s\n","ID","NAME",arg);
	if(! arg)	return notify_fail("你要查看玩家什么参数？\n");
	usr=users();
	for(i=0;i<sizeof(usr);i++)		{
	if( stringp(usr[i]->query(arg)))
		msg+=sprintf("%-20s%-20s%-20s\n",
		usr[i]->query("id"),usr[i]->query("name"),
		usr[i]->query(arg));
	else
		msg+=sprintf("%-20s%-20s%-20d\n",
		usr[i]->query("id"),usr[i]->query("name"),
		usr[i]->query(arg));

	}
	me->start_more(msg);
	return 1;		
}

int help(object me)
{
write(@HELP
指令格式 : check <参数>

列出所有线上玩家的某项参数。
HELP
    );
    return 1;
}
