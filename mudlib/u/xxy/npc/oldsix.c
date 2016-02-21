inherit NPC;
inherit F_VENDOR;

int give_dust();
int HAVE_DUST=1;

void create()
{
	set_name("����", ({ "oldsix","laoliu" }) );
    set("title","̫�ŵ�������");
	set("gender", "����" );
	set("age", 27);
	set("long",
		"��������mud�ĸ���,̫�Ÿ�нƸ������.\n");
	set("chat_chance", 5);
	set("chat_msg", ({
		"�����Եõ�˵�����۲��������磬������нˮ���ٰ���\n",
		"������������û�����������,̫�ŵ�Ƣ���е�Ź֡�\n",
		"����������������˵̫������Ҫ���Ҽ�н����\n",
		"����������Ҫ�Ǹ��۸���,���С���ˣ�\n",
	}));
	set("shen_type", 1);
	set("combat_exp", 3000);
        set("str", 17);
        set("dex", 20);
        set("con", 17);
        set("int", 22);
	set("attitude", "peaceful");
	set("vendor_goods", ([
                     "�˲�":     "/d/yangzhou/npc/obj/renshen",
                     "����":     "/d/yangzhou/npc/obj/jitui",
                     "�ƺ�":     "/d/yangzhou/npc/obj/jiuhu",
	]) );
        set("max_force", 200);
        set("force", 200);
        set("force_factor", 5);


        create_family("�Ϻ�����", 6, "����");

        set("combat_exp", 5000);
        set("score", 5000);

		set_skill("force", 32);
		set_skill("parry", 32);
		set_skill("dodge", 32);
		set_skill("sword", 32);

      	set_skill("suiyu-force",20);
      	set_skill("lanhua-finger",15);
      	set_skill("bagua-steps",25);
	
		map_skill("dodge",  "bagua-steps");
		map_skill("unarmed","lanhua-finger");
		map_skill("parry",  "lanhua-finger");
		map_skill("force",  "suiyu-force");

		set("inquiry", ([
			"name" : "�Ҿ��������� ���������ң������Ѳ�������Ƥ����",
			"����" : "�Ҿ��������� ���������ң������Ѳ�������Ƥ����",
			"here" : "��,�㵽��̫�ŵļһ��Ҵ�������ô?���ɲ��ҡ���",
			"jiuhua" : (: give_dust :),
		]) );	
		
		setup();
        carry_object("/obj/cloth")->wear();
		add_money("coin", 100);
}

void init()
{
        ::init();
        add_action("buy_object", "buy");
        add_action("do_vendor_list", "list");
}
int give_dust()
{
  object me,ob;

  me=this_player();
  if ( me->query("family/family_name")!="�Ϻ�����" ){
    command("say ����Ǹ���˰ɣ� ������ʲô�ö�������\n");  
//	kill_ob(me);
	return 1;
	}
  if( me->over_encumbranced() ) return notify_fail("���Ѿ����ɹ����ˣ�\n");

  if(HAVE_DUST==0)
    write("����˵���������ˣ��Ż���¶���Ѿ��������ˡ�\n");  
  else  
  {
  clone_object("/u/wen/obj/jiuhua")->move(me);

    write("����˵���� �ðɣ���žŻ���¶������ȥ�ɡ�\n");  
    message_vision("������$nһ����ҩ���߼�üŪ�۵�Ц��Ц��\n",this_object(),me);   
    
    HAVE_DUST=0;   
  }

  return 1;
}
