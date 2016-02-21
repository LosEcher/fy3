#include <ansi.h>

inherit NPC;
void create()
{
       set_name("����ʹ",({"hujia shi","shi"}));
       set("shen_type",1);
       set("gender","����");
       set("age",21);
       set("combat_exp",1500000);
       set("max_gin",500);
       set("gin",500);
       set("max_kee",1000);
       set("kee",1000);
       set("max_sen",800);
       set("sen",800);
       set("max_force",2000);
       set("force",2000);
       set("force_factor",50);
       set_skill("dodge",120);
	set_skill("feiyan-huixiang",120);
       set_skill("unarmed",120);
	set_skill("hunyuan-zhang",120);
       set_skill("parry",120);
       set_skill("force",120);
	set_skill("zixia-shengong",120);
	set_skill("sword",120);
	set_skill("huashan-jianfa",120);

	map_skill("sword","huashan-jianfa");
	map_skill("parry","huashan-jianfa");
	map_skill("unarmed","hunyuan-zhang");
	map_skill("dodge","feiyan-huixiang");
	map_skill("force","zixia-shengong");
       set("chat_chance",10);
       set("chat_msg",({
                 (: command("exert heal") :),
                }));

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
	command("guard xuantie jia");
}

void die()
{
	message_vision(HIY"$N����һ�����̲����ˣ�\n"NOR,this_object());
	destruct(this_object());
}
