// woodcutter.c

inherit NPC;

void create()
{
	set_name("��Ժ",({"huyuan"}));
	set("gender", "����" );
	set("age", 26);
	set("long","����Ļ�Ժ��ƽʱҲæ�Ÿ�Щ�ӻ\n");
	set("combat_exp",5000);
	set("str", 30);
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set("mingwang",-1);
	set("pursuer",1);
	set_temp("apply/damage",20);
	set_skill("unarmed",30);
	set_skill("dodge",40);
	setup();
	carry_object("/obj/cloth")->wear();
}
