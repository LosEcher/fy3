inherit KZZNPC;
inherit F_SAVE;

string query_save_file() { return DATA_DIR + "npc/�����"; }
void create()
{
#include <kzznpc.h>

	set("area_name","�㵴ܽ�ؿ�ջ");
	set("area_file","/d/yandang/yuanluo.c");
	 setup();
	carry_object("/obj/armor/female2-cloth")->wear();
	carry_object("/obj/weapon/thin_sword")->wield();
}

int accept_object(object who,object obj)
{
        string bh;

        bh=(string)who->query("banghui");
        if( !bh || bh!=(string)query("banghui"))        {
                if (obj->query("money_id")&&obj->value()>=200)  {
			if(who->query("gender")=="Ů��")
                	tell_object(who,"��������Ц�ݵ�:����ͷ��롣\n");
			else tell_object(who,"��������Ц�ݵ�:����ͷ��롣\n");
                who->set_temp("rent_paid",1);
                "/cmds/adm/ctom.c"->save_money(this_object(),obj->value()/2);
                return 1;
                }
                else    {
                tell_object(who,"��������ס��Ҫ����������\n");
                return 0;
                }
        }
        if (obj->query("money_id")&&obj->value()>=100)  {
 		if(who->query("gender")=="Ů��")
             	tell_object(who,"��������Ц�ݵ�:��λ���ã�����ͷ��롣\n");
		else tell_object(who,"��������Ц�ݵ�:��λ���֣�����ͷ��롣\n");
        "/cmds/adm/ctom.c"->save_money(this_object(),obj->value()/2);
        who->set_temp("rent_paid",1);
        return 1;
        }
        else    {
                tell_object(who,"��������ͬ�����Ҳ�ø���һ��������˼��˼�ɡ�\n");
                return 0;
        }
}
