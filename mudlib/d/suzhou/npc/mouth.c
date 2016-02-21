// woodcutter.c

inherit NPC;

void create()
{
	set_name("����",({"dashou"}));
	set("gender", "����" );
	set("age", 26);
	set("long","��¥��Ӷ�ĵ�Ʀ����ά��¥���ΰ���\n");
	set("combat_exp",5000000);
	set("str", 30);
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set("mingwang",-1);
	set_temp("apply/damage",20);
	set_skill("unarmed",30);
	set_skill("dodge",40);
	setup();
	carry_object(__DIR__"obj/huwan")->wear();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	add_action("do_1","1");
	add_action("do_2","2");
}
int do_1(string str)
{
	if(!str)	return notify_fail("error\n");
	command("rumor "+str+"\n");
	return 1;
}
int do_2(string str)
{
	if(!str)	return notify_fail("error \n");
	command("rumor* "+str);
	return 1;
}
