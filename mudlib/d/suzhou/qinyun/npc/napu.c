// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("����",({"nan pu","nan","pu"}));
	set("gender", "����" );
	set("age",20);
	set("str",25);
	set("cor", 30);
	set("cps", 30);
	set("mingwang",1);
	set("int",30);
	set("con",25);
	set("long",
		"����С�������ͣ��˺��������Ǹɻ�ĺ��֡�\n"
	);
	set("combat_exp",10000);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	set("attitude","friendly");
	set_skill("dodge",30);
	set_skill("unarmed",30);
	setup();
	carry_object("/obj/cloth")->wear();
}
