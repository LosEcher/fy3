// dizi.c

inherit NPC;

void create()
{
	int skill;

	set_name("���ε���", ({ "daoren", "daoshi","yunyoudaoren"}) );
	set("gender", "����" );
	set("age", 30+random(40));
	set("long", "�ɷ����,���·���,һ����֪�Ǵ�����ͷ֮�ˡ�\n");

	set("combat_exp",40000);
       set_skill("parry",50);
       set_skill("whip",50);
	set_skill("dodge", 50);
	set_skill("unarmed", 50);
        set("chat_chance", 8);
        set("chat_msg", ({
                "��λʩ��լ���ʴ�,���벼ʩһ��!\n",
                (: random_move :), 
                "ƶ��Ϊ�����䵱�����,��������,����ʩ.\n",
                (: random_move :), 
                "��һ��Ǯ������,�����ø�������!\n",
                (: random_move :) 
        }) );

	setup();
	carry_object("/d/quanzhou/obj/taijicloth")->wear();
       carry_object("/d/quanzhou/obj/fuchen")->wield();
            add_money("silver",10);
}
int accept_object(object who,object item)
{ 
   object ob;
       ob=this_object();
      if (item->query("money_id"))
   {  message_vision("$N��$n���׵�:ƶ���������лʩ��!\n",ob,who);
      return 1;
    }
   else
    command("say ��������Ҳ��ƭ,��ү�Ĳ�����!\n");
return 0;
}