// wuzhirong.c
inherit NPC;

void create()
{
	set_name("��֮��", ({ "wu zhi rong", "wu" ,"rong"}) );
	set("gender", "����" );
	set("age", 40);
	set("int", 28);
	set("long",
		"��ԭ�ǹ鰲�ص�֪�أ���̰�����������պ�֮�гݣ��ձ��淢��ְ��\n"
               +"�����ü��������һ����֪���Ǻ��� ��\n");
	set("attitude", "peaceful");
	set("shen_type", -1);
	set("str", 25);
	set("int", 25);
	set("con", 25);
	set("dex", 25);
	set("max_kee", 100);
	set("max_gin", 100);
	set("force", 100);
	set("max_force", 100);
	set("combat_exp", 5000);
	set("score", 5000);
       set_skill("literate", 100);

	setup();
carry_object("/obj/cloth")->wear();
	carry_object("/d/city2/obj/goldleaf");
}
