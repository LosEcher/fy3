inherit NPC;
void create()
{
   set_name("��ϧ��",({"bao xiruo"}));
   set("gender","Ů��");
   set("long","���ڵ�����,�����ٰ�ţ�Ҵ�����ɩ��!\n");
   set("mingwang",6000);
   set("combat_exp",6000);
   set("title","����");
   
set("age",38);
   set("kee",500);
   set("max_kee",500);
set("food",250);
set("water",250);
   set("force",100);
   set("max_force",100);
   set("force_factor",10);

   set_skill("dodge",20);
   set_skill("force",20);
   set_skill("parry",20);
   set_skill("unarmed",20);
   set_skill("spear",30);
   set_skill("literate",20);

   set("inquiry",([
   "������":"����,��֪��?��ϧ��������ʮ������!\n",
   "�￵":"�⼸�첻֪����,�ϰ�����Ժ��!\n",
   "��ǹ":"�����ɷ�����������,�ɲ��ܸ���.\n",
  ]));
   setup();
   add_money("silver",6);
carry_object("/d/obj/cloth/skirt")->wear();
carry_object(__DIR__"obj/haltspear");
}
