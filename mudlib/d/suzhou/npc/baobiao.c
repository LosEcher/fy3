// music   yangzhou's ��С��

inherit NPC;
void create()
{
	set_name("����",({"baobiao","bao biao"}));
	set("gender", "����" );
	set("age",25);
	set("long",
	"�𷢱��۵�������ꡣ\n");
	set("mingwang",1);
	set("nickname","�����");
	set("combat_exp",50000);
	set_skill("unarmed",50);
	set_temp("apply/defense",70);
	set_skill("parry",50);
	set_skill("xiyang-quanshu",50);
	map_skill("parry","xiyang-quanshu");
	set_skill("dodge",50);
	set("max_force",1000);
	set("force",1000);
	set_temp("apply/damage",5);
	set_temp("apply/armor",50);
	setup();
	carry_object(__DIR__"obj/xifu")->wear();
	add_money("silver",25);
}

int accept_fight(object me)
{
	command("say �����ͣ���л����");
	return 1;
}
