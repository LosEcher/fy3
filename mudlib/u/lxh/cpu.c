//��ң�� 1.0 BY LXH 14:59 99-1-6

#include <ansi.h>

inherit NPC;

string all_save();

void create()
{
        set_name("��Ѫ����", ({ "txjh" }));
        set("gender", "����");
        set("age", 20);
        set("per",60);
        set("mingwang",1);
        set("no_clean",1);    
        set_skill("literate", 200);

        set("title","��������");
        set("combat_exp", 9000000);
        setup();
}

int init()
{
                remove_call_out("init");
                call_out("init", 300);
                all_save();
}

string all_save()
{
	object *list,cpu;
	int j;

      switch(random(15))
       {
        case 0:
          command("chat "+"��ף���Ԫ�����֣���");
          break;
        case 1:
          command("chat ף�������³ɣ���������!");
          break;

      default : break;
       }

        list = users();
        j = sizeof(list);
                while( j-- ) {

                  if( !environment(list[j]) ) continue;

                  if( wizardp(list[j]) )
                    tell_object(list[j],"ף����տ��֡�\n");

               if(  ! list[j]->query("deng long") && 
                         ! list[j]->query("denglong_have") )
                   {/*
                    tell_object(list[j],HIM"Զ����Լ������һ���������޵���������������\n\n"NOR);
                    tell_object(list[j],HIM"��������������ˡ�������\n\n"NOR);
                    tell_object(list[j],"ĳ�����ĸ����㣺����Ϸ�Ĵ������ڳ���ȱ��ά��������ʱ�䲻׼������\n");*/
                    tell_object(list[j],HIR"����Ѫ������"NOR"ף���Ԫ������죡\n");
                    if( random(3) ==1 )
                      {
                    list[j]->set("denglong_have",1);
tell_object(list[j],HIR"����Ѫ������"NOR"�͸���һ��������ף�������³ɣ��������⡣\n");
                    clone_object("/u/lxh/obj/deng")->move(list[j]);
                      }

                   }
  
                      if(  wizardp(list[j])     ) continue;
               
             }               
        command("say "+"��Ϸ��������. " );

return "��Ϸ��������, �����������С�����" ;

}

