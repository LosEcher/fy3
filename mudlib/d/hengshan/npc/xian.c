// xian.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("����ʦ̫", ({ "dingxian shitai", "shitai", "dingxian" }) );
        set("gender", "Ů��");
	set("class","nigu");
        set("age", 45);
        set("attitude", "peaceful");
        set("per", 24);
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 2400);
        set("max_force", 2400);
	set("force_factor",80);
        set("max_kee",2000);
        set("max_gin",1200);
        set("combat_exp", 1200000);
        set("shen_type", 1);

	set_skill("unarmed",200);
	set_skill("sword",200);
	set_skill("force",200);
	set_skill("parry",200);
	set_skill("dodge",200);
	set_skill("hengshan-jianfa",200);
	set_skill("lingxu-bufa",200);
	set_skill("literate",100);
	set_skill("foxuexinde",100);
	set_skill("lingyuan-xinfa",200);
	map_skill("force","lingyuan-xinfa");

        map_skill("sword", "hengshan-jianfa");
        map_skill("parry", "hengshan-jianfa");
        map_skill("dodge", "lingxu-bufa");

        create_family("��ɽ��", 13, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object(__DIR__"obj/xuan-cloth")->wear();
}

void attempt_apprentice(object ob)
{
        string family;

        family=(string)ob->query("family/family_name");
        if(! family || family!="��ɽ��")        {
        command("say ������ô��ɽ���ģ������ɽȥ�ɣ���Ҫ�ڴ���ת��");
        }
	else if((int)ob->query("mingwang")<10000)
        command("say �㻹ҪŬ������Լ��Ľ����������а���");
        else    {
        message_vision(HIC"$N����$n���˵�ͷ������Ҫ��Ϊ�����������װ���\n"NOR,
        this_object(),ob);
        command("recruit " + ob->query("id"));
        }
}
