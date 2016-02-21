// yao.c
inherit NPC;
#include <ansi.h>;
void create()
{
        set_name("�ֺ�", ({ "yao hou", "hou", "yao" }) );
        set("nickname", "��������");
        set("gender", "����");
        set("class", "swordsman");
        set("age", 45);
        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 1000);
        set("max_force", 1000);
        set("force_factor", 30);
        set("max_kee",2000);
        set("max_gin",1200);
        set("combat_exp", 300000);
        set("shen_type", 1);

        set_skill("unarmed", 80);
	set_skill("songyang-zhang",80);
        set_skill("sword", 80);
        set_skill("force", 80);
	set_skill("hanbing-zhenqi",80);
        set_skill("parry", 80);
        set_skill("dodge", 80);
        set_skill("songshan-jianfa", 80);
        set_skill("fuguanglueying", 80);

        map_skill("sword", "songshan-jianfa");
        map_skill("parry", "songshan-jianfa");
        map_skill("dodge", "fuguanglueying");
	map_skill("force","hanbing-zhenqi");
	map_skill("unarmed","songyang-zhang");

        create_family("��ɽ��", 13, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}

void init()
{
        object ob;

        ::init();

        if( interactive(ob=this_player()) && !is_fighting())
        {
                remove_call_out("greeting");
                call_out("greeting",1,ob);
        }
}

void greeting(object ob)
{
	string family;

	family=(string)ob->query("family/family_name");
	if(! family || (int) ob->query("combat_exp")<10000)
		command("say "+RANK_D->query_respect(ob)+
		"������ʦѧ�յİɣ�������ɽ��");
	else if( family=="��ɽ��")
		command("nod "+ob->query("id"));
}
