// gaoyanchao.c ���峬

#include <ansi.h>

inherit NPC;
void create()
{
	set_name("���峬", ({ "gao yanchao", "gao", "yanchao" }));
	set("banghui","��ػ�");
	set("gender", "����");
	set("age", 32);
	set("str", 25);
	set("dex", 20);
	set("long", "��������ʮ��ͷ��ȴ�Ե��쳣������һ�Բ��������Ƕ�һվ��\n"
            "�����������ݡ�\n");
	set("combat_exp", 800000);
	set("score", 5000);
	set("mingwang",5000);
	set("attitude", "peaceful");

	set_skill("force", 100);
	set_skill("unarmed", 100);
	set_skill("dodge", 100);
	set_skill("parry", 100);
	set_skill("literate", 50);
	set_skill("yunlong-xinfa", 100);
	set_skill("yunlong-shenfa", 100);
	set_skill("yunlong-shou",150);

	map_skill("force", "yunlong-xinfa");
	map_skill("dodge", "yunlong-shenfa");
	map_skill("parry", "yunlong-shou");
	map_skill("unarmed","yunlong-shou");

	set_temp("apply/attack", 25);
	set_temp("apply/defense", 25);
	set_temp("apply/armor", 5);
	set_temp("apply/damage", 25);
	set("kee", 1500);
	set("max_kee", 1500);
	set("gin", 300);
	set("max_gin", 300);
	set("force", 1200); 
	set("max_force", 1200);
	set("force_factor", 80);
        set("inquiry", ([
		"�½���" :  "\n����ܶ����ɲ����װ���\n",
		"��ػ�" :  "\n������ػᣬ��ȥ�Ҽ��������ʡ�\n",
                "���帴��" : "ȥ�ײĵ�������ϸ���ưɣ�\n",
                
       ]) );
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("gold", 1);
}

void recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ����������ػ��ֵܲ��̡�\n");
        if(ob->query("score")<1000)
                return notify_fail(query("name")+"������Ҫ��Ϊ��ػ��������\n")
;
        return 1;
}
