// guanfuzi.c �ذ��� 

#include <ansi.h>
inherit NPC;
void create()
{
	set_name("�ذ���", ({ "guan anji", "guan" }));
	set("banghui", "��ػ�");
	set("nickname", "�ط���");
	set("shen_type", 1);

	set("gender", "����");
	set("age", 35);
	set("long",
		"\nֻ���������ĺ���Ʈ����ǰ��ģ���������ϡ�����˳ƹط��ӡ�\n");

	set_skill("unarmed", 70);
	set_skill("poyu-quan",70);
	set_skill("dodge", 70);
	set_skill("parry", 70);
	set_skill("sword", 80);
	set_skill("force", 70);
	set_skill("zixia-shengong", 70);
	set_skill("huashan-jianfa", 70);
	set_skill("feiyan-huixiang",60);
	map_skill("dodge", "feiyan-huixiang");
	map_skill("parry", "huashan-jianfa");
	map_skill("sword", "huashan-jianfa");
	map_skill("force", "zixia-shengong");
	map_skill("unarmed","poyu-quan");

	set_temp("apply/attack", 35);
	set_temp("apply/defense", 35);
	set_temp("apply/damage", 25);

	set("combat_exp", 50000);
	set("max_kee",800);
	set("max_force",1000);
	set("force",1000);
	set("force_factor",80);
	set("attitude", "friendly");
	set("chat_chance", 1);
	set("chat_msg", ({
	"�ذ�����Ȼ˵�����õ�����˭���������ֲ�����˵����\n",
	"�ذ�����Ȼ˵�������ҵ�Ƣ������ã���ҿ�ҪС���ˡ�\n",
	}));
        set("inquiry", ([
		"�½���" :  "�ܶ����ڳ�����ɽׯ���������¡�\n",
		"��ػ�" :  "Ҫ������ػᣬ��ȥ�Ҽ�������\n",
                "������" : "��С�ӳ�ȥ����һ����\n",
          
       ]) );

	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/sword")->wield();
}

int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ����������ػ��ֵܲ��̡�\n");
        if(ob->query("score")<50)
                return notify_fail(query("name")+"������Ҫ��Ϊ��ػ��������\n");
        return 1;
}
