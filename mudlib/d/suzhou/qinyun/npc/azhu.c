// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("����",({"a zhu","zhu","a"}));
	set("gender","Ů��");
	set("age",16);
	set("str",50);
	set("cor", 30);
	set("mingwang",1);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("per",30);
	set("no_get",1);
	set("long",
	"Ľ�ݸ���СѾ����һ��������Ƥ�������������鶯������һ�ɶ������ϡ�\n"
	);
	set("combat_exp",50000);
	set("attitude","friendly");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"������ü��������ʲô�ط��������㣿�������ԡ�\n",
	"����ŭ����Ľ�ݼҵ�Ѿ�����Ǻ��ǵģ�\n",
	}) );
	set("inquiry", ([
		"����" :"����������������ƶ��ƶ���\n",
		"zhuozi":"����������������ƶ��ƶ���\n",
		"������" : "������ǰ���\n",
		"yanziwu":"������ǰ���\n",
	]) );
	set_skill("dodge",50);
	set_skill("unarmed",50);
	set_temp("apply/defense",40);
	set_temp("apply/attack",45);
	set_temp("apply/armor",40);
	setup();
	carry_object("/obj/cloth")->wear();
}
