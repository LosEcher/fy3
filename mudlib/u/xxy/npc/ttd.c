inherit NPC;
inherit F_SAVE;

void create()
{
  set_name("����Ӱ",({"hua jianying"}));
  set("title","���Ǹ���");
  set("age",35);
  set("long","�е����,�׾���Ƥ,һ����������ͻ��һ�磬
һ����ͷ�����˰��,�������õ���һ�����Ǵ�.\n");
  set("combat_exp",20000);
  set_skill("hammer",30);
  set_skill("parry",30);
  set_skill("dodge",30);
  set_skill("force",30);
  set_skill("unarmed",30);

  set("chat_chance",8);
  set("chat_msg",({
  "�ϴ�˵,�ٸ���ƶ,���Ǿ������˰�,�⻰�����е���.\n",
  "���ҿ�,���ǰ�[�ô�����]��Ϊ[����Ī��]�ĺ�.\n",
  "������ǿ�ʯ����ʱ��,�����˽�,�⼸���ж�����.\n",
   }));
  set("inquiry",([
 "��·":"��Ǯ,��Ǯ�������ȥ.������Ҳ��.",
  ]));
	setup();
 carry_object("/obj/armor/cloth")->wear();
 
}
void init()
{ object ob;
  ::init();
 if (interactive(ob=this_player())&&!is_fighting()) {
   remove_call_out("greeting");
   call_out("greeting",1,ob);
   }
}
void greeting(object ob)
{
  object npc;
  string str;
 if (!ob||environment(ob)!=environment()) return;
  npc=load_object("/d/new/robber/npc/robber1");
  str=npc->query("banghui");
command("say the banghui is "+str+".\n");
 if (ob->query("banghui")!=str)    {
  command("say �ٸ���ƶ,�����е�,���Ǯ.\n");
  command("guard north");
  return;
            }
 command("say ԭ���Ǳ������,�ϴ����þ���.\n");
  return;
}
int accept_object(object me,object obj)
{
  if (obj->value()<10000)    {
  command("say ��Ū˭��,һ������,��,��Ȼ������.\n");
   return 0;        }
  command("guard cancel");
  message_vision("$N�ÿ������·,��$n��ȥ.\n",this_object(),me);
  return 1;
}

