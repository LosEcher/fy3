inherit NPC;

void create()
{
   set_name("寅虎", ({ "tiger","laohu" }) );
   set("race", "野兽");
   set("age", 23);
   set("long", "额头上一个大大的王字,乃是百兽之王。\n");
   
   set("str", 20);
   set("cor", 24);
   set("combat_exp",95000);
   set("kee",1300);
   set("max_kee",1300);

   set("limbs", ({ "头部", "身体", "尾巴", "左前爪","右前爪" "左后爪","右后爪" }) );
   set("verbs", ({ "bite", "claw" }) );


   set_temp("apply/attack", 20);
   set_temp("apply/armor", 20);

   set("chat_chance",5);
   set("chat_msg",({
  "寅虎一声长啸,整个石室摇摇欲坠,碎石不断掉下.\n",
  "寅虎弓身向前,两爪刨地,不一会就挖出了两条凹槽.\n",
  }));
   setup();
}

void die()
{
  message_vision("$N狂啸一声,石室中平生一阵狂风,转眼间不见了.\n",this_object());
  new(__DIR__"obj/hupi.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}