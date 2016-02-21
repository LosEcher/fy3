// /NPC tonglao.c
// By adx @ CuteRabbit 22:21 99-3-19
#include <ansi.h>

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("��ɽͯ��", ({ "tong lao", "tong", "lao" }));
	set("long",
	    "������"+HIC"�����չ���"NOR+"�Ŀ�ɽ��ʦ.\n"+
	    "էһ���ƺ��Ǹ�ʮ�߰����Ů��,������ȴ����������.\n"+
	    "˫Ŀ���,��������,��������ʱ,����һ�����˵�����.\n");
	set("title", HIC"���չ�����"NOR);
	set("gender", "Ů��");
	set("per", 20);
	set("age", 96);
	set("nickname", HIR "Ψ�Ҷ���" NOR);
        set("shen_type",-1);
	set("attitude", "peaceful");

	set("str", 25);
	set("int", 35);
	set("con", 40);
	set("dex", 40);

	set("kee", 8000);
	set("max_kee", 8000);
	set("gin", 4000);
	set("max_gin", 4000);
	set("force", 4000);
	set("max_force", 4000);
	set("force_factor", 200);

	set("combat_exp", 5000000);
	set("score", 200000);
	set_skill("force", 200);
	set_skill("unarmed", 200);
	set_skill("dodge", 200);
	set_skill("parry", 200);

        set_skill("sword",200);

	set_skill("liuyang-zhang",200);
        set_skill("tianyu-qijian",200);
        set_skill("lingbo-steps",200);
	set_skill("duzun-gong", 200);

	map_skill("force", "duzun-gong");

        map_skill("dodge", "lingbo-steps");
	map_skill("unarmed", "liuyang-zhang");
	map_skill("parry", "liuyang-zhang");
        map_skill("sword","tianyu-qijian");


	create_family("���չ�",1,"����");
	set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
		(: perform_action, "strike.zhong" :),
		(: perform_action, "hand.duo" :),
                (: perform_action, "sword.kuangwu" :),
		(: command("unwield jian") :),
		(: command("wield jian") :),
		(: exert_function, "recover" :),
		(: exert_function, "recover" :),
		(: command("unwield jian") :),
		(: command("wield jian") :),
            }) );
	setup();
 	carry_object("/obj/weapon/sword")->wield();
 	carry_object("/d/lingjiu/obj/qingyi")->wear();
        carry_object("/d/lingjiu/obj/doupeng")->wear();
        carry_object("/d/lingjiu/obj/jiudai");
}

void attempt_apprentice(object ob)
{
   
   if ((int)ob->query_skill("duzun-gong", 1) < 120) 
           {
		command("say " + RANK_D->query_respect(ob) + "�Ƿ�Ӧ�ö������˻�����Ψ�Ҷ��𹦣�");
		return;
	   }
   if (ob->query_con() < 30) 
      	   {
		command("say ���Ź�����Ϊ����,��ĸ����ƺ�����.");
		return;
	   }
   command("recruit " + ob->query("id"));
   if((string)ob->query("class") != "officer")
     ob->set("class", "officer");
   return;
}
