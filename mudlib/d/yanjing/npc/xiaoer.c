inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/�߽���";}
void create()
{
#include <kzznpc.h>
        set("area_name","�ྩ������ջ");
        set("area_file","/d/yanjing/gaosheng");
        setup();
     carry_object("/d/obj/cloth/changpao")->wear();
     carry_object("/d/obj/weapon/sword/duanjian")->wield();

}
int accept_object(object who,object obj)
{
	string bh;

	bh=(string)who->query("banghui");
	if( !bh || bh!=(string)query("banghui"))	{
		if (obj->query("money_id")&&obj->value()>=200)  {
   		tell_object(who,"�߽���һ���ֵ�:�����롣\n");
   		who->set_temp("rent_paid",1);
		"/cmds/adm/ctom.c"->save_money(this_object(),obj->value()/2);
		return 1;
		}
		else	{
		tell_object(who,"�߽��������˵���ˣ�ס��Ҫ����������\n");
		return 0;
		}
	}
	if (obj->query("money_id")&&obj->value()>=100)  {
	tell_object(who,"�߽���һ���ֵ�:��λ�ֵܣ������룡\n");
	"/cmds/adm/ctom.c"->save_money(this_object(),obj->value()/2);
	who->set_temp("rent_paid",1);
	return 1;
	}
	else	{
		tell_object(who,"�߽�������Լ�����Ҳ�ø���һ��������˼��˼�ɡ�\n");
		return 0;
	}
}

