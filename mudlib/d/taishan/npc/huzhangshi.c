#include <ansi.h>

inherit NPC;
void create()
{
       set_name("����ʹ",({"huzhang shi","shi"}));
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
	set_skill("fengshenjue",100);
       set_skill("unarmed",100);
	set_skill("kuaihuo-zhang",100);
       set_skill("parry",100);
       set_skill("force",100);
	set_skill("panshi-neigong",100);
	set_skill("sword",100);
	set_skill("shibapan-jianfa",100);

	map_skill("sword","shibapan-jianfa");
	map_skill("parry","shibapan-jianfa");
	map_skill("unarmed","kuaihuo-zhang");
	map_skill("dodge","fengshenjue");
	map_skill("force","panshi-neigong");

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
	command("guard xuantie zhang");
}

void die()
{
	message_vision(HIY"$N����һ�����̲����ˣ�\n"NOR,this_object());
	destruct(this_object());
}
