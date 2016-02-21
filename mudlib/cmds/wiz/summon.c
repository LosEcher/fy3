// summon command..

inherit F_CLEAN_UP;

int main(object me, string str)
{
	object ob;
	int i;
	if (!str) return notify_fail("<Syntax>: Summon <player id>\n");
	ob = LOGIN_D->find_body(str);
        if (wiz_level(ob)>wiz_level(me))
                return notify_fail("ͷ����Ҳ��ץ��С�Ľ����㣡\n");
	if (!ob) return notify_fail("��... ���������?\n");
	// moving
	tell_room(environment(ob),"��������һֻ���ְ�"+
	(string)ob->query("name")+"ץ������, Ȼ�᲻����.\n", ob);
	tell_object(ob,"һֻ�ְ���ץ������, ����ǰһ���....\n");
         if(SECURITY_D->get_status(ob)=="(player)")
        log_file("wiz/summon/"+me->query("id")+".log",geteuid(me)+" summon "+geteuid(ob) + " from "+
         file_name(environment(ob))+ " to "+file_name(environment(me))+"\n");
	ob->move(environment(me));
        tell_object(me, "���"+(string)ob->query("name")+"ץ�������ǰ.\n");
	tell_object(ob,".... ����ʱ������"+(string)me->query("name")+
	"����Ū������.\n");
	tell_room(environment(ob),(string)ob->query("name")+"ͻȻ����"+
	"������ǰ\n",({me,ob}));
	// ok ..
	return 1;
}

int help(object me)
{
write(@HELP
ָ���ʽ : summon <ĳ��>

��ָ�������(��)��ĳ��ץ������ǰ��
HELP
    );
    return 1;
}
