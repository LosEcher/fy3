inherit NPC;
inherit F_MASTER;
string do_yaoqing();
void create()
{
  set_name("����",({"peng zhanglao","peng"}));
  set("gender","����");
  set("age",65);
  set("long","�װ����֣�����һ��԰׺��ӣ���������ǧ����������Ȼ���Ǹ���
��ʿ�������ģ����һ���۾�Ƕ��Բ�Ĺ�һ������֮�У�ֻ������ϸ�죬��ϸ����
ӨȻ�й⣬�����������ʡ�\n");
  set("mingwang",-3000);
  set("combat_exp",700000);
  set("force",1200);
  set("max_force",1200);
  set("title","ؤ��Ŵ�����");
  set("max_kee",1200);
  set("force_factor",30);
  set("food",250);
  set("banghui","ؤ��");
  set("water",250);

  set_skill("unarmed",140);
  set_skill("dodge",140);
  set_skill("parry",140);
  set_skill("staff",140);
  set_skill("force",140);
  set_skill("huntian-qigong",140);
  set_skill("xianglong-zhang",140);
  set_skill("dagou-bang",140);
  set_skill("xiaoyaoyou",140);
  map_skill("dodge","xiaoyaoyou");
  map_skill("force","huntian-qigong");
  map_skill("staff","dagou-bang");
  map_skill("unarmed","xianglong-zhang");
  map_skill("parry","xianglong-zhang");

  set("inquiry",([
    "ؤ��":"��ؤ��ֶ�鲼����,����������ؤ����?",
    "����ؤ��":(:do_yaoqing:),
    "���":(:do_yaoqing:),
      ]));
  setup();
  carry_object("/obj/weapon/sword")->wield();
  carry_object("/obj/cloth")->wear();
 add_money("silver",30);
 }
void init()
{
  object ob;
  ::init();
 if (interactive(ob=this_player())&&!is_fighting()) {
     remove_call_out("greeting");
      call_out("greeting",1,ob);
  }
}
void greeting(object ob)
{
  string banghui;
 banghui=ob->query("banghui");
 if(banghui=="ؤ��")  {
  if (!ob->query_temp("gaibang/peng"))  {
   command("give 2 silver to "+ob->query("id"));
   command("say ȥ��Щ�Ե�,�ȵ�,Ҳ�������ַ���.\n");
   ob->set_temp("gaibang/peng",1); 
  return;
  } 
command("heng "+ob->query("id"));
return;
 }
command("say ��Ǯ�Ĵ�ү,���������Ͻл�,ʩ�Ἰ�İ�.\n"); 
return;
 }
string do_yaoqing()
{
  object ob;
 string banghui;
 ob=this_player();
 banghui=ob->query("banghui");
 if (ob->query("balance")>500000)
  return "������ô��Ǯ,Ҫ����ؤ��,�Ȱ�Ǯ��ɢ��.\n";
 if (!banghui)  {
   ob->set_temp("oldsix/target",this_object());
  return "��,��ؤ���Ҫ���������˲�,�����(jiaru peng).\n";
    }
 if (banghui!="ؤ��")
 return "����"+banghui+"�İ�,�����Ե���ô��?\n";
 else return "�ٿ�������Ц,�Ұ���ؽ���.\n";
}
int accept_object(object who,object ob)
{
  if (ob->query("money_id"))  {
 command("say ��л����,��л����,��... ...\n");
 return 1;
   }
 command("say ʲô�����,����.\n");
 return 0;
}
int recognize_apprentice(object ob)
{
  string banghui;
  banghui=ob->query("banghui");
  if (!banghui||banghui!="ؤ��")  
   return notify_fail("����ҡͷ��:�㲢����ؤ�����,�ϻ��Ӳ��ܴ��书����.\n");
	if(ob->query("score")<3000)
   return notify_fail("������ü��:������Ϊ��������Щ����,�ϻ����ٿ��ǰ�.\n");
  return 1;
}    
 
  
  
