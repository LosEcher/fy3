// guard.c

#include <ansi.h>

inherit NPC;
int do_func();

void create()
{
	set_name("�ް�Ȫ",({"cui baiquan","cui","baiquan"}));
	set("title","������");
	set("gender", "����" );
	set("age",43);
	set("str",50);
	set("mingwang",-1);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("long",
	"�˳��þ��ݣ��������ĵ���ϰ��֮�ˣ�������첡��һ�㡣\n"
	);
	set("per",10);
	set("no_get",1);
	set("chat_chance",2);
        set("chat_msg", ({
	"�ް�Ȫ�����������Ľ��һ����СҲ��֪������ȥ�ˡ���\n",
	"�ް�Ȫ��������������������˰��죬Ҳ��֪�����������ط����ġ���\n",
	"�ް�Ȫ���������죬Ҳ��֪˵Щʲô����ֻ��Լ����������Ľ�ݡ�ʲô�ġ�\n",
		}));
	set("combat_exp",20000);
	set_temp("apply/attack",40);
	set_temp("apply/defense",30);
	set_skill("blade",50);

	set("attitude", "heroism");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"�ް�Ȫ�����ɱĽ��һ����С֮ǰ�������㿪���ɣ�\n",
	"�ް�Ȫ��������͹���Ľ����ʲô��ϵ��\n",
	"�ް�Ȫ�е���Ҫ�������ӵĳ��ֱ��е�����������ֵ����ڴ˲���\n",
	}) );
	set("inquiry", ([
	"����Ľ��" : (:do_func:),
	"������" :"���Ӵ����˰��죬��Ȼûһ����֪�������ط����ġ�\n",
	]) );


	set_skill("dodge",50);
	set_skill("parry", 50);
	
	setup();
	
	carry_object("/obj/weapon/blade")->wield();
	carry_object("/obj/cloth")->wear();
}
int do_func()
{
	object ob,npc;
	command("say ����������������ģ�\n");
	npc=present("a bi",environment());
	if(!npc)	{
		ob=new(__DIR__"abi.c");
	write("��ʱ��������Ů����С���ѽ����ߡ�\n");
		write("���ƺ�������ʲô������΢΢һЦ��\n");
	ob->move(environment());
			    }
	return 1;
}
