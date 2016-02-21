inherit NPC;
void create()
{
     set_name("��ϼ��",({"xu xiake"}));
     set("gender","����");
     set("age",64);
     set("str",20);
     set_skill("literate",200);
     set("can_teach_knowledge",1);
     setup();
carry_object("/obj/armor/guardsuit")->wear();
}
void init()
{
  ::init();
  add_action("do_answer","answer");
}
int recognize_apprentice(object ob)
{
 if (ob->query_temp("��/answer"))
    return notify_fail("��ϼ�͵�:����ش�����.\n");
        if (!(int)ob->query_temp("mark/��")) {
	if(ob->query_skill("literate",1)<60)	{
  command("say �ҳ����������,����˾ͽ���.(answer)\n");
  remove_call_out("give_question");
  call_out("give_question",1,ob);
  return notify_fail("");
    }
 return notify_fail("��ϼ�͵�:����׼��������,���Ѳ���,��...\n");
    } 
     ob->add_temp("mark/��", -1);
     return 1;
}
void give_question(object ob)
{
   int i,time;
   string str,answer;
   i=1+random(10);
   switch(i)  {
   case 1:  {
         str="�Ϸ�ԭ����ʲô?";
         answer="�����";
         break;    }
   case 2:  {
         str="�Ϸ�ı�����ʲô?";
         answer="��֮";
         break;    }
   case 3:  {
         str="�Ϸ�����ҳ���?";
         answer="22";
         break;   }
   case 4:  {
         str="�Ϸ��������?";
         answer="����";
         break;   }
   case 5:   {
         str="�Ϸ���д��һ���μǽ�ʲô����?";
         answer="��ϼ���μ�";
         break;   }
   case 6:   {
         str="�Ҽ�ͥԺ�е��޺�����˭��ֲ?";
         answer="��ϼ��";
         break;   }
   case 7:   {
         str="�����ų�ʲô?";
         answer="����";
         break;    } 
   case 8:   {
          str="[����ۿ�ˮ����,�����ǽ���ִ�.]��˭��д?";
          answer="����ʯ";
          break;   }
   case 9:   {
          str="������������ȫ��������?";
          answer="3071";
          break;   }
   case 10:   {
          str="���ڽ�������169�����ն���ԪǮ?";
          answer="100";
          break;   }
 }
 command("say "+str+"\n");
 time=time();
 ob->set_temp("��/answer",answer);
 ob->set_temp("��/time",(int)time);
 return;
}
int do_answer(string arg)
{
  object ob;
  int now_time;
   ob=this_player();
  if (!ob->query_temp("��/answer")) 
 return notify_fail("��ϼ�͵�:����û�������,�һش�ʲô!\n");
  now_time=(int)ob->query_temp("��/time")-time();
  if (now_time>10) {
     ob->delete_temp("��/time");
     ob->delete_temp("��/answer");
     return notify_fail("��ϧ,�㳬��ʱ����.\n");
     }
  if (arg!=(string)ob->query_temp("��/answer"))
  return notify_fail("����,��������!\n");
  command("say ����,"+ob->query("name")+"������.\n");
  ob->delete_temp("��/time");
  ob->delete_temp("��/answer");
  ob->add_temp("mark/��",10);
  return 1;
 }
int accept_object(object who,object item)
 {
 if (!(int)who->query_temp("mark/��"))
                who->set_temp("mark/��", 0);
   if (!item->query("money_id")||item->value()<1000)
return notify_fail("�����Ҳ̫���˰�.\n");
   if (who->query_temp("��/answer"))  {
   who->delete_temp("��/answer");
   who->delete_temp("��/time");                  
     }
   who->add_temp("mark/��",(int)item->value()/30);
   message_vision("$N΢΢һЦ,���˵�ͷ.\n",this_object());
   return 1;
}
         
