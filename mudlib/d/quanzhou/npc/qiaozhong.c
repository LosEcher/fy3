inherit NPC;

void create()
{
	int skill;

	set_name("��������", ({ "oldman", "laoren","qiaozhong"}) );
	set("gender", "����" );
	set("age", 60+random(30));
	set("long", "��������������,��������д����һ���Ĳ�ɣ��\n");

	set("combat_exp",1000+random(3000));
       set_skill("parry",20+random(20));
	set_skill("dodge", 20+random(20));
	set_skill("unarmed", 20+random(20));
	setup();
	carry_object("/obj/cloth")->wear();
            add_money("silver",2);
}
void init()
{
	object ob;
        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("meeting");
                call_out("meeting", 1, ob);
        }
}
void meeting(object ob)
{ switch(random(3))
  {   case 1:
        command("say �����������ӹ�,��û�೤���Ӻû���!\n");
        break;
      case 2:
        message_vision("$Nһ������ȭͷ������,��ʹ���������!\n",this_object());
        break;
      case 3:
       command("smile");
        break;
    }
}