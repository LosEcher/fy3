// Mr.music  yangzhou' �Ʋ���

inherit NPC;

void create()
{
	set_name("�����",({"lao xiucai","lao","xiucai"}));
	set("long","����ʫ�飬ȴ���Բ��ڵ����ߡ�\n");
	set("gender", "����");
	set("age",60);
	set("per",20);

	set_skill("literate",30);

	set("mingwang",1);
	set_skill("unarmed",20);
	set_skill("dodge",20);
	set_skill("parry",20);
	set("combat_exp",600);
	set("shen_type", 1);
	setup();
}

int recognize_apprentice(object ob)
{
	return 1;
}
