inherit NPC;
void create()
{
     set_name("��һ��",({"hua yikun"}));
     set("gender","����");
     set("title","[Ǭ����]");
     set("long","�ݺὭ����ʮ�أ��˺�ʧ�ٽ�����ʮ�ꡣ�벻
�����ڴ˴�.\n");
     set("age",98);
     set("combat_exp",500000);
     set("str",36);
     set("max_kee",1500);
     set("kee",1500);
     set("max_force",1700);
     set("force",1700);
     set("force_factor",30);
     set_skill("dodge",160);
     set_skill("parry",160);
     set_skill("sword",160);
     set_skill("force",160);
     set_skill("unarmed",160);
     setup();
     carry_object("/d/sandboy/obj/hat")->wear();
     carry_object("/d/sandboy/obj/s_cloth")->wear();
     add_money("gold",4);
}