inherit NPC;

void create()
{
	set_name("��ͯ", ({ "mutong", "kid","littleboy"}) );
	set("gender", "����" );
	set("age", 12);
	set("long", "һ�����洿���С��ͯ������ţ�������еô������ѡ�\n");

	set("combat_exp",1000);
       set_skill("parry",12);
	set_skill("dodge", 10);
	set_skill("unarmed", 10);
	setup();
	carry_object("/d/quanzhou/obj/duangua")->wear();
       carry_object("/d/quanzhou/obj/mudi")->wield();
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
        command("say �����ǣ�������... ...���棬������ʲô����?\n");
        break;
      case 2:
        message_vision("$N�������ѣ���������ȸ��������!\n",this_object());
        break;
      case 3:
       command("smile");
        break;
    }
}