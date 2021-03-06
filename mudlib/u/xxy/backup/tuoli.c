#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_BH;

int main(object me, string arg)
{
	string banghui,msg,file="/data/banghui/";
	int flag;
	mapping data;
	if(me->is_fighting()||me->is_busy())
		return notify_fail("你正忙着呢。\n");
	if(! (banghui=me->query("banghui")))
		return notify_fail("你没有参加任何帮会，无需脱离。\n");
	if(! arg)
		return notify_fail("你要脱离什么帮会？\n");
	if(arg != banghui)
		return notify_fail("你不是这个帮会的成员。\n");
	if(! (data=get_file_data(file+banghui)))
		return notify_fail("帮会文件丢失，请与巫师联系。\n");
	if(me->query("id")==data["bangzhu"])	{
		msg="你是帮会「"+me->query("banghui")+"」的帮主，脱离前最好指定新任帮主！\n";
	}
	else	msg="你是帮会「"+me->query("banghui")+"」的帮众。\n";
	msg +="你真的要脱离吗(y/n)？";
	write(msg);
	input_to("yes_or_no",me,banghui,data);
	return 1;
}

int yes_or_no(string str,object me,string banghui,mapping data)
{
	string file="/data/banghui/";
	str=lower_case(str);
	if(str=="y"||str=="yes")	{
		data["player"]--;
		if(me->query("id")==data["bangzhu"])
			data["bangzhu"]="???";
		if(! save_file_data(data,file+banghui))
			return notify_fail("帮会文件写错误，请与巫师联系。\n");


	message("channel:rumor",YEL"【谣言】某人："+me->query("name")+"退出"+
                "帮会「"+banghui+"」！\n"NOR,users());
	me->delete("banghui");
	if(! data["player"])	{
		if(! write_file("/data/other/deleted",banghui+" string "+
		banghui+"\n",0))
		{	write("写文件出错，请与巫师联系。\n");
			return 1;	}
		if(! rm("/data/banghui/"+banghui))
		{	write("帮会文件删除出错，请与巫师联系．\n");
			return 1;	}
		message("channel:rumor",YEL"【谣言】某人：帮会「"+banghui+
                        "」土崩瓦解了！\n"NOR,users());
	}
	return 1;
	}
	write("好吧，请想清楚后再做决定．\n");
	return 1;
}
int help(object me)
{
        write(@HELP
指令格式：tuoli <帮会名称>
这个指令可以使你脱离帮会。
前提是你必须是该帮会成员。
HELP
        );
        return 1;
}
