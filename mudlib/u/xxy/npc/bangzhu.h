#include <localtime.h>
int check_banghui();
int re_rank();
string check_player();
object ob=this_player(),me=this_object();
int ask_jiaru()
{
  int cla;
  cla=check_banghui();
  switch(cla)     {
       case 1:    
                      {        
              tell_object(ob,"���"+me->query("name")+"����ͬһ���!\n");
              return 1;
                            }
    case 2:            
                      {
             tell_object(ob,"��Ҫ������(tuoli)ԭ���İ������ټ����µİ��!\n");
             return 1;
                    }
    case 0:
            {
         command("say "+RANK_D->query_respect(ob)+"��Ը���뱾��,����(jiaru "+
             me->query("id")+").\n");
         command("yaoqing "+ob->query("id"));
   return 1;
       }
            }
  return;
}
int check_banghui()
{
   string bm_ob,bm_me;
   bm_ob=ob->query("banghui");
   bm_me=me->query("banghui");
 if (bm_ob==bm_me) 
                          return 1;
 if (bm_ob&&bm_ob!=bm_me)
                                     return 2;
 else return 0;
} 
int re_rank()
{
   string oldrank,newrank;
      int cla;
  cla=check_banghui();
 if (cla!=1) 
            return notify_fail("�㲻��"+me->query("banghui")+"����.\n");
 newrank=check_player();
 oldrank=ob->query("title");
 if (ob->query("banghui")+newrank==oldrank)
        {     command("say ����书���ʱ�䲢û��󳤽���������ְ?\n");
               return 1;
        }
   command("say ������书����,���ڰ��е���"+newrank+"һְ.\n");
   command("chat �Խ�����,"+ob->query("name")+"��"+ob->query("banghui")+
"�е���"+newrank+"һְ.\n");
   ob->set("title",ob->query("banghui")+newrank);
   tell_object(me,"�㱻ί��Ϊ"+ob->query("title")+".\n");
   return 1;
}
int ask_renwu()
{
   mixed *local;
  int t,i;
 string renwu;
i=check_banghui();
if (!i==1)   {       command("say ���Ҳ���ͬһ���İ�!\n");     return 1;}
   local = localtime(time()*60);
t=local[4];
 renwu=menpai[t+1];
 command("say ����µ������ǹ���"+renwu+".\n");
return 1;
} 
