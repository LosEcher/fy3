// sword.c : an example weapon

#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	set_name("����", ({ "sword" , "chang jian" , "jian" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ�ѿ����൱��ͨ�ĳ�����������Լ��ʮ�������ҡ�\n");
		set("value", 400);
		set("material", "steel");
	}
	init_sword(25);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

// The setup() is required.

	setup();
}

void hit_ob(object me,object victim,int damage)
{
	object ob;
	if(damage==-1)	return;
	if(! ob=victim->query_temp("weapon")) return;
                        message_vision(HIW "ֻ������ž����һ����$N���е�" +
ob->name()
                                + "�Ѿ���Ϊ���أ�\n" NOR, victim );
                        ob->unequip();
                        ob->move(environment(victim));
                        ob->set("name", "�ϵ���" + ob->query("name"));
                        ob->set("value", (int)ob->query("value") / 10);
                        ob->set("weapon_prop", 0);
                        victim->reset_action();

}
	
