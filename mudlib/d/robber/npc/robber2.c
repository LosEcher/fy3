inherit NPC;
inherit F_SAVE;

void create()
{
  set_name("��һ��",({"gai yiming"}));
  set("title","�˲����");
  set("age",31);
  set("long","���˶�С�������°ͼ���,�����ȫ����:
[�˲� ��󸡢��ר�̤ѩ�޺ۡ�����ˮ�Ϸɡ�˫�̸���ʡ].\n");
  set("combat_exp",10000);
  set_skill("sword",30);
  set_skill("parry",30);
  set_skill("dodge",30);
  set_skill("force",30);
  set_skill("unarmed",30);
  set("area","���߷ص�");
	set("shen_type",-1);

  set("chat_chance",8);
  set("chat_msg",({
  "�����ϴ�����Ӣ������,����ʯ��·һ��,��������.\n",
  "�ϴ�˵,Ҫ��[�ô�����]��Ϊ[�ο�ֹ��].\n",
  "����̫��������һ��ɽ,�������Ǹ�...�Ǹ�...[��ɽ��].\n",
   }));
  set("inquiry",([
 "��·":"��Ǯ,��Ǯ�������ȥ.������Ҳ��.",
  ]));
	setup();
 carry_object("/obj/armor/cloth")->wear();
 carry_object(__DIR__"obj/gangci")->wield();
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
  command("say ����,���˰��������з���������.\n");
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

