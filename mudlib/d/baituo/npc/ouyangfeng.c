///ouyangfeng.c

#include <ansi.h>

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("ŷ����", ({ "ouyang feng", "ouyang", "feng" }));
	set("long", "���ǰ���ɽׯ�����ųơ���������ŷ���档\n"
		   +"����ϰ���������澭���߻���ħ���ѱ�þ�\n"
		   +"����ң�������ͷɢ����\n");
	set("title", "�϶���");
	set("gender", "����");
	set("age", 53);
	set("nickname", HIR "����" NOR);
	set("shen_type",-1);
	set("attitude", "peaceful");

	set("str", 30);
	set("int", 29);
	set("con", 30);
	set("dex", 28);

	set("kee",2500);
	set("max_kee",2500);
	set("gin",900);
	set("max_gin",900);
	set("force",2000);
	set("max_force",2000);
	set("force_factor",50);

	set("combat_exp", 1500000);
	set("score", 200000);

	set_skill("force", 200);
	set_skill("unarmed",200);
	set_skill("dodge",200);
	set_skill("parry",200);
	set_skill("staff",200);
	set_skill("hamagong", 200);
	set_skill("chanchu-bufa",200);
	set_skill("shexing-diaoshou",200);
	set_skill("lingshe-zhangfa",200);

	map_skill("force", "hamagong");
	map_skill("dodge", "chanchu-bufa");
	map_skill("unarmed", "shexing-diaoshou");
	map_skill("parry", "lingshe-zhangfa");
	map_skill("staff", "lingshe-zhangfa");

	create_family("����ɽ��",1, "��ɽ��ʦ");
        set("chat_chance",2);
        set("chat_msg",({
         "ŷ������������������հ���ɽ�ɲ����ذԽ����ء�\n",
         "ŷ��������Ҷ�ŷ���˱��ܹ��������ɽ���۷磡\n",
         "ŷ������������ն����������ģ�\n",
        }));
	setup();
	carry_object(__DIR__"obj/gangzhang")->wield();
	carry_object("/obj/cloth")->wear();
	add_money("silver",50);
}

void attempt_apprentice(object ob)
{
  if((int)ob->query("combat_exp")<100000)
        {
          message_vision("ŷ�����$NЦ������ľ���̫����,�һ��������㣡\n",ob);
	return ;
         }
   message_vision("ŷ��������$N��ͷ��΢΢���˵�ͷ��\n",ob);
   command("recruit " + ob->query("id"));
   return;
}

