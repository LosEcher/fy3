// aobai.c
inherit NPC;


void create()
{
	set_name("����", ({
		"ao bai",
		"ao",
		"bai",
	}));
	set("long",
		"���������޵�һ��ʿ����һϮ��߽��С�����Ŀ��࣬\n"
		"��ò������̫��Ѩ�߸߹����ƺ��������书��\n"
	);

	set("nickname", "���޵�һ��ʿ");
	set("gender", "����");
	set("attitude", "aggressive");

	set("age", 50);
set("mingwang",-9000);
	set("str", 25);
	set("int", 25);
	set("con", 25);
	set("dex", 25);
	set("max_kee", 1500);
	set("max_gin", 1500);
	set("force", 1500);
	set("max_force", 1500);
	set("force_factor", 150);
	set("combat_exp", 150000);
	set("score", 50000);

	set_skill("force", 90);
	set_skill("hunyuan-yiqi", 90);
	set_skill("dodge", 90);
	set_skill("shaolin-shenfa", 95);
	set_skill("parry", 100);
	set_skill("literate", 55);
	set_skill("fengyun-shou", 90);

	map_skill("force", "hunyuan-yiqi");
	map_skill("dodge", "shaolin-shenfa");
	map_skill("parry", "fengyun-shou");


        set("chat_chance_combat", 10);  
        set("chat_msg_combat", ({
                " ����ŭ������Ҳ�����˯�������������� ��\n",
                (: command("say ������������" + RANK_D->query_rude(this_player())+"!\n") :),
		(: command("pain") :),
                      }) );
        setup();
        carry_object("/d/city2/obj/anmenkey")->wield();
        carry_object("/d/city2/obj/jinduan")->wear();
        carry_object("/d/city2/obj/yaoshi")->wield();
        add_money("gold",2);
}

void die()
{
        message("vision","\n���ݿ�е����벻����һ��������Ȼ�������֣�\n","/d/city2/aobai6");        	 
        message("vision","���ݶ���һ�٣�̾��������ֻ��ϧ�ҵ���ô�౦������\n","/d/city2/aobai6");        	 
        message_vision("$N����һ�������ˣ�\n", this_object());
        ::die();
}

