inherit NPC;
void create()
{
   set_name("Ϲ��������",({"old woman","old","woman"}));
   set("age",75);
   set("shen_type",1);
   set("combat_exp",5000);
   set("gender","Ů��");

   set_skill("unarmed",40);
   set_skill("dodge",20);
   set_skill("parry",20);
   set_skill("literate",30);
   set_skill("force",20);

   set("chat_chance",10);
   set("chat_msg",({
     "��,��ɽ������ô����������.\n",
     "����Ҽ�ϱ���ͻ�,�Ҳ�û������ͷ��ȥ��.\n",
    }));

   setup();
   carry_object("/obj/armor/cloth")->wear();
   add_money("silver",random(4));
}