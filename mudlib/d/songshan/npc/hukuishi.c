#include <ansi.h>

inherit NPC;
void create()
{
       set_name("����ʹ",({"hukui shi","shi"}));
       set("shen_type",1);
       set("gender","����");
       set("age",21);
       set("combat_exp",1000000);
       set("max_gin",500);
       set("gin",500);
       set("max_kee",1000);
       set("kee",1000);
       set("max_sen",800);
       set("sen",800);
       set("max_force",2000);
       set("force",2000);
       set("force_factor",50);
       set_skill("dodge",100);
	set_skill("fuguanglueying",100);
       set_skill("unarmed",100);
	set_skill("songyang-zhang",100);
       set_skill("parry",100);
       set_skill("force",100);
	set_skill("hanbing-zhenqi",100);
	set_skill("sword",100);
	set_skill("songshan-jianfa",100);

	map_skill("sword","songshan-jianfa");
	map_skill("parry","songshan-jianfa");
	map_skill("unarmed","songyang-zhang");
	map_skill("dodge","fuguanglueying");
	map_skill("force","hanbing-zhenqi");

       set("chat_chance_combat",10);
       set("chat_msg_combat",({
                 (: command("exert recover") :),
                }));
       setup();
	carry_object("/obj/std/armor/yinjia")->wear();
       carry_object("/obj/weapon/sword")->wield();
}

void init()
{
	::init();
	command("guard xuantie kui");
}

void die()
{
	message_vision(HIY"$N����һ�����̲����ˣ�\n"NOR,this_object());
	destruct(this_object());
}
