inherit NPC;
void create()
{
     set_name("ʯ��",({"shilong","shifu"}));
     set("gender","����");
     set("shen_type",1);
     set("age",53);
     set("nickname","��ɽ��");
     set("combat_exp",1200000);
     set("str",23);
     set("max_kee",1000);
     set("kee",1000);
     set("max_force",2000);
     set("force",2000);
     set("force_factor",100);
     set_skill("force",120);
     set_skill("unarmed",120);
     set_skill("literate",120);
     set_skill("dodge",120);
     set_skill("parry",120);
     setup();
     carry_object("/obj/cloth")->wear();
     add_money("gold",1);
}