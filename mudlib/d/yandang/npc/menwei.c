#include <ansi.h>
inherit NPC;

void create()
{
	set_name(YEL"ɽׯ����"NOR, ({ "menwei","men wei"}));
	set("gender", "����");
	set("age", 23);

	set("combat_exp", 5000);
	set("shen_type", 1);
       set_skill("unarmed", 20);
	set_skill("sword", 20);
	set_skill("parry", 20);
	set_skill("dodge", 20);
       set_skill("force", 20);
set_skill("luoyan-jianfa",20);
set_skill("yuxuan-guizhen",20);
       set_skill("tianfeng-xuan",20);
       set_skill("tiangang-zhi",20);
       map_skill("dodge","tianfeng-xuan");
map_skill("sword","luoyan-jianfa");
       map_skill("unarmed","tiangang-zhi");
       map_skill("parry","tiangang-zhi");
map_skill("force","yuxuan-guizhen");


	setup();
	carry_object("obj/weapon/sword")->wield();
	carry_object("/obj/cloth")->wear();
}
	
