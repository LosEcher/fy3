// dizi.c

inherit NPC;

void create()
{
	int skill;

	set_name("������ʿ", ({ "xiangshi", "suanming"}) );
	set("gender", "����" );
	set("age", 40+random(30));

	set("combat_exp",30000);
       set_skill("parry",40);
	set_skill("dodge", 40);
	set_skill("unarmed", 40);
        set("chat_chance", 8);
        set("chat_msg", ({
                "���Ի�������,��֪��ȥδ��!\n",
                (: random_move :), 
                "�������й©.������������.\n",
                (: random_move :), 
                "ƾ������֮ѧ,�������ѽ���!\n",
                (: random_move :) 
        }) );

set("inquiry",([
"����":"��Ǯ����,���۶��.\n",
]));
	setup();
	carry_object("/obj/cloth")->wear();
            add_money("silver",10);
}
int accept_object(object who,object item)
{ 
   object ob;
       ob=this_object();
      if (item->query("money_id"))
      switch (random(4))
   { case 1:
      message_vision("$N��$n��ϸ���˿�,��:������ͥ����,��������,��������!\n",ob,who);
      return 1;
     case 2:
          message_vision("$N������ָ���˰���,���ź������ɻ�
�ض�$n��:��������,���������չ�Ҳ,ɽ���㲻����!\n",ob,who);
          return 1;
         case 3:
        message_vision("$N�����۾�,��$n��������һ��������:����
���������ǹ�Ⱦ�ѧ,��һ���˾���ʩչ!",ob,who);
         return 1;
         case 4:
         message_vision("$N��̾�����ڳ���,��$n��:������������,��
������,�����׶༪��,������С��!\n",ob,who);
         return 1;
    }
   else
    command("say ɽ�˰���,��֮�е�,�ⶫ�����Լ����ܰ�!\n");
return 0;
}
