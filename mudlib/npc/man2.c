#include <ansi.h>

inherit NPC;

mapping *data=({
(["name":"׳��",	"id":"han",		"mw":1,	]),
(["name":"����å",	"id":"liumang",	"mw":-1,	]),
(["name":"����",	"id":"bu kuai",	"mw":1,	"weapon":"blade",	]),
(["name":"������",	"id":"fan",		"mw":-1,	"weapon":"blade",	]),
(["name":"��ɮ",	"id":"seng",		"mw":1,	"weapon":"club",	]),
(["name":"��ͷ��",	"id":"toutuo",	"mw":-1,	"weapon":"blade",	]),
(["name":"����",	"id":"xiake",		"mw":1,	"weapon":"sword",	]),
(["name":"ǿ��",	"id":"qiang dao",	"mw":-1,	"weapon":"throwing",]),
(["name":"׳ʿ",	"id":"shi",		"mw":1,	]),
(["name":"��",	"id":"ehan",		"mw":-1,	]),
(["name":"׳��",	"id":"ding",		"mw":1,	]),
(["name":"�׺�",	"id":"han",		"mw":-1,	]),
});


void create()
{
	mapping npc;
	string weapon;
	npc=data[random(sizeof(data))];
	weapon=npc["weapon"];

	set_name(HIG+npc["name"]+NOR,({ npc["id"] }));
	set("age",20+random(30));
	set("combat_exp",25000+random(25000));
	set_temp("apply/attack",60);
	set_temp("apply/defense",60);
	set_temp("apply/armor",40);
	set("max_force",800);
	if( weapon)	set_skill(weapon,40);
	set_skill("unarmed",40);
	set_skill("parry",40);
	set_skill("dodge",40);
	set("shen_type",npc["mw"]);
	setup();
	carry_object("/obj/cloth")->wear();
	if( weapon)
		carry_object("/obj/weapon/"+weapon)->wield();
	add_money("silver",10+random(10));
}
       
