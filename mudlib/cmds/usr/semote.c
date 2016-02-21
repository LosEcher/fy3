// semote.c

#include "/doc/help.h"

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	string *e;
	int i;
	string str="";

	e = sort_array(EMOTE_D->query_all_emote(), 1);

	for(i=0; i<sizeof(e); i++)
		str += sprintf("%-15s%s", e[i], (i%5==4)?"\n": "");
	str +="\n";
	me->start_more(str);
	return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : semote

���ָ������г�Ŀǰ����ʹ�õ�emote.
HELP
    );
    return 1;
}
