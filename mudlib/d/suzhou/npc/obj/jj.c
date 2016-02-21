// music  yangzhou's 鸡腿

#include <weapon.h>

inherit HAMMER;
inherit F_FOOD;

void create()
{
	set_name("炸鸡腿", ({ "jitui", "tui","leg" }) );
	set_weight(350);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一根啃得姬的炸鸡腿。\n");
		set("unit", "根");
		set("value", 80);
		set("food_remaining", 4);
		set("food_supply", 20);
		set("wield_msg", "$N抓起一根油腻腻的$n，握在手中当武器。\n");
		set("material", "bone");
	}
	init_hammer(1);
	setup();
}

int finish_eat()
{
	if( !query("weapon_prop") ) return 0;
	set_name("啃得精光的鸡腿骨头", ({ "bone" }) );
	set_weight(150);
	set("long", "一根啃得精光的鸡腿骨头。\n");
	return 1;
}
void bash_weapon(object me, object victim, object weapon, int damage)
{
        object ob;
        int wap, wdp;

        if( objectp(weapon)
	&& damage==-2
        &&      ob = victim->query_temp("weapon") ) {
                wap = (int)weapon->weight() / 500
                        + (int)weapon->query("rigidity")
                        + (int)me->query("str");
                wdp = (int)ob->weight() / 500
                        + (int)ob->query("rigidity")
                        + (int)victim->query("str");
                wap = random(wap);
	message_vision(weapon->query("name")+"大叫：痛死啦！\n",me);
	}
}
