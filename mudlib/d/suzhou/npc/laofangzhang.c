// Mr.music  yangzhou' �Ʋ���

inherit NPC;

void create()
{
	set_name("�Ϸ���",({"lao fangzhang","lao","fangzhang"}));
	set("long","�������ȡ��׷�ͯ�յı����·��ɡ�\n");
	set("gender", "����");
	set("title","������ס��");
	set("age",60);
	set("per",20);

	set_skill("unarmed",60);
	set_skill("dodge",60);
	set_skill("parry",60);
	set_skill("force",60);
	set("mingwang",1);

	set("max_force",5000);
	set("force",5000);
	set("force_factor",20);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	set_temp("apply/damage",20);
	set("SPSKILLS",1);
	set("combat_exp",200000);
	set("shen_type", 1);
	setup();
}
void init()
{
	::init();
	add_action("do_get","get");
	add_action("do_steal","steal");
}
int do_get(string arg)
{
	object me,obj;
	string from,item;
	me=this_player();
	if(!arg)	return 0;
	if(sscanf(arg, "%s from %s", arg, from)==2)	{
		if(from=="xiang"||from=="gongde xiang")	{
		command("say ��λʩ���벻Ҫ�Ҷ���");
		return 1;
		}
	return 0;
	}
	return 0;
}
int do_steal(string arg)
{
	object me;
	string from;
	me=this_player();
	if(!arg)	return 0;
	if(sscanf(arg,"%s from %s",arg,from)==2)	{
		if(from=="xiang"||from=="gongde xiang")	{
		command("say �����徲֮�أ�ʩ����Ϊδ��̫�����˰ɣ�");
		return 1;
	}
	return 0;
	}
	return 0;
}
