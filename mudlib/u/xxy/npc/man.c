inherit NPC;
#include <person.h>
void create()
{
  mapping person,skill;
  string *name;
  int i,*val;
  person=persons[random(sizeof(person))];
  skill=person["skill"];
  set_name(person["name"],({person["id"]}));
  set("age",person["age"]);
  if (person["combat_exp"]) set("combat_exp",person["combat_exp"]);
  if (!person["gender"])
  set("gender","����");
  else set("gender",person["gender"]);
  if (person["chat_chance"])  set("chat_chance",person["chat_chance"]);
  if (person["random_move"]) set("chat_msg",({ (:random_move:)}));
  if (skill)
    { name=keys(skill);
      val=values(skill);
      for (i=0;i<sizeof(name);i++)
            set_skill(name[i],val[i]);
    }
  setup();
  if (person["cloth"]) carry_object(person["cloth"])->wear();
  if (person["weapon"]) carry_object(person["weapon"])->wield();
}
       