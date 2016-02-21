#include <ansi.h>

inherit NPC;

void create()
{
  set_name("����",({ "meng yun", "dizi","girl" }) );
  set("gender", "Ů��" );
  set("title",YEL+"�۽��"+NOR);
  set("long", "�����ֵ���֮һ,ר�ſ�����Щ͵������.\n");
  set("age", 15+random(10));
  set("attitude", "peaceful");
  set("str", 50);
  set("per", 50);
  set("combat_exp",40000);
  set("force",500);
  set("max_force",500);
  set("force_factor", 100);
  set("max_gin", 400);
  set("max_kee", 400);
  set("max_sen", 400);
  set("inquiry",([
  "��ȥ":"Ҫ���ȥ,�ȹ��������.\n",
  ]));
  set_skill("unarmed",50);
  set_skill("dodge",50);
  set_skill("parry",50);
  set_skill("whip",50);
  set_skill("force",50);
  set_skill("baihua-zhang",50);
  set_skill("qiongya-bufa",50);
  map_skill("dodge","qiongya-bufa");
  map_skill("parry","baihua-zhang");
  map_skill("unarmed","baihua-zhang");
  
  set("chat_chance",6);
  set("chat_msg",({
  "����˵��:�������Щ������å��.\n",
  "���ƺٺ�һЦ,��������,���ȥ������.\n",
  "���Ƶ�:Ҫ���ȥ,���ȹ��������.\n",
}));

  setup();
  carry_object("/d/hainan/obj/triger_cloth")->wear();
  carry_object("/d/hainan/obj/whip")->wield();
}
