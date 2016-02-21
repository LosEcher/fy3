// jianchu.c
inherit NPC;
#include <ansi.h>;
void create()
{
        set_name("̩ɽѰ��ʹ", ({ "xuncha shi", "xuncha", "shi" }) );
        set("gender", "����");
        set("class", "taoist");
        set("age", 25);
        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);
	set("ts_xl",1);

        set("force", 2000);
        set("max_force", 2000);
        set("force_factor", 100);
        set("max_kee",3000);
        set("max_gin",800);
        set("combat_exp", 500000);
        set("shen_type", 1);

        set("chat_chance", 40);
        set("chat_msg", ({
                (: random_move :)
        }) );


        set_skill("unarmed", 100);
	set_skill("kuaihuo-zhang",100);
        set_skill("sword", 100);
	set_skill("shibapan-jianfa",100);
        set_skill("force", 100);
	set_skill("panshi-neigong",100);
        set_skill("parry", 100);
        set_skill("dodge", 100);
	set_skill("fengshenjue",100);

        map_skill("sword", "shibapan-jianfa");
        map_skill("parry", "shibapan-jianfa");
        map_skill("dodge", "fengshenjue");
	map_skill("force","panshi-neigong");
	map_skill("unarmed","kuaihuo-zhang");

        create_family("̩ɽ��", 14, "����");
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
	object *inv;
	int i;

	inv=all_inventory(environment());
	if(! inv)	return;
	for(i=0;i<sizeof(inv);i++)	{
		if(!userp(inv[i]))	continue;
		family=(string)inv[i]->query("family/family_name");
		if(family=="̩ɽ��")	continue;
		if(inv[i]->is_fighting())	{
		command("say "+inv[i]->query("name")+"������̩ɽ����Ұ���ҿ����ǲ�����ˣ�");
		kill_ob(inv[i]);
		inv[i]->fight_ob(this_object());
		}
	}
}
