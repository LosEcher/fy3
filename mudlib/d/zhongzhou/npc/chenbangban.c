inherit NPC;
string ask_quxiao();
void create()
{
	set_name("�°��",({"chen bangban","chen"}));
   set("gender","����");
   set("age",34);
   set("combat_exp",90000);
   set("long","����㱻�ٸ�ͨ��,ֻҪ��������ȡ��
 ͨ��������.\n");
   
   set_skill("unarmed",30);
   set("nickname","Ǯ���ֳ�");
   set_skill("force",30);
   set_skill("parry",30);
   set_skill("dodge",30);
set("inquiry",([
  "ȡ��ͨ��":(:ask_quxiao:),
  ]));
   setup();
   carry_object("/obj/std/armor/tiejia")->wear();
}
string ask_quxiao()
{
  object ob=this_player();
  int money;
  if (!ob->query("oldsix_flag/tongji")||ob->query("oldsix_flag/tongji")!=1)
  return "���ֲ���ͨ����,ȡ��ʲô?";
  money=ob->query("oldsix_flag/long");
  switch(money)  {
    case 0:
    case 1: return "ȡ��ͨ��Ҫ10���ƽ�.";
    case 2: return "ȡ��ͨ��Ҫ2���ƽ�.";
    case 3: return "ȡ��ͨ��Ҫ20������.";
}
 return;
}
int accept_object(object who,object item)
{
  if (!item->query("money_id"))  {
 command("say tnnd,���ⲻ�ǵ���.\n");
 return 0;  }
  if (!who->query("oldsix_flag/tongji"))  {
 command("say ��Ȼ��û��ͨ��,������Ǯ����������.\n");
 return 1;  }
 if ((who->query("oldsix_flag/long")==1&&item->value()<100000)
||(who->query("oldsix_flag/long")==2&&item->value()<20000)
||(who->query("oldsix_flag/long")==3&&item->value()<2000))  {
 
  command("say ����û�����ּۻ��۵ķ�.\n");
  return 0;   }
 who->delete("oldsix_flag/tongji");
 who->delete("oldsix_flag/long");
 command("chat �ٸ�ȡ����"+who->query("name")+"��ͨ��.\n");
 return 1;    
}
