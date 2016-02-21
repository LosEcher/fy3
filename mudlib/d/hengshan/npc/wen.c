// wen.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("����", ({ "yi wen", "wen" }) );
        set("gender", "Ů��");
	set("class","nigu");
        set("age", 28);
        set("attitude", "peaceful");
        set("per", 24);
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 1400);
        set("max_force", 1400);
        set("force_factor", 30);
        set("max_kee", 1000);
        set("max_gin", 800);
        set("combat_exp", 400000);
        set("shen_type", 1);

	set_skill("literate",80);
	set_skill("foxuexinde",60);
        set_skill("unarmed", 80);
        set_skill("sword", 80);
        set_skill("force", 80);
        set_skill("parry", 80);
        set_skill("dodge", 80);
        set_skill("hengshan-jianfa", 80);
        set_skill("lingxu-bufa", 80);
	set_skill("lingyuan-xinfa",80);
	map_skill("force","lingyuan-xinfa");

        map_skill("sword", "hengshan-jianfa");
        map_skill("parry", "hengshan-jianfa");
        map_skill("dodge", "lingxu-bufa");

        create_family("��ɽ��", 14, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
 carry_object("/d/dali/npc/obj/cheng-cloth")->wear();
}
void attempt_apprentice(object ob)
{
	if(ob->query("gender")!="Ů��")	{
		command("say "+RANK_D->query_respect(ob)+
		"��ɿ������Ц��");
	}
	else if((int)ob->query("mingwang")<0)	{
		command("say �Һ�ɽ�����������ڵ����ˣ�");
	}
	else	{
		command("say �ã����Ҿ��������ˡ�");
		command("recruit " + ob->query("id"));
		ob->set("class","nigu");
	}
}

