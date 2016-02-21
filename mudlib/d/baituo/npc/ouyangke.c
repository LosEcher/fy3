///ouyangfeng.c

#include <ansi.h>

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("ŷ����", ({ "ouyang ke", "ouyang", "ke" }));
	set("long", "����ɽ��ׯ����ŷ�����˽���ӡ�"
		   +"һ���������ԡ�\n");
	set("title", "��������");
	set("gender", "����");
	set("age", 33);
	set("shen_type",-1);
	set("attitude", "peaceful");

	set("str", 30);
	set("int", 29);
	set("con", 30);
	set("dex", 28);

	set("kee",1500);
	set("max_kee",1500);
	set("gin",600);
	set("max_gin",600);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",50);

	set("combat_exp", 500000);

	set_skill("force", 120);
	set_skill("unarmed",120);
	set_skill("dodge",120);
	set_skill("parry",120);
	set_skill("staff",120);
	set_skill("hamagong", 120);
	set_skill("chanchu-bufa",120);
	set_skill("shexing-diaoshou",120);
	set_skill("lingshe-zhangfa",120);

	map_skill("force", "hamagong");
	map_skill("dodge", "chanchu-bufa");
	map_skill("unarmed", "shexing-diaoshou");
	map_skill("parry", "lingshe-zhangfa");
	map_skill("staff", "lingshe-zhangfa");

	create_family("����ɽ��",2, "����");
        set("chat_chance",2);
        set("chat_msg",({
         "ŷ������ҡ�������ȣ��������ǵ��⡣\n",
         "ŷ���˳���΢һ�㣬��������������֡�\n",
         "ŷ�����������С�������������Եá�\n",
        }));
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",20);
}

void attempt_apprentice(object ob)
{
  if((int)ob->query("combat_exp")<50000)
        {
          message_vision("ŷ���˶�$NЦ������ľ���̫����,�һ��������㣡\n",ob);
	return ;
         }
   message_vision("ŷ��������$N��ͷ��΢΢���˵�ͷ��\n",ob);
   command("recruit " + ob->query("id"));
   return;
}

