// woodcutter.c

inherit NPC;

void create()
{
	set_name("�ְ�",({"jieba","jie ba","ba"}));
	set("gender", "����" );
	set("age",30);
	set("long","�������ǵĵ�Ʀ��\n");
	set("combat_exp",20000);
	set_skill("unarmed",30);
	set_skill("parry",30);
	set_skill("dodge",30);
	set("chat_chance",2);
        set("chat_msg", ({
		"�ְ���Χǽ��������һ�£���ɫ�ƺ���Щ���š�\n",
		"�ְ�С���ֹ������ﲮ�⡣������֪������\n",
		"�ְԶ�ݺݵ����������ģ�������������������\n",
}));
	set("mingwang",-1);
	set("max_force",250);
	set("force",250);
	set_temp("apply/attack",20);
	set_temp("apply/defense",50);
	set_temp("apply/armor",50);
	set_temp("apply/damage",5);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",5);
}
