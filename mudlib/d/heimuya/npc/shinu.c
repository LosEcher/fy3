//shinu.c
inherit NPC;
void create()
{
       set_name("��Ů", ({ "shi nu" }) );
	set("gender", "Ů��" );
	set("age", 20);
	set("long", "��Ŀ����,��������,����޲�����������������һ�ѡ�\n");
	set("shen_type", -1);
	set("combat_exp", 10000);
	set("str", 20);
	set("per", 27);
	set("dex", 22);
	set("con", 20);
	set("int", 21);
	set("attitude", "friendly");
	setup();
carry_object("/obj/armor/female6-cloth")->wear();;
	 add_money("silver",10);
}
