// hammer.c
mapping *action=({
		([
		"damage_type":	"����",
		"action":	"$N�������е�$w,��$n��$l����������",
                "parry":                20,
		"post_action":(: call_other,__FILE__,"break_weapon" :),
                ]),
});

#include <ansi.h>
#include <weapon.h>
#include <combat.h>

inherit HAMMER;

void create()
{
        set_name("����", ({ "hammer" ,"tie chui" , "chui"}) );
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����һ�����������൱��ʵ��\n");
                set("value", 3);
                set("material", "iron");
                set("wield_msg", "$N�ó�һ��$n��������������Ȼ���������С�\n");
                set("unwield_msg", "$N�������е�$n��\n");
        }

        init_hammer(15);
	set("actions",(: call_other,__FILE__,"query_action" :));
        setup();
}

varargs mapping query_action()
{
	return action[random(sizeof(action))];
}
void break_weapon(object me, object victim, object weapon, int damage)
{
	object ob;
        if( objectp(weapon)
        &&      damage==RESULT_PARRY
        &&      ob = victim->query_temp("weapon") ) {
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
}
