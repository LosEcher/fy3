//sihanfei ˼���� 16/6/98

inherit NPC;
inherit F_VENDOR;

int herefight();

void create()
{
	set_name("˼����", ({ "si","wangye" }) );
    set("title","�ɹ�����ү");
	set("nickname","������ս");
	set("gender", "����" );
	set("age", 36);
	set("long",
		"�ɹ�����ү,��ı��˫,��Ľ�����Ļ�,��һͳ����֮Ұ�ġ�\n"
		"û�������������\n");
	set("chat_chance", 5);
	set("chat_msg", ({
		"˼���ɽ��������Ų�,��ʱ��������ı�������\n",
		"˼���������:�⾪�㹬.........��\n",
		"˼���ɾ����ؿ�����һ�ۡ�\n",
	}));
	set("combat_exp", 300000);
        set("str", 42);
        set("dex", 34);
        set("con", 32);
        set("int", 29);
	set("attitude", "peaceful");
        set("max_force", 900);
        set("force", 900);
        set("force_factor", 5);
        set("score", 5000);

		set_skill("force", 120);
		set_skill("parry", 120);
		set_skill("dodge", 120);
		set_skill("sword", 120);

      	set_skill("luoying-sword",120);
      	set_skill("literate",120);
       map_skill("sword","luoying-sword");
       map_skill("parry","luoying-sword");
		set("inquiry", ([
			"���㹬" : "����һ�����صĵط�,����֮��ѧ,���ѽ�����֮�ܡ���",
			"��ӥ" : "��������ĵľ���������",
			"ս��ͼ¼" : (: herefight() :),
		]) );	
		
		setup();
        carry_object("/obj/cloth")->wear();
        carry_object("/obj/weapon/sword")->wield();
		add_money("gold", 5);
}
int herefight()
{
  object me,ob;

  me=this_player();
  if ( me->query("mingwang")>10000 ){
    command("say ����ս��ͼ¼,�ȹ�������һ�ء���\n");  
	kill_ob(me);
	return 1;
	}
    command("say �����������,���к���֮��,����һ��,����ҹ�����\n");
  return 1;
}

