// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("ׯ��",({"zhuang ding","zhuang","ding"}));
	set("gender", "����" );
	set("age",24);
	set("str",20);
	set("cor", 30);
	set("mingwang",-1);
	set("cps", 30);
	set("int",30);
	set("con",20);
	set("long",
	"Ӣ��������ò���˰�������û��ǲ�Ҫ��������\n"
	);
	set("combat_exp",150000);
	set_skill("blade",50);

	set("attitude", "heroism");
	set_skill("dodge",50);
	set_skill("parry",50);
	
	set_skill("unarmed",50);
	set_temp("apply/defense",50);
	set_temp("apply/attack",30);
	set_temp("apply/armor",40);
	setup();
	
	carry_object("/obj/weapon/blade")->wield();
	carry_object("/obj/cloth")->wear();
	add_money("silver",5);
}
