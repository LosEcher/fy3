inherit NPC;
void create()
{
   set_name("���",({"rui chu"}));
   set("age","Ů��");
   set("nickname","С��Ů");
   set("age",15);
   set("combat_exp",200);
   
   set_skill("unarmed",5);
   set("chat_chance",4);
   set("chat_msg",({
   "�����:���캣������ҹ����������,�ҿ�û����.\n",
   "�����:��ǰС���ӳ���������.\n",
   }));
   setup();
   carry_object("/obj/armor/female5-cloth.c")->wear();
}