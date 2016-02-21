// xutianch.c ���촨

#include <ansi.h>
inherit NPC;

void create()
{
	set_name("���촨", ({ "xu tianchuan", "xu", "tianchuan" }));
	set("banghui", "��ػ�");
	set("bh_rank","��ľ�û���");
	set("nickname", "�˱�Գ��");
	set("gender", "����");
	set("long", "\n������ľ����һ�����ĺ��֣����Ϲ���ʮ���˵ã�������ʹһ�׺�ȭ��\n");
	set("age", 55);

	set("int", 30);
	
	set("kee", 1200);
	set("max_kee", 1200);
	set("gin", 500);
	set("max_gin", 500);
	set("mingwang",500);
	set("max_force",1200);
	set("force",1200);
	set("force_factor",100);

	set("combat_exp", 800000);
	set("attitude", "friendly");

	set_skill("force", 100);
	set_skill("dodge", 100);
	set_skill("parry", 100);
	set_skill("unarmed", 100);
	set_skill("yunlong-xinfa", 100);
	set_skill("yunlong-shenfa", 100);
         set_skill("yunlong-jianfa",100);
	set_skill("houquan", 150);
	set_skill("yunlong-shou",100);

	set_temp("apply/attack", 50);
	set_temp("apply/defense", 50);
	set_temp("apply/damage", 35);

	map_skill("force", "yunlong-xinfa");
	map_skill("dodge", "yunlong-shenfa");
	map_skill("unarmed", "houquan");
	map_skill("parry", "houquan");

	set("chat_chance", 3);
	set("chat_msg", ({
	"���촨�����룬˵��������Ҫ�����ʹ����ҵ�������Ӳźð���\n",
        "���촨ͻȻ˵���Դ˴������ֵܣ�����������Բʱ��\n",
        "���촨ͻȻ˵���������Ž����֣��������ı����ġ�\n",
	}));

        set("inquiry", ([
		"�½���" :  "����ܶ����ɲ����װ���\n",
		"��ػ�" :  "Ҫ������ػᣬ���Ҽ��������ʿ���\n",
                "������" : "˭֪��һ��ﵽ��ȥ��\n",
	]) );

	setup();
	carry_object("/obj/cloth")->wear();
	add_money("gold", 1);
}

int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ����������ػ��ֵܲ��̡�\n");
	if(ob->query("score")<1500)
                return notify_fail(query("name")+"������Ҫ��Ϊ��ػ��������\n")
;
        return 1;
}
