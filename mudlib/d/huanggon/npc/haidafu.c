inherit NPC;
string do_try();

void create()
{
   set_name("����",({"hai dafu"}));
   set("gender","����");
   set("nickname","����̫��");
   set("age",56);
   set("combat_exp",500000);
   set("long","�����ƹ����ŷ�,��������������빬����.\n");
   
   set_skill("unarmed",80);
   set_skill("parry",80);
   set_skill("dodge",80);
   set_skill("huashan-quanfa",80);
   set_skill("feiyan-huixiang",80);
   map_skill("unarmed","huashan-quanfa");
   map_skill("parry","huashan-quanfa");
   map_skill("dodge","feiyan-huixiang");
   
   set("max_force",800);
   set("force_factor",50);
   
   set("inquiry",([
   "����":(:do_try:),
   "̫��":(:do_try:),
   "�빬":(:do_try:),
   ]));
 setup();
 add_money("silver",1);
}
void init()
{
  add_action("do_taijian","y");
  add_action("do_taijian","yes");
  add_action("do_no","no");
 }
string do_try()
{
  object ob=this_player();
  if (ob->query("gender")=="Ů��")
    return "���⴦�е���̫��,���ǹ�Ů,���빬,�±��Ӱ�.";
  ob->set_temp("will_taijian",1);
  return "�������̫���빬����?(yes/no).";
}
int do_taijian()
{
   object ob=this_player();
 if (ob->query("gender")=="Ů��")  {
 command("say ���Ǹ�Ů��,����ʲô����?\n");
 return notify_fail("");
}
 if (!ob->query_temp("will_taijian")) {
 command("say ʲôyes��no,�����Ҳ���ʶӢ��.\n");
 return notify_fail("");
}
 message_vision("$Nȡ����С����,��$n���·ɿ��һ��,
 ������ץ�˰ѵ��ݻ�һ��,������������Ѫ��ʱֹס��.
 ......  ......\n",this_object(),ob);
 command("say �Ӵ��Ժ�,��������ɳ���ʹ�,��������.\n");
 ob->set("gender","����");
 return 1;
}
int do_no()
{
   object ob=this_player();
   ob->delete_temp("will_taijian");
 command("say ���ٺú�����,�����ҵ�����.\n");
   return 1;
}    