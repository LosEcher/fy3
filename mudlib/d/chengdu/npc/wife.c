// /u/caac/npc/wife.c      Write by caac.98.6

//#include <npc.h>

inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("С��", ({ "xiao jing","jing" }));
        set("gender", "Ů��" );
        set("age", 21);

        set("long", "\n���ǽ��ǵ����ӡ�˹�Ĵ󷽣�����������\n"
"��������������æ������ȫ��С���չˣ�������΢�������ƽ�����\n"
"������������˳��޵ģ�����û�����϶�����¥�ġ�\n\n"
);

        set_temp("apply/attack", 25);
        set_temp("apply/defense", 25);

        set("combat_exp", 20000);
        set("mingwang", 50);
        set("str", 25);
        set("kar", 20);
        set("con", 18);
        set("int", 15);
        set("attitude", "friendly");

        set("vendor_goods", ([
        	"��ˮ" :  "/u/caac/obj/tea",
                "����" :  "/u/caac/obj/dianxin",
	]));

	setup();

        set("chat_msg", ({
"С������һ��΢Ц......\n",
"С��Ц���еĿ����㡣\n",
        }));

	carry_object("/u/caac/obj/jinsijia")->wear();
        carry_object("/u/caac/obj/qun")->wear();

        set("inquiry", ([
            "�β�"     : (: ask_me :),
                        ]));
        setup();
}

int ask_me(object me)
{
 object form;
 
 form = new("/u/caac/obj/tea");
 me = this_player();
 
 message_vision("$N���ǲβ裬�����á�\n",me);
 form->move(me);
 return 1;
}

void init()
{       
        object ob;

        ::init();

      if( interactive(ob = this_player()) && !is_fighting() ) 
	{
                remove_call_out("greeting");

                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;

        if ( ob->query("id")=="caac")
          {
             command("ah wangzc");

             message_vision("С����ϲ��˵����С���ǻ����ˣ�\n",ob);

		        command("jump caac");

			command("kiss caac");

			command("chat �ҵ�С���ǻ�������");

          }

               else

                  {

		switch( random(3) ) 

			{

			case 0:
                 		say( "С��Ц�����˵������λ" + RANK_D->query_respect(ob)
                               		+ "������ЪЪ��\n");
                       		break;
               		case 1:
                       		say( "С��̧��̧�첲��˵������λ" + RANK_D->query_respect(ob)
                               		+ "����������\n");
                       		break;
               		case 2:
                       		say( "С��˵������λ" + RANK_D->query_respect(ob)
                               		+ "������������Duke��!��\n");
                       		break;
			}

                command("simle"+ob->query("id"));

/*		command("chat ���ǣ��п��˵�����ݷã�û�¾Ϳ��������Ҫ�ÿ��˵ȣ�"); */

		  }


}
