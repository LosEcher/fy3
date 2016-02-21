// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("��ұǬ",({"gongye qian","gongye","qian"}));
	set("gender", "����" );
	set("age",35);
	set("str",30);
	set("mingwang",1);
	set("cor",30);
	set("cps",30);
	set("int",30);
	set("con",30);
	set("long",
		"Ľ���Ĵ�ҳ�֮�Σ�ʵ��Ľ�ݼҵ���ı��\n"
	);
	create_family("����Ľ��",3,"�ҳ�");
	set("combat_exp",600000);
	set("attitude", "heroism");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	        (: perform_action,"unarmed.canhezhi" :),
        (: perform_action,"unarmed.tanyunshou" :),
	}) );
	set_skill("unarmed",70);
	set_skill("parry",70);
	set_skill("force",70);
	set_skill("dodge",70);
	set_skill("murongquanfa",80);
	set_skill("murongxinfa",80);
	set_skill("murongshenfa",80);
	set_skill("douzhuanxingyi",100);
	map_skill("unarmed","murongquanfa");
	map_skill("dodge","murongshenfa");
	map_skill("force","murongxinfa");
	map_skill("parry","douzhuanxingyi");
	        set("max_force", 1500);
        set("force", 1500);
	set("force_factor",10);
	setup();
	carry_object("/obj/cloth")->wear();
}

