// qianlaob.c
#include <ansi.h>

inherit NPC;
void create()
{
	set_name("Ǯ�ϱ�", ({"qian laoben", "qian", "laoben"}));
	set("banghui","��ػ�");
	set("gender", "����");
	set("age", 34);

	set("str", 22);
	set("int", 24);
	set("con", 18);

	set("kee", 800); 
	set("max_kee", 800);
	set("gin", 100);
	set("max_gin", 100);
	set("mingwang",500);
	set("max_force",800);
	set("force",800);
	set("force_factor",80);

	set("combat_exp", 100000);
	set("attitude", "friendly");
	set("env/wimpy", 50);
	set("chat_chance", 5);
	set("chat_msg", ({
	"Ǯ�ϱ�˵�����ҽ�Ǯ�ϱ���������Ϊ���������ϱ�Ҳ���ˡ�\n",
	"Ǯ�ϱ�Ц��˵����С����������ǹ���ġ�\n",
	"Ǯ�ϱ�˵��Τ��������֮��,��ľ�ÿ�¶������.\n",
	"Ǯ�ϱ���:Ҫ����ػ�,ȥ�Ҽ�������\n",
        "Ǯ�ϱ�ͻȻ˵�����˷ֿ�һ��ʫ�����Ϻ�Ӣ����֪��\n",
	}));
        set("inquiry", ([
		"������" :  "��С������������һ���й�.\n",
		"�½���" :  "�ܶ����ڳ�����ɽׯ�С�\n",
		"��ػ�" :  "ֻҪ��Ӣ�ۺú���������������ػᡣ\n",
		"���":"Ҫ����ػ�,ȥ�Ҽ�����.\n",
   ]));
	set_skill("unarmed", 80);
	set_skill("yunlong-shou",80);
	set_skill("force",80);
	set_skill("yunlong-xinfa",80);
	set_skill("dodge", 80);
	set_skill("yunlong-shenfa",80);
	set_skill("parry",80);

	map_skill("unarmed","yunlong-shou");
	map_skill("parry","yunlong-shou");
	map_skill("dodge","yunlong-shenfa");
	map_skill("force","yunlong-xinfa");
	set_temp("apply/attack", 100);
	set_temp("apply/defense", 100);
	set_temp("apply/damage", 40);

	setup();
	carry_object("/obj/cloth")->wear();
	add_money("gold", 3);
}
int recognize_apprentice(object ob)
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
