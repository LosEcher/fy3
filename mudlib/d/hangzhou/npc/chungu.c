// by snowcat oct 15 1997

inherit NPC;

void create()
{
  set_name("���", ({"cun gu","girl"}));
  set("gender", "Ů��");
  set("combat_exp", 100000);
  set("age", 15);
  set("per", 30);
  set("chat_chance",20);
    set("chat_msg",({
          (:random_move:),
          }));          
  set("attitude", "friendly");
  set("shen_type", 1);
  set_skill("unarmed", 80);
  set_skill("parry",80);
   set_skill("dodge",80);

  setup();
  carry_object(__DIR__"obj/hualan")->wear();
}

