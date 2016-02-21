// music   yangzhou's ��С��

inherit NPC;
inherit F_VENDOR;

void create()
{
        set_name("��С��", ({ "xiaoer", "xiao", "waiter","xiao er","er" }) );
        set("gender", "����" );
        set("age", 20);
        set("long",
                "ü��Ŀ���С��ƣ�����Ц�����ģ�æ�ò����ֺ���\n");
        set("mingwang",1);
        set("combat_exp", 1000);
        set("attitude", "friendly");
        set("rank_info/respect", "С����");

        set("vendor_goods", ([
                     "����":     __DIR__"obj/baozi",
                     "�ƺ�":     __DIR__"obj/jiuhu",
 //                    "����":     __DIR__"obj/jitui",
                     "��ˮ��" :  __DIR__"obj/yanshuie",
                     "������" :  __DIR__"obj/huashengmi", 
                             ]));


        set("inquiry", ([
              "hankou": "��Ҳ�Ǻ����ˣ�̫���ˣ�����ͬ�磬��[1;33mȥ����[0;36m��[0;37m\n",
               "����":   "��Ҳ�Ǻ����ˣ�̫���ˣ�����ͬ�磬��[1;33mȥ����[0;36m��[0;37m\n",
               "ȥ����": "(quhankou) ?" ,
        ]) );


        setup();

        carry_object("/obj/cloth")->wear();
        add_money("coin", 50);
}

void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }

        add_action("buy_object", "buy");
        add_action("buy_object", "mai");
        add_action("do_vendor_list", "list");
        add_action("do_vendor_list", "wen");
        add_action("do_sell", "sell");
}



void greeting(object ob)
{

if( !wizardp(ob) )
    {
        if( !ob || environment(ob) != environment() ) return;
/*      switch( (int) random(20)/10 ) {
                case 0:
                        say( "��С��������"+ob->query("name")+
   "һ�ᣬЦ������λ" + RANK_D->query_respect(ob)+ "�����ܲ��Ǳ����˰ɣ�\n");
                        break;
                case 1:
                        say( "��С����������ϸ���˲���˵������λ" + RANK_D->query_respect(ob)
                                + "������������\n");
                        break;
                case 2: say("��С����"+ ob->query("name") +
"Ц��Ц��˵����裬���Ե�����ȥ��˵��.\n");
                        break;
                           }
*/
      if(ob->query("age") <15) 
             {
              say("��С��Ц��Ц��˵: �����İɣ�[1;33m��õ�·�����ȿ�����[0;37m.\n");
             }
      else if ( ob->query("age") <18 )
            {
             say( 
"��С��������"+ob->query("name")+"һ�ᣬЦ������λ" + RANK_D->query_respect(ob)+ "�����ܲ��Ǳ����˰ɣ�\n");
            }      
      else {
            say( "��С����������ϸ���˲���˵������λ" + RANK_D->query_respect(ob)+ "������������\n");
           }

   }
else
  {
  say("��С��������Ц��: ��" + 
  ob->query("name")+RANK_D->query_respect(ob) + "��������¥���룡\n");
  say("��С������"+ob->query("name")+"һ���𵤡�\n");
  }
}

int accept_object(object who, object ob)
{
        
        if (ob->query("money_id") && ob->value() >= 100) 
        {
                tell_object(who, "С��һ������˵������л���ϣ�¥�����롣\n");

                who->set_temp("rent_paid",1);

// for if back money to who post in wizroom

                return 1;
        }

        return 0;
}