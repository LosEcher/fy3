// lilishi.c ������

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("������", ({ "li lishi", "li" }));
	set("banghui", "��ػ�");
	set("gender", "����");
	set("age", 45);
	set("str", 25);
	set("dex", 20);
	set("long", "����һ����İ�С����������������ˣ����ϵ�\n"+
"�·��������ƣ������������ƣ�����ȥ������˪��\n");
	set("combat_exp", 35000);
	set("score", 5000);
	set("shen_type", 1);
	set("attitude", "peaceful");
	set_skill("unarmed", 50);
	set_skill("yunlong-shou",50);
	set_skill("force", 60);
	set_skill("yunlong-xinfa",50);
	set_skill("blade", 90);
	set_skill("dodge", 70);
	set_skill("parry", 50);
	set_skill("wuhu-duanmendao", 90);
	set_skill("yunlong-shenfa", 60);
	map_skill("blade", "wuhu-duanmendao");
	map_skill("dodge", "yunlong-shenfa");
	map_skill("force","yunlong-xinfa");
	map_skill("parry","wuhu-duanmendao");

	set("max_force", 600);
	set("force",600);
	set("force_factor", 50);
	set("max_kee",800);
	set("chat_chance", 2);
	set("chat_msg", ({
        "������ͻȻ˵���������Ž����֣��������ı����ġ�\n",
	}));
        set("inquiry", ([
		"�½���" :  "����ܶ����ɲ����װ���\n",
		"��ػ�" :  "Ҫ����ػᣬ��ȥ�Ҽ�������\n",
       ]) );
	setup();
	carry_object("/obj/weapon/blade")->wield();
	carry_object("/obj/cloth")->wear();
	add_money("silver", 20);
}


int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ����������ػ��ֵܲ��̡�\n");
	if(ob->query("score")<1000)
                return notify_fail(query("name")+"������Ҫ��Ϊ��ػ��������\n");
        return 1;
}

