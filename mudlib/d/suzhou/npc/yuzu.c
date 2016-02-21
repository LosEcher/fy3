// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("����",({"yuzu"}));
	set("gender", "����" );
	set("age",24);
	set("str",50);
	set("cor", 30);
	set("mingwang",-1);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("long",
	"Ӣ��������ò���˰�������û��ǲ�Ҫ��������\n"
	);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	set_temp("apply/damage",20);
	set_temp("apply/armor",40);
	set("combat_exp",10000);
	set_skill("blade",50);

	set("attitude", "heroism");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"����Ц������㵱������ʲ��ط�������������Ұ��\n",
	"����е�������ס�ְɣ��ҿ�����ҵ��֡�\n",
	}) );

	set_skill("dodge",50);
	set_skill("parry", 50);
	
	setup();
	
	carry_object("/obj/weapon/blade")->wield();
	carry_object("/obj/cloth")->wear();
}
