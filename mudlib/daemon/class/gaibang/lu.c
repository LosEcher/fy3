#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string do_yaoqing();
void create()
{
	set_name("³�н�", ({"lu youjiao", "lu", "youjiao"}));
	set("nickname", "ؤ��Ŵ�����");
	set("gender", "����");
	set("age", 45);
	set("long", 
		"³�н���Ȼ�书�㲻�ö�����֣������ڽ�����ȴ����������\n"
		"��Ϊ����ؤ�����������壬���¹������䣬��ú��߹������ء�\n");
	set("attitude", "peaceful");
        set("class", "beggar");
	set("str", 25);
	set("int", 12);
	set("con", 25);
        set("banghui","ؤ��");
	set("kee", 900);
	set("max_kee", 900);
        set("shen_type",1);
	set("gin", 100);
	set("max_gin", 100);
	set("force", 1200);
	set("max_force", 1200);
	set("force_factor", 100);
	
	set("combat_exp", 100000);
	set("score", 20000);
	
	set_skill("force", 90); // �����ڹ�
	set_skill("huntian-qigong", 90); // ��������
	set_skill("unarmed", 95); // ����ȭ��
	set_skill("xianglong-zhang", 90); // ����ʮ����
	set_skill("dodge", 90); // ��������
	set_skill("xiaoyaoyou", 90); // ��ң��
	set_skill("parry", 90); // �����м�
	set_skill("staff", 85); // ��������
        set_skill("dagou-bang",90);
	
	map_skill("force", "huntian-qigong");
	map_skill("unarmed", "xianglong-zhang");
	map_skill("dodge", "xiaoyaoyou");
        map_skill("parry","dagou-bang");
        map_skill("staff","dagou-bang");
	set("inquiry",([
        "����ؤ��":(:do_yaoqing:),
"���߹�":"�����Ժ���¥��¥���Ǵ���ܶ�θ��,����һֱû��.\n",
        ]));
	
	setup();
	carry_object(__DIR__"obj/zhuzhang")->wield();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	object ob;

	::init();

	if( interactive(ob=this_player()) && !is_fighting())
	{
		remove_call_out("greeting");
		call_out("greeting",1,ob);
	}
}

void greeting(object ob)
{
	string banghui;
	if(!ob || environment(ob)!=environment()) return;
	banghui=(string)ob->query("banghui");
	if(! banghui || banghui!=query("banghui"))
	message_vision("$N��$n����һЦ����������"+YEL+"����ؤ��"+NOR+"��ô?\n",
	this_object(),ob);
	else   {
	  if (!present("mantou",ob))  {
	    new(__DIR__"obj/mantou")->move(ob);
   message_vision("$N͵͵����$nһ����ͷ.\n",this_object(),ob);
         }
          if (!present("shuiwan",ob))  {
            new(__DIR__"obj/shuiwan")->move(ob);
   message_vision("$N�ó�һ��ˮ���$n��:�ȿ�ˮ���ֵ�.\n",this_object(),ob);
              }
          return;   
     }	
}                                                                                

string do_yaoqing()
{
	object ob;
	string banghui;
	ob=this_player();
	banghui=(string)ob->query("banghui");
	if(! banghui)	{
		ob->set_temp("oldsix/target",this_object());
		return "���Ȼ���ļ�����ؤ��Ҿ�Ϊ������(jiaru lu).";
	}
	else if(banghui !=(string)query("banghui"))	{
		return "���Ȼ����"+banghui+",��������Ұ���Եװ���!";
	}
	else	return "������ؤ����ӣ������ͷ������.";
}
int recognize_apprentice(object ob)
{
  string banghui;
  banghui=ob->query("banghui");
  if (!banghui||banghui!="ؤ��")  
   return notify_fail("³�н�ҡͷ��:�㲢����ؤ�����,�ϻ��Ӳ��ܴ��书����.\n");
	if(ob->query("score")<1500)
   return notify_fail("³�н���ü��:������Ϊ��������Щ����,�ϻ����ٿ��ǰ�.\n");
  return 1;
}
   
