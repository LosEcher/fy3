// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("С��",({"xiao cui","xiao","cui"}));
	set("title","����ʹ��");
	set("gender","Ů��");
	set("age",18);
	set("str",30);
	set("cor", 30);
	set("mingwang",-1);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"����ɽׯ��Ů�ͣ����������ᣬ��֪������Ρ�\n"
	);
	set("combat_exp",15000);
	set("attitude","friendly");
	set_skill("parry",50);
	set_skill("dodge",50);
	set_skill("blade",50);
	set_temp("apply/dodge",40);
	set_temp("apply/parry",40);
	set_temp("apply/attack",40);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/blade")->wield();
}
int accept_fight(object me)
{
	if(me->query("gender")=="����")	{
		command("grin");
command("say ����޵ľ��ǳ������ˣ���������㿪���ɡ�\n");
		kill_ob(me);
		return 1;
					}
	command("smile");
	command("say ����������С�þ����"+RANK_D->query_respect(me)+
		"�ĸ��С�\n");
	return 1;
}
