inherit NPC;
#include <localtime.h>
void create()
{
  set_name("����",({"haha"}));
  set("age",33);
  set("str",34);
  setup();
}
void init()
{
  add_action("do_test","test");
}
int do_test()
{ int i;
  object ob=this_player();
 mixed *local;
 local = localtime(time()*60);  i=local[LT_MDAY] + (local[LT_HOUR]>23? 1 : 0);
  command("say "+i);
  return 1;
}