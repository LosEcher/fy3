inherit NPC;
inherit F_SAVE;

void create()
{
  set_name("������",({"chang changfeng"}));
  set("title","˫�ƿ���");
  set("age",39);
  set("long","�ָ��ַʣ�������һ���������ڵ���,��ǰ����һ���ʯ��.\n");
	set("shen_type",-1);
  set("combat_exp",25000);
  set_skill("hammer",30);
  set_skill("parry",30);
  set_skill("dodge",30);
  set_skill("force",30);
  set_skill("unarmed",30);
  set("area","���߷ص�");

  set("chat_chance",8);
  set("chat_msg",({
  "���ʯ����ĺ��ذ�,���ϴ�Ӳ��Ҫ�ҿ���,˵����������.\n",
  "ǰ�����ʯ��ʱ,�����˽�,������·���ǲ���.\n",
  "���ӲҪ������ط�,˵�Ǹ�̫���������������.\n",
   }));
  set("inquiry",([
 "��·":"��Ǯ,��Ǯ�������ȥ.������Ҳ��.",
  ]));
	setup();
 carry_object("/obj/armor/cloth")->wear();
 carry_object(__DIR__"obj/mubei")->wield();
}
void init()
{ 
	object ob,area;
	area=new("/obj/area");
	area->create(query("area"));
	set("banghui",(string)area->query("banghui"));
	destruct(area);

 if (interactive(ob=this_player())&&!is_fighting()) {
   remove_call_out("greeting");
   call_out("greeting",1,ob);
   }
}
void greeting(object ob)
{
  string str;
 if (!ob||environment(ob)!=environment()) return;
  str=this_object()->query("banghui");
 if (ob->query("banghui")!=str)    {
  command("say ��ɽ���ҿ�,����������,��Ҫ�Ӵ˹�,���ǵø�Ǯ.\n");
  command("guard west");
  return;
            }
 command("say ԭ���Ǳ������,�ϴ����þ���.\n");
  return;
}
int accept_object(object me,object obj)
{
  if (obj->value()<20000)    {
  command("say ��Ū˭��,��������,��,��Ȼ������.\n");
   return 0;        }
  command("guard cancel");
  message_vision("$N�ÿ������·,��$n��ȥ.\n",this_object(),me);
  return 1;
}

