inherit NPC;
inherit F_VENDOR;

void create()
{
	int skill;

	set_name("�·���", ({ "wen fangda", "wenlaoban","wen","laoban"}) );
	set("gender", "����" );
	set("age", 30+random(40));
	set("long", "�¼��ϵ괫���������Ѿ��ǵ�������,����
��Ҷ�˵���ϰ�ǿүʤ��,���Ե��������,
�¼����Ӹ��Ǻ��ò��С�\n");
       set("score",5000);
             set("shen_type",-1);
	set("combat_exp",400000);
       set_skill("parry",120);
       set_skill("staff",120);
	set_skill("dodge", 120);
	set_skill("unarmed", 120);
	set("vendor_goods", ([
		"guanyin":"/d/jindezheng/obj/guanyin",
		"shuijinpin":"/d/jindezheng/obj/shuijinpin",
		"erping":"/d/jindezheng/obj/erping",
             "haierzheng":"/d/jindezheng/obj/haierzheng",  
             "qiankunhu":"/d/jindezheng/obj/qiankunhu",
	]) );

	setup();
	carry_object(__DIR__"obj/fucloth")->wear();
       carry_object(__DIR__"obj/guaizhang")->wield();
            add_money("gold",4);
}
void init()
{  object ob;	
	::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("meeting");
                call_out("meeting", 1, ob);
        }
	 add_action("do_vendor_list","list");
}
void meeting(object ob)
{ 
  if( !ob || environment(ob) != environment() ) return;
  switch(random(3))
  {   case 1:
        command("say ��λ"+RANK_D->query_respect(ob)+",����С���������ô?\n");
        break;
      case 2:
        command("�⼸��������������,���ô�Ҥ�࿪����!\n");
        break;
      case 3:
       command("smile");
        break;
    }
}

