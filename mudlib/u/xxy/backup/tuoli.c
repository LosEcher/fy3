#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_BH;

int main(object me, string arg)
{
	string banghui,msg,file="/data/banghui/";
	int flag;
	mapping data;
	if(me->is_fighting()||me->is_busy())
		return notify_fail("����æ���ء�\n");
	if(! (banghui=me->query("banghui")))
		return notify_fail("��û�вμ��κΰ�ᣬ�������롣\n");
	if(! arg)
		return notify_fail("��Ҫ����ʲô��᣿\n");
	if(arg != banghui)
		return notify_fail("�㲻��������ĳ�Ա��\n");
	if(! (data=get_file_data(file+banghui)))
		return notify_fail("����ļ���ʧ��������ʦ��ϵ��\n");
	if(me->query("id")==data["bangzhu"])	{
		msg="���ǰ�ᡸ"+me->query("banghui")+"���İ���������ǰ���ָ�����ΰ�����\n";
	}
	else	msg="���ǰ�ᡸ"+me->query("banghui")+"���İ��ڡ�\n";
	msg +="�����Ҫ������(y/n)��";
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
			return notify_fail("����ļ�д����������ʦ��ϵ��\n");


	message("channel:rumor",YEL"��ҥ�ԡ�ĳ�ˣ�"+me->query("name")+"�˳�"+
                "��ᡸ"+banghui+"����\n"NOR,users());
	me->delete("banghui");
	if(! data["player"])	{
		if(! write_file("/data/other/deleted",banghui+" string "+
		banghui+"\n",0))
		{	write("д�ļ�����������ʦ��ϵ��\n");
			return 1;	}
		if(! rm("/data/banghui/"+banghui))
		{	write("����ļ�ɾ������������ʦ��ϵ��\n");
			return 1;	}
		message("channel:rumor",YEL"��ҥ�ԡ�ĳ�ˣ���ᡸ"+banghui+
                        "�������߽��ˣ�\n"NOR,users());
	}
	return 1;
	}
	write("�ðɣ��������������������\n");
	return 1;
}
int help(object me)
{
        write(@HELP
ָ���ʽ��tuoli <�������>
���ָ�����ʹ�������ᡣ
ǰ����������Ǹð���Ա��
HELP
        );
        return 1;
}
