#include <ansi.h>
inherit NPC;
void create()
{    
      set_name("���¾�ʿ",({"dongpo","jushi"}));
      set("gender","����");
      set("age",45);
      set("shen_type",1);
      set("long","�ն�����ѧԨ��,����һ����������!");
      set("str",16);
      set("chat_chance",6);
      set("chat_msg",({
             HIC+"���ź���캺�ϣ���ɽʼ����ɽͨ��\n"+NOR,
       HIC+"������ʮ�����ɣ�����ϯ����ƿգ�\n"+NOR,
     }));
      set("combat_exp",10000+random(30000));
      set_skill("unarmed",10+random(20));
      set_skill("dodge",10+random(20));
      set_skill("literate",160);
      setup();
      carry_object("/obj/cloth")->wear();
      add_money("gold",1);
}