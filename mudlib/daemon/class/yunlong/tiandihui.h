// tiandihui.h for join tiandihui
#include <ansi.h>;

int do_join()
{
	object me, ob, obj ;
	string tang;

	me = this_object () ;
	ob = this_player () ;

	if ((int)ob->query("mingwang") < 200)
	{
message_vision(HIR"$N��$n��������᣿��Ľ�������̫�ͣ���ػᶼ�Ǹ�����Ϊ�ĺú�! \n"NOR,me,ob);
		return 1;
	}
	if ((int)ob->query("mingwang") < 0)
	{
	message_vision(HIR"$N��$n��ŭ����������᣿һ������Ǹ��󺺼�! \n"NOR,me,ob);
		set_leader(ob);
		remove_call_out("kill_ob");
		me->kill_ob(ob); 
		return 1;
	}
	if(  ob->query("banghui") && ob->query("banghui") !="��ػ�")
	{
		message_vision("$Nҡҡͷ����$n˵�������Ѿ�������������ˣ�������������ػᡣ\n",me,ob);
		return 1;
	}
	if( ob->query("banghui") =="��ػ�")
	{
		message_vision("$Nҡҡͷ����$n˵�������Ѿ�������ػ�����ˡ�\n",me,ob);
		return 1;
	}
	switch (random(10))
	{
		case 0 : tang=HIG"��ľ��"; break;
		case 1 : tang=HIG"�����"; break;  //������
		case 2 : tang=HIW"������"; break;
		case 3 : tang=BLU"��ˮ��"; break;
		case 4 : tang=YEL"������"; break;
		case 5 : tang=HIG"������"; break;  //�̵���
		case 6 : tang=HIG"��˳��"; break;  //�����
		case 7 : tang=HIW"�Һ���"; break;  //����
		case 8 : tang=BLU"��̫��"; break;
		default: tang=YEL"�껯��"; break;  //��
	}
	
	command("smile");
	message_vision("$N��$n˵���������ʱ��"+tang+NOR+"Ч���ɣ�\n", me, ob);
	command("yaoqing "+ob->name());
	
	return 1;
}
