//Mr.music yangzhou ŷ����

inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("ŷ����", ({ "ouyangxiu", "ouyang xiu","ouyang" }) );
        set("gender", "����" );
        set("age", 54);
        set("str", 90);
        set("cor", 90);
        set("cps", 90);
        set("int", 90);
        set("mingwang",1);
        set("max_force", 4000);
        set("force", 3000);
        set("force_factor", 3);

        set("rank_info/respect", "����");

        set("long","��λ��������֪��ŷ�����\n");

        create_family("����ѧ��", 1, "�糤");
        set("title","����֪��");
        set("combat_exp", 100000);
        set("score", 2000);

        set_skill("unarmed", 200);
        set_skill("parry", 200);
        set_skill("dodge", 200);
        set_skill("sword", 200);
        set_skill("force", 200);
        set_skill("literate", 300);

        setup();
        carry_object("/obj/cloth")->wear();
}

void attempt_apprentice(object ob)
 {
        if( (int)ob->query_skill("literate",1) < 50 ) 
            {
             command("say " + RANK_D->query_respect(ob) +
 "�������ˣ�����ѧ�����������Բ��㡣\n");
                return;
            }
        command("smile");
        command("say " + RANK_D->query_respect(ob) + 
 "��˼���ݣ����ⲻ�������ӿɽ̡�\n");
        command("recruit " + ob->query("id") );
 }

 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("class", "shusheng");
 }
 

void init()
{
        ::init();
        add_action("do_chat", "chat");
        add_action("do_chat","chat*");
        add_action("do_jiehun","jiehun");
        add_action("do_jiehun","marry");
        add_action("do_lihun","lihun");
}


int do_chat()
{
  object ob;
   ob=this_player(1);
  
   say("֪����ɫһ�����ȵ�������֮�ϣ�����������\n");
   tell_object(ob,"�������۳���ǰ�������ɷ�˵��һ��������"
                  +"Ƥ������,���˹�ȥ��\n");
   ob->unconcious();
   return 0;
}


int do_lihun(string arg)
{
object me;
object ob;
object card;

object *inv;
int i;

me=this_player(1);

if(!arg)   {
             tell_object(me,"���Լ����Լ���鰡��\n");
             return 1;
            }

if( !objectp(ob = find_player(arg)))
         {
            tell_object(me,"�������Ŀǰ����������ɣ�\n");
            return 1;
         }


      say(me->query("name")+"��Ҫ��"+ob->query("name")+"���.\n");

      if( !(me->query("marry") == arg) )
        {
          say("֪���ɻ�Ŀ��˿�"+me->query("name")+
                "˵����û�����\n");
          return 1;
        }

      if(!me->query("marry"))
        {
         say("֪�����ȵ���"+me->query("name")+
             "��û�а��£�������?\n");
         return 1;
        }

      if(!present(arg,environment()))
        {
         say("֪��ҡҡͷ˵:"+ob->query("name")+"���ڲ������\n");
         return 1;
        }
      if( ob->query("want_lihun")==me->query("id") )
        {
         say("֪��̾Ϣ�������Ǻ���Ϊ֮��\n");

         inv=all_inventory(me);
         for(i=0;i<sizeof(inv);i++)      
            {
             if(inv[i]->query("id")=="jiehunzheng") 
              {
                destruct(inv[i]);

              }
            }
         inv=all_inventory(ob);
         for(i=0;i<sizeof(inv);i++)
            {
             if(inv[i]->query("id")=="jiehunzheng")
              {
                destruct(inv[i]);

              }
            }

         me->delete("marry");
         me->delete("want_marry");
         me->delete("want_lihun");
         ob->delete("marry");
         ob->delete("want_marry");
         ob->delete("want_lihun");
         tell_object(me,"��Ļ�����ϵ�������\n");
         tell_object(ob,"��Ļ�����ϵ�������\n");
        }
      else
        {
         say("֪����:"+me->query("name")+",����뷨��֪����"+
             ",������Ҫ����"+ob->query("name")+"����˼.\n");
         me->set("want_lihun",arg);
         return 1;
        }

return 1;
}



int do_jiehun(string arg)
{
object me;
object ob;
object card;

me=this_player(1);

if(!arg)   {
             tell_object(me,"���Լ����Լ���鰡��\n");
             return 1;
            }

if( !objectp(ob = find_player(arg)))
         {
            tell_object(me,"�������Ŀǰ����������ɣ�\n");
            return 1;
         }


      say(me->query("name")+"��Ҫ��"+ob->query("name")+"���.\n");
      
      if(me->query("age") <16)
        {
         say("֪��ҡҡͷ����Ȼ��û�ﵽ������䡣\n");
         return 1;
        }

      if(me->query("marry")== arg )
        {
          say("֪���ɻ�Ŀ��˿�"+me->query("name")+
                "˵����û�����\n");
          return 1;
        }

      if(me->query("marry")) 
        {
         say("֪����ŭ��һ�����Ӻȵ���"+me->query("name")+
             "�����а��£������ػ飡\n");
         say("�������۳���ǰ�������ɷ�˵��һ������"+
               me->query("name")+"Ƥ������,���˹�ȥ��\n");
         me->unconcious();
         return 1;
        }
      
      if(!present(arg,environment()))
        {
         say("֪��ҡҡͷ˵:"+ob->query("name")+"���ڲ������\n");
         return 1;
        }
      if( ob->query("want_marry")==me->query("id") )
        {
         say("֪��΢Ц����ף��������ͷг�ϣ����޶��ġ�\n");   
         ob->set("marry",me->query("id"));
         me->set("marry",arg);
         card= clone_object("/obj/marry_card");
         card->set("name","���"+arg+"�Ľ��֤");
         card->move(me);
         card= clone_object("/obj/marry_card");
         card->set("name","���"+me->query("id")+"�Ľ��֤");
         card->move(ob);
         say("֪���ݸ�"+ob->query("name")+"��"+me->query("name")
                  +"һ��һ�Ž��֤��.\n");
         return 1 ;
         
        } 
      else
        {
         if( me->query("gender") == ob->query("gender") )
          {
           say ("ͬ��������, ŷ���ޱ�"+me->query("name")+
                  "���ÿ��°�ĭ���˹�ȥ.\n");
           return 1;
          }
         say("֪��΢Ц��:"+me->query("name")+",���������֪����"+
             ",������Ҫ����"+ob->query("name")+"����˼.\n");
         me->set("want_marry",arg);
         return 1;
        }

return 1;
}



