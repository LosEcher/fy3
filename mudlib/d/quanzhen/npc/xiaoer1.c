inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/��С��"; }
void create()
{
#include <kzznpc.h>
	set("area_name","������͵�");
	set("area_file","/d/quanzhen/kedian1.c");
	setup();
	carry_object("/obj/cloth")->wear();
}
void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(2) ) {
                case 0:
                        say( "��С��Ц�����˵������λ" + RANK_D->query_respect(ob)
                                + "�������ȱ��裬ЪЪ�Ȱɡ�\n");
                        break;
                case 1:
                        say( "��С���ò����ϵ�ë��Ĩ��Ĩ�֣�˵������λ" + RANK_D->query_respect(ob)
                                + "����������\n");
                        break;
                                }
}

int accept_object(object who,object obj)
{
        string bh;

        bh=(string)who->query("banghui");
        if( !bh || bh!=(string)query("banghui"))        {
                if (obj->query("money_id")&&obj->value()>=200)  {
                tell_object(who,"��С��һ���ֵ�:�����롣\n");
                who->set_temp("rent_paid",1);
                "/cmds/adm/ctom.c"->save_money(this_object(),obj->value()/2);
                return 1;
                }
                else    {
                tell_object(who,"��С��������˵���ˣ�ס��Ҫ����������\n");
                return 0;
                }
        }
        if (obj->query("money_id")&&obj->value()>=100)  {
        tell_object(who,"��С��һ���ֵ�:��λ�ֵܣ������룡\n");
        "/cmds/adm/ctom.c"->save_money(this_object(),obj->value()/2);
        who->set_temp("rent_paid",1);
        return 1;
        }
        else    {
                tell_object(who,"��С�������Լ�����Ҳ�ø���һ��������˼��˼�ɡ�\n");
                return 0;
        }
}
