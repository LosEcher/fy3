// blade_book.c

inherit ITEM;

#include <ansi.h>

void create()
{
	set_name(WHT "三字经" NOR, ({"sanzi jing","jing","shu", "book" }));
	set_weight(600);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long",
			"这是一本三字经，是小孩子读书识字的课本\n");
		set("value", 260);
		set("material", "paper");
		set("skill", ([
			"name":         "literate",	// name of the skill
			"exp_required":0,
							// to learn this skill.
			"sen_cost":10+random(11),
			"max_skill":	50		// the maximum level you can learn
							// from this object.
		]) );
	}
}
