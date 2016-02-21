inherit NPC;
#include <ansi.h>;
void greeting(object);
void init();
string inquiry_a();

void create()
{
        set_name("������Ů", ( { "girl", "little girl" }) );
        set("title", "��������");
        set("gender", "Ů��" );
        set("age", 16);
        set("long",
   "����һλ��ҽ��Ů��������������˫��������ᣬ���μ�ʹ��
���ꡣ����ɫ���͸���������������ơ�����ʩ֬�ۣ����Ƿ�����
�������������ˣ���̬֮������֮������˫����ʩҲ��ѷɫ�ֺ���
\n"
             );
        set("attitude", "friendly");

        set("per", 30);
        set("max_kee", 200);
        set("max_gin", 200);
        set("force", 2000);
        set("max_force", 2000);

        set("combat_exp", 6000000);
        set("score", 1000);

        set_skill("force", 200);
        set_skill("dodge", 200);
        set_skill("unarmed", 150);
        set_skill("parry", 150);
        set_temp("apply/attack", 200);
        set_temp("apply/defense", 200);
        set_temp("apply/damage", 200);
        set_temp("apply/armor", 200);

        set("inquiry", ([
            "" : "\n",
            "" : "\n",
            "" : (: inquiry_a :),
        ]));

        setup();
        carry_object("/u/yuki/obj/feather")->wear();
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
       add_action("do_kiss","kiss");    
}

void greeting(object ob)
{

        if( !ob || environment(ob) != environment() ) return;
        if(random(2)==1)
            {say("������Ů��ȻһЦ���۲�������" + RANK_D->query_respect(ob)
                + "����ô�����ģ�����þ�û���������ˡ�\n");
             return;
            }
          else
          {say("������Ů����ĸ�Ħ��ߵ�Сè��" + RANK_D->query_respect(ob)
                + "�ܰ�����Щ����ô���Һþ�û�г�ȥ���ˡ� \n");
             return;
            }
}

string inquiry_a()
{
object me;
me = this_player();
  say("��λ" + RANK_D->query_respect(me)+
    "������˵��ʦ�����������ߵ��ࡻ��\n����",me);
  return "��֪��λ�������ܰ�����أ�\n";
}

int accept_object(object who, object ob)
{
        object obn;
        object me;
        me = this_player();     
        if( !who || environment(who) != environment() ) return 0;
        if ( !objectp(ob) ) return 0;
        if ( !present(ob, who) ) return notify_fail("��û�����������\n");

        if (  (string)ob->query("name") != "����ָ��")
                    return notify_fail("����Ҫ���������\n");
        if ( (string)ob->query("name") == "����ָ��" )
        {
                me->set_temp("mark/huan",1);
                  message_vision("������Ů����¶��һ�����۵�΢Ц���������$N�����ӡ��һ���ǡ�!\n",me);
        }
        return 1;               
}
int do_kiss(string arg)
{
        object me,ob;
        me = this_player();
        if (arg != "girl" && arg != "������Ů")
                return notify_fail("����ʲô����\n");
        if (!me->query_temp("mark/huan"))
                return notify_fail("������Ů�����ϴ���һ��Ũ̵!\n");    
          message_vision("$Në��ë�ŵ���������Ů����������һ�£�������Ů���������ߵ�ͨ�졣\n",me);
        message_vision("лл������һ�ָ������ѱ�����СŮ�ӵ����⣬��������ˣ�$N�ౣ��!\n",me);
        ob=new("/u/yuki/obj/snowsword");
        ob->move(me);
        return 1;
}


