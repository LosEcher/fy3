inherit NPC;
void create()
{
  set_name("��ˮţ",({"shuiniu", "niu"}));
  set("race", "Ұ��");
  set("age", 10);

  set("combat_exp", 10000);
  set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��","ţ��" }) );
  set("verbs", ({ "bite"}));
  set_temp("apply/attack", 10);
  set_temp("apply/armor", 20);

  setup();
}

