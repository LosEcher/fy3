#include <ansi.h>
inherit NPC;
void create()
{  
	set_name("����",({"xuxian","xu xian","xu"}));
       set("shen_type",1);
       set("age",24);
       set("gender","����");
       set("combat_exp",20000);
       set("str",15);
       set("per",30);
       set_skill("unarmed",30);
       set_skill("parry",30);
       set_skill("dodge",30);
	set("chat_chance", 5);
       set("chat_msg",({
               HIC+"����͵͵��б���������ߵİ�����.\n"+NOR,
               HIC+"���ɼ����ð�����̫����,�Ͽ��ƿ�һ��!\n"+NOR,
               HIC+"���ɼ��������ڴ�����,��æװ�������¹���!\n"+NOR,
            }));
       setup();
      carry_object("/obj/cloth")->wear();
      add_money("silver",10);
}   
