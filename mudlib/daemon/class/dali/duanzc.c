// duanzc.c ������

#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("������", ({ "duan zhengchun", "duan" }));
	set("title",  "����������" );
	set("long", "�����Ǵ�������������������̫�ܣ��������İ���ʥ�֡�\n");
	set("gender", "����");
	set("age", 45);
	set("class", "officer");
	set("attitude", "friendly");
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
        set("per",28);
	set("con", 35);
	
	set("max_kee", 2200);
	set("max_gin", 600);
	set("force", 2000);
	set("max_force", 2000);
	set("force_factor", 100);
	set("combat_exp", 1000000);
	set("score", 300000);

	set_skill("force",200);
	set_skill("dodge",200);
	set_skill("parry",200);
      
	set_skill("sword",200);
	set_skill("staff",200);
	set_skill("kurong-changong",200);
	set_skill("tiannan-step",200);
	set_skill("jinyu-quan",200);
	set_skill("wuluo-zhang",200);
	set_skill("duanjia-sword",200);
	set_skill("unarmed",200);
	set_skill("yiyang-zhi",200);
	set_skill("literate", 100);

	map_skill("force", "kurong-changong");
	map_skill("dodge", "tiannan-step");
	map_skill("unarmed","yiyang-zhi");
	map_skill("parry","yiyang-zhi");
	map_skill("sword", "duanjia-sword");
	map_skill("staff", "duanjia-sword");

	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver", 50);

	create_family("����μ�",18,"������");
}

void attempt_apprentice(object ob)
{
	if ((int)ob->query_skill("kurong-changong",1) < 80)
	{
		command("say ��ı����ڹ��ķ�̫���ˣ�����ŬŬ�������һ�°ɡ�");
		return;
	}
	if ((int)ob->query("mingwang")<50000)	{
		command("say �Ҵ�����������������壬����ذɣ�");
		return;
	}
        command("say �ܺã���Ȼ���������͵�����Ϊ����");
        command("recruit " + ob->query("id"));
	ob->set("title","�������������佫");
}
