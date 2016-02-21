// master.c

inherit NPC;

void create()
{
	set_name("����",({"dizi"}));
	set("nickname","���ׯ");
        set("gender", "����" );
	set("age",18);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
        set("int", 24);
	set("mingwang",1);
	set("max_force",150);
	set("force",150);
        set("force_factor", 3);


        set("long",
                
	"������ȵ�������ӡ�\n");


	set("combat_exp",7000);

	set("chat_chance_combat", 10);
        set("chat_msg_combat", ({
	(: perform_action,"unarmed.tanyunshou" :),
        }) );

	set_temp("apply/defense",20);
	set_temp("apply/attack",20);
	set_skill("unarmed",20);
	set_skill("parry",20);
	set_skill("dodge",20);
	set_skill("force",20);
	set_skill("murongxinfa",20);
	set_skill("murongquanfa",20);
	set_skill("murongshenfa",20);
	map_skill("dodge","murongshenfa");
	map_skill("unarmed","murongquanfa");
	map_skill("force","murongxinfa");
	map_skill("parry","murongquanfa");

        setup();
	carry_object(__DIR__"obj/shan")->wear();
	add_money("coin",50);
}
void init()
{
	::init();
	add_action("do_hit","hit");
}
int do_hit(string name)
{
	object me,npc;
	if(!name)	return 0;
	me=this_player();
	npc=present(name,environment());
	if(npc==this_object()&&me->query("family/family_name")!="����Ľ��")	{
	message_vision("�������ŭ����"+me->query("name")+"��������ˣ��Ǿ��ݹ��Ҳ������ˣ�\n",me);
		kill_ob(me);
		me->fight_ob(this_object());
		return 1;
	}
	return 0;
}
int accept_fight(object me)
{
	if(me->query("family/family_name")!="����Ľ��")
		return notify_fail("�������˵�������Ҳ���ͬ�ţ����ǲ�Ҫ���˺���Ϊ�á�\n");
		return 1;
}
