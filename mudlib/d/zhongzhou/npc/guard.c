

inherit NPC;

void create()
{
        set_name("����",({"guard man","man","guard"}));
        set("gender", "����" );
        set("age", 20);
        set("long",
                "�����С���ӣ�����һ������ģ���ֱ��ս���š�\n");
        set("combat_exp",2000000);
        set_temp("apply/defense",10);
        set_temp("apply/attack",5);
        set("attitude", "friendly");
        set("rank_info/respect", "����");

        set_skill("force", 250);
        set_skill("unarmed", 250);
        set_skill("dodge", 250);
        set_skill("parry", 250);
        
        setup();
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
                        message_vision("����������$Nһ�ᣬ����ĵ�����λ"+
                        RANK_D->query_respect(ob)+"�����ܲ��Ǳ����˰ɣ�\n",ob);
                        break;
                case 1:
                        say( "������Ŀ�ⶢ���㣬˵������λ" + RANK_D->query_respect(ob)
                                + "���������\n");
                        break;
                           }
}

int accept_object(object who, object ob)
{
        
         if (ob->query("money_id") && ob->value() >= 20000) 
        {
                tell_object(who, "����һ������¶���ѵõ�Ц��˵������л���ϣ��롣\n");

                 who->set_temp("war_money",1);


                return 1;
        }

        return 0;
}
