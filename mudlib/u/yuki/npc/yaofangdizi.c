inherit NPC;
void create()
{
         set_name("����", ({ "yaofang dizi","dizi"}));
         set("gender", "����");
         set("age", 22);
         set("long", "����÷ׯҩ���Ĺ��µ���\n");
         
         set("per" , 27);
         set("str" , 1000);
         set("combat_exp", 120000);
         set("attitude", "killer");
         
         set("chat_chance", 8);
         set("chat_msg", ({
                 "���ڽ����ߣ�˭�ܲ�������\n",
                 "�����ĺ��ӣ������˰ɡ�\n",

 }));
         set_skill("unarmed", 200);
         set_skill("dodge", 200);
         set_skill("parry", 200);
         set_skill("liangqing-xiangyi", 200);


         set_temp("apply/attack", 2000);
         set_temp("apply/defense", 2000);

         setup();
         carry_object("/obj/cloth")->wear();
         add_money("silver",50);
}
