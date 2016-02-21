inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/����"; }
void create()
{
#include <kzznpc.h>

       set("area_name","�ɶ����տ͵�");
       set("area_file","/d/chengdu/kedian.c");
       setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",4);
	carry_object("/obj/std/armor/pijia")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
	carry_object("/obj/std/armor/pikui")->wear();	
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
                        say( "����Ц�����˵������λ" + RANK_D->query_respect(ob)
                                + "�������ȱ��裬�󶼹�������\n");
                        break;
                case 1:
                        say( "�����ò����ϵ�ë��Ĩ��Ĩ�֣�˵������λ" + RANK_D->query_respect(ob)
                                + "����ӭ���٣�������������ܵ���\n");
                        break;
        }
}

int accept_object(object who,object obj)
{
        string bh;

        bh=(string)who->query("banghui");
        if( !bh || bh!=(string)query("banghui"))        {
                if (obj->query("money_id")&&obj->value()>=200)  {
                tell_object(who,"����һ���ֵ�:�����롣\n");
                who->set_temp("rent_paid",1);
                "/cmds/adm/ctom.c"->save_money(this_object(),obj->value()/2);
                return 1;
                }
                else    {
                tell_object(who,"���޵�����˵���ˣ�ס��Ҫ����������\n");
                return 0;
                }
        }
        if (obj->query("money_id")&&obj->value()>=100)  {
        tell_object(who,"����һ���ֵ�:��λ�ֵܣ������룡\n");
        "/cmds/adm/ctom.c"->save_money(this_object(),obj->value()/2);
        who->set_temp("rent_paid",1);
        return 1;
        }
        else    {
                tell_object(who,"���޵����Լ�����Ҳ�ø���һ��������˼��˼�ɡ�\n");
                return 0;
        }
}

