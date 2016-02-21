#include <ansi.h>

inherit NPC;
inherit F_MASTER;

void create()
{
  set_name("��ڤ��", ({ "dongming zi","dongmingzi","dongming","master" }));

  set("gender", "����");
  set("age", 87);

  set("str", 20);
  set("per", 20);
  set("cor", 30);
  set("cps", 75);
  set("kar", 50);
  set("int", 40);
  set("con", 40);
  set("spi", 40);

  set("long","����˫�ۿտն���,�ƺ���û��ע����,ֻ����
��һת��,���ܿ�����������,��������˿����,
ȫ������ɢ����һ���ɫ��ã.\n");
  set("title", RED+"��ڤɽׯ"+NOR);
        set("shen_type",-1);
  set("nickname",YEL+"����"+NOR);
  set("combat_exp", 2000000);
set_skill("literate",200);
  set_skill("unarmed", 200);
  set_skill("force", 200);
  set_skill("jiuyou-xinfa", 200);
set_skill("blade",200);
set_skill("sword",200);
  set_skill("dodge", 200);
  set_skill("parry", 200);
set_skill("youming-zhang",200);
set_skill("guiyingmizong",200);
  map_skill("force", "jiuyou-xinfa");
map_skill("parry", "youming-zhang");
map_skill("dodge", "guiyingmizong");
	map_skill("unarmed","youming-zhang");
        set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
		(: perform_action,"unarmed.youming" :),
        }) );

  set("max_sen", 4500);
  set("max_kee", 3500);
  set("force", 1500); 
  set("max_force", 1500);
  set("force_factor", 40);

  set("inquiry", ([
	"name"    : "������ڤһ�ɳ��϶�ڤ��,������һ��ֻʣ����һ���ˡ�",
	"here"    : "��������,����ô������?��",
	"rumors"  : "��Ϣ���㲻ר��ѧ�գ���������ʲô��Ϣ��",
      "ɱ��":"ֻҪ��ɱ����ʮ����,�Ϸ������������,��һ��������!",
]) );

  create_family(RED+"��ڤɽׯ"+NOR, 3, "����");

  setup();
  carry_object("/obj/cloth")->wear();
	add_money("gold",3);
}
int accept_fight(object me)
{
  command("say �ٺ�,�Ϸ��ڴ�������ʮ��,�Ļ��������˵Ļ�����");
  return 0;
}

void attempt_apprentice(object me)
{
  int killer=(int)(me->query("MKS")+me->query("PKS"));
  string myrespect=RANK_D->query_respect(me);
  if (killer<30)
  {
      command("hehe");
      command("say "+myrespect+"��ɱ�˶�����,���������̵��书?");
      return;
  }
  command("nod");
  command("say ����"+myrespect+"������Ե���Ϸ��������ɣ�\n");
  command("recruit " + me->query("id") );
  return;
}
int recruit_apprentice(object ob)
{
  if( ::recruit_apprentice(ob) )
    ob->set("class", "xiake");
}
