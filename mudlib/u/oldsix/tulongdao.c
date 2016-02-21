// sword.c : an example weapon

#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
	set_name("������",({"tulong dao","dao"}));
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ�ѿ����൱��ͨ�ĳ�����������Լ��ʮ�������ҡ�\n");
		set("value", 400);
		set("material", "steel");
		set("oldsix/qjdy",1);
	}
	init_blade(25);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

// The setup() is required.

	setup();
}

mixed weapon_action(object me,object victim)
{
	object ob,target_weapon;
	string msg;
	target_weapon=victim->query_temp("weapon");
	if(! target_weapon)	return 0;
	if( target_weapon->query("oldsix/qjdy"))	{
		msg=HIW"��������һ����"+this_object()->query("name")+"��"+
		target_weapon->query("name")+"�ཻ��ð�������ǣ�\n"NOR;
		return msg;
	}
	msg=HIW"ֻ���׹�һ����"+victim->query("name")+"���е�"+target_weapon->query("name")+"��"+this_object()->query("name")+"��Ϊ���Σ�\n"NOR;
			ob=target_weapon;
			ob->unequip();
                        ob->move(environment(victim));
                        ob->set("name", "�ϵ���" + ob->query("name"));
                        ob->set("value", (int)ob->query("value") / 10);
                        ob->set("weapon_prop", 0);
                        victim->reset_action();
			return msg;

}
	
