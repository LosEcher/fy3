// yudaiyan.c ����� 

inherit NPC;

void create()
{
set_name("�����", ({ "yu daiyan", "yu" }));  
set("nickname","�䵱����");
	set("long", 
		"�����������������������ҡ�\n"
		"��һ���ɸɾ����Ļ�ɫ���ۡ�\n"
		"���������ʮ������ݳ����񵭳�ͣ���Ĭ���ԡ�\n");
	set("gender", "����");
	set("age",43);
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 28);
	set("int", 28);
	set("con", 28);
	set("dex", 28);
	
	set("max_kee", 1200);
	set("max_gin", 1200);
	set("force", 1200);
	set("max_force", 1200);
	set("force_factor", 50);
	set("combat_exp", 200000);
	set("score", 60000);

	set_skill("force", 100);
	set_skill("taiji-shengong", 100);
	set_skill("dodge", 100);
	set_skill("tiyunzong", 100);
	set_skill("unarmed", 100);
	set_skill("taiji-quan", 100);
	set_skill("parry", 100);
	set_skill("sword", 100);
	set_skill("taiji-jian", 100);
	set_skill("literate", 50);

	map_skill("force", "taiji-shengong");
	map_skill("dodge", "tiyunzong");
	map_skill("unarmed", "taiji-quan");
	map_skill("parry", "taiji-quan");
	map_skill("sword", "taiji-jian");

	create_family("�䵱��", 2, "����");
	setup();
	carry_object("/obj/weapon/sword")->wield();
	carry_object(__DIR__"obj/greyrobe")->wear();

}


