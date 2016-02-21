// tiansong.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("���ɵ���", ({ "tiansong daoren", "daoren", "tiansong" }) );
        set("gender", "����");
        set("class", "taoist");
        set("age", 45);
        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 1400);
        set("max_force", 1400);
        set("force_factor", 30);
        set("max_kee",1200);
        set("max_gin",800);
        set("combat_exp", 600000);
        set("shen_type", 1);

        set_skill("unarmed", 150);
	set_skill("kuaihuo-zhang",150);
        set_skill("sword", 150);
	set_skill("shibapan-jianfa",150);
        set_skill("force", 150);
	set_skill("panshi-neigong",150);
        set_skill("parry", 150);
        set_skill("dodge", 150);
	set_skill("fengshenjue",150);

        map_skill("sword", "shibapan-jianfa");
        map_skill("parry", "shibapan-jianfa");
        map_skill("dodge", "fengshenjue");
	map_skill("force","panshi-neigong");
	map_skill("unarmed","kuaihuo-zhang");

        create_family("̩ɽ��", 13, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/d/wudang/npc/obj/greyrobe")->wear();
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
        if(family!="̩ɽ��")
                command("say "+RANK_D->query_respect(ob)+
                "��Ҫ��̩ɽ����ת��");
        else
                command("say "+ob->query("name")+"Ҫ���Ŭ����Ϊ�������Ⱑ��");
}

void attempt_apprentice(object ob)
{
        if((int)ob->query("mingwang")<10000)
        command("say ��̩ɽ�ɵ��Ӷ�����������֮����"+
        RANK_D->query_respect(ob)+"�����Ĳ�������");
	 else if((int)ob->query_skill("panshi-neigong",1)<60)
	command("say "+RANK_D->query_respect(ob)+"�ı����ķ����д���߰���");
        else    {
        command("say �ð������Ҿ�������ɡ�");
       command("recruit " + ob->query("id") );
       ob->set("class","swordsman");
        }
}

