inherit F_CLEAN_UP;
inherit F_BH;
int main(object me, string arg)
{
        object ob;
	mapping data;
	string banghui,file="/data/banghui/";
	int flag;
	if( (banghui=me->query("banghui"))&&
		check_file(file+banghui))
		return notify_fail("��Ǹ�����Ѿ��ǰ�ᡸ"+me->query("banghui")+"�������ˣ��޷�����������ᡣ\n");
	if( (banghui=me->query("banghui"))&&
		! check_file(file+banghui))
		return notify_fail("��İ���ļ���ʧ��������ʦ��ϵ��\n");
	if(me->is_fighting()||me->is_busy())
		return notify_fail("����æ���ء�\n");
	if(! arg)
		return notify_fail("��Ҫ����˭�İ�᣿\n");
	if( me->query("id")==arg)
		return notify_fail("��û����ô����\n");
	if(! objectp(ob=present(arg,environment(me))))
		return notify_fail("���û����ô���ˡ�\n");
	if(! userp(ob))
		return notify_fail("��ֻ�ܼ��������֯�İ�ᡣ\n");
	if((object)me->query_temp("target")!=ob)
		return notify_fail("��Ǹ��"+ob->query("name")+"��û��������μ����İ�ᡣ\n");
	if(! (banghui=ob->query("banghui")))
		return notify_fail("��Ǹ��"+ob->query("name")+"���ڲ������κΰ�ᣡ\n");
	if(! check_file(file+banghui))
		return notify_fail("�Է�����ļ���ʧ��������ʦ��ϵ��\n");
	data=get_file_data(file+banghui);
	data["player"]++;
	if(! save_file_data(data,file+banghui))
		return notify_fail("����ļ�д�����������ʦ��ϵ��\n");
	message_vision("$N��������$n�İ�ᡸ"+ob->query("banghui")+"����\n",me,ob);
	me->set("banghui",ob->query("banghui"));
	me->delete_temp("target");
	return 1;
}
int help(object me)
{
        write(@HELP
ָ���ʽ��jiaru <ĳ��>
���ָ����������ĳ�˵İ�ᡣ
ǰ����ĳ�˱��������㡣
HELP
        );
        return 1;
}
