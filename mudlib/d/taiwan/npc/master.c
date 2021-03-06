#include <ansi.h>

inherit NPC;
inherit F_MASTER;

void create()
{
  set_name("洞冥子", ({ "dongming zi","dongmingzi","dongming","master" }));

  set("gender", "男性");
  set("age", 87);

  set("str", 20);
  set("per", 20);
  set("cor", 30);
  set("cps", 75);
  set("kar", 50);
  set("int", 40);
  set("con", 40);
  set("spi", 40);

  set("long","他的双眼空空洞洞,似乎并没有注意你,只在眼
光一转间,才能看到少许生气,他坐得纹丝不动,
全身隐隐散发出一层红色光茫.\n");
  set("title", RED+"幽冥山庄"+NOR);
        set("shen_type",-1);
  set("nickname",YEL+"长老"+NOR);
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
	"name"    : "我是幽冥一派长老洞冥子,现在老一辈只剩下我一人了。",
	"here"    : "本教密室,你怎么进来的?。",
	"rumors"  : "消息？你不专心学艺，又来打听什么消息？",
      "杀人":"只要你杀过三十个人,老夫就收你作传人,少一个都不行!",
]) );

  create_family(RED+"幽冥山庄"+NOR, 3, "长老");

  setup();
  carry_object("/obj/cloth")->wear();
	add_money("gold",3);
}
int accept_fight(object me)
{
  command("say 嘿嘿,老夫在此坐了六十年,哪还有年轻人的火气！");
  return 0;
}

void attempt_apprentice(object me)
{
  int killer=(int)(me->query("MKS")+me->query("PKS"));
  string myrespect=RANK_D->query_respect(me);
  if (killer<30)
  {
      command("hehe");
      command("say "+myrespect+"连杀人都不敢,怎能练本教的武功?");
      return;
  }
  command("nod");
  command("say 看来"+myrespect+"与我有缘，老夫就收下你吧！\n");
  command("recruit " + me->query("id") );
  return;
}
int recruit_apprentice(object ob)
{
  if( ::recruit_apprentice(ob) )
    ob->set("class", "xiake");
}
