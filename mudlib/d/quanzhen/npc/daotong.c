// daotong.c ��ͯ
// By Lgg,1998.10

inherit NPC;

void create()
{
	set_name("��ͯ", ({"tong", "dao tong"}));
	set("gender", "����");
	set("age", 14);
	set("long", 
		"����һλС��ͯ��������Ͳ������������̴棬����Ц����\n"
		"���������ǡ�\n"
);
	set("attitude", "friendly");

	set("str", 20);
	set("int", 20);
	set("con", 20);
	set("dex", 20);

	set("kee", 300);
	set("max_kee", 300);
	set("gin", 200);
	set("max_gin", 200);
	set("force", 300);
	set("max_force", 300);
	set("force_factor", 0);
	
	set("combat_exp", 15000);
	 
	set_skill("force", 50);
	set_skill("xiantian-qigong", 40);    //��������
	set_skill("dodge", 50);
	set_skill("jinyan-gong", 50);   //���㹦
	set_skill("parry", 50);
	set_skill("unarmed",50);

	map_skill("force", "xiantian-qigong");
	map_skill("dodge", "jinyan-gong");
	
	setup();
	
	carry_object(__DIR__"obj/grayrobe")->wear();

}

