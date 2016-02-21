// dayou.c 

inherit NPC;

void create()
{
	set_name("½����", ({ "lu dayou", "lu", "dayou" }));
	set("nickname", "�����");
	set("long", 
"½������ĺ��ݣ��ֳ��ļ�������ģ���������ò�������\n"
"ͬ�������е������ǻ�ɽ������һ���еĺ��֡���������һֻС\n"
"�һ���۾��Ĵ���ת��\n");
	set("gender", "����");
	set("age", 26);
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 23);
	set("int", 23);
	set("con", 24);
	set("dex", 28);
	
	set("max_kee", 800);
	set("max_gin", 600);
	set("force", 800);
	set("max_force", 800);
	set("force_factor", 20);
	set("combat_exp", 50000);
	set("score", 5000);

	set_skill("force", 40);
	set_skill("zixia-shengong", 40);
	set_skill("dodge", 60);
	set_skill("feiyan-huixiang",50);
	set_skill("parry", 50);
	set_skill("sword", 60);
	set_skill("unarmed",40);
	set_skill("huashan-quanfa",50);
	set_skill("huashan-jianfa", 60);

	map_skill("force", "zixia-shengong");
	map_skill("parry", "huashan-jianfa");
	map_skill("sword", "huashan-jianfa");
	map_skill("unarmed","huashan-quanfa");
	map_skill("dodge","feiyan-huixiang");

	create_family("��ɽ��", 14, "����");

	setup();
	carry_object("/obj/weapon/sword")->wield();
	carry_object("/obj/cloth")->wear();
}
