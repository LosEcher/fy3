// jing.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("����ʦ̫", ({ "dingjing shitai", "shitai", "dingjing" }) );
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
        set("force_factor", 30);
        set("max_kee",2000);
        set("max_gin",1200);
        set("combat_exp", 1000000);
        set("shen_type", 1);

	set_skill("lingyuan-xinfa",130);
        set_skill("unarmed", 130);
        set_skill("sword", 130);
        set_skill("force", 130);
        set_skill("parry", 130);
        set_skill("dodge", 130);
        set_skill("hengshan-jianfa", 130);
        set_skill("lingxu-bufa", 130);

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
	message_vision("$Nҡ��ҡͷ����"+RANK_D->query_self(this_object())+
	"���Ѳ��յ����ˡ�\n",this_object());
	return;
}

