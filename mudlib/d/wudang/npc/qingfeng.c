// guxu.c ����

inherit NPC;

string ask_me();

void create()
{
        set_name("���", ({ "qing feng" }));
	set("long", 
"С��ͯ���ͷ�����˸������٣�һ����Ƥ���������ӡ�\n"
);
	set("gender", "����");
set("age",12);
	set("attitude", "peaceful");
	set("shen_type", 1);
set("str", 17);
	set("int", 25);
	set("con", 25);
	set("dex", 25);
	
set("max_kee", 300);
set("max_gin", 300);
set("force", 300);
set("max_force", 300);
set("force_factor", 10);

set("combat_exp", 5000);

set_skill("force", 30);
set_skill("taiji-shengong", 20);
set_skill("dodge", 40);
set_skill("tiyunzong", 40);
set_skill("unarmed", 30);
set_skill("taiji-quan", 30);
set_skill("parry", 30);
set_skill("sword", 30);
set_skill("taiji-jian", 30);
set_skill("daoxuexinde", 20);
set_skill("literate", 40);

 map_skill("force", "taiji-shengong");
	map_skill("dodge", "tiyunzong");
	map_skill("unarmed", "taiji-quan");
	map_skill("parry", "taiji-jian");
	map_skill("sword", "taiji-jian");

create_family("�䵱��", 5, "����");
	set("class", "taoist");

	
	setup();
	carry_object(__DIR__"obj/greyrobe")->wear();
}
