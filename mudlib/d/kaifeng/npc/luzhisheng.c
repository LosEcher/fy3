// seng.c
inherit NPC;

void create()
{
set_name("³����",({"lu zhisheng"}));
set("long","����ִ����¶����һ����,������̨ɽ����ɮ��.\n");
	set("gender", "����");

set("age",42);
set("shen_type", 1);
set("str",35);
set("title","������");
set("water",300);
set("food",300);
set("int", 20);
set("con", 20);
set("max_kee",900);
set("max_gin",100);
set("force",1200);
set("max_force",1200);
set("force_factor",100);
set("combat_exp",1500000);
set("kee",2000);
set("max_kee",2000);
	set("score", 100);
	set("apply/attack",  30);
	set("apply/defense", 30);

set_skill("force",170);
set_skill("unarmed",170);
set_skill("blade",170);
set_skill("staff",170);
set_skill("dodge",100);
set_skill("parry",170);
set("chat_chance",5);
set("chat_msg",({
  "������,��ü���۵Ŀ���ү��ʲô?\n",
  "�������仧�Ҵ����Ҳ�԰�ӵ�����,��,��!\n",
  "����˵����һ������ҵ�������,Ժ��ʲô��.\n",
  "�����ֳ��ֵ�����һ���ú���,ǹ���˵�.\n",
  }));
	setup();
carry_object(__DIR__"obj/dao-cloth")->wear();
carry_object("/d/obj/weapon/staff/chanzhang")->wield();
add_money("gold",2);
}

