// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("Ů��",({"nu pu","nu","pu"}));
	set("gender","Ů��");
	set("age",18);
	set("str",20);
	set("cor", 30);
	set("cps", 30);
	set("mingwang",1);
	set("int",30);
	set("con",25);
	set("long",
		"����С����Ů�ͣ��˺��������Ǹɻ�ĺ��֡�\n"
	);
	set("combat_exp",9000);
	set("attitude","friendly");
	set_skill("dodge",30);
	set_skill("unarmed",30);
	set_temp("apply/defense",30);
	set_temp("apply/attack",30);
	setup();
	carry_object("/obj/cloth")->wear();
}
