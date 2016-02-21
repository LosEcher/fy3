#include <ansi.h>
inherit SKILL;
string str="$N���һ��������$wֱ�����£����кȵ�����$k�У�";

mapping action=([
	"damage":200,
	"damage_type":"����",
]);

mapping query_action(object me, object weapon)
{
	call_out("do_kuaidao",1,me);
	action["action"]=replace_string(str,"$k","һ");
	return action;
}
int valid_enable(string usage)
{
	return usage=="blade" || usage=="parry";
}
void do_kuaidao(object me)
{
	object vic,weapon;
	int lv,i;
	string *limbs,limb;

	if((int)me->query_temp("oldsix/kuaidao"))	return;
	vic=me->query_temp("last_opponent");
	if(! objectp(vic))	return;
	if( objectp(me->query_temp("secondary_weapon")))	return;
	if(! vic->is_fighting(me))	return;
	weapon=me->query_temp("weapon");
	if(! objectp(weapon))	return;
	lv=(int)me->query_skill("kuaidao-daofa",1);
	lv=lv/20;
	if(lv<2)	lv=2;
	limbs=vic->query("limbs");
	me->set_temp("oldsix/kuaidao",1);
	call_out("do_reset",10,me);
	for(i=2;i<=lv;i++)	{
	action["action"]=replace_string(str,"$k",
	chinese_number(i));
	action["damage"]=200+i*50;
	limb=limbs[random(sizeof(limbs))];
	weapon=me->query_temp("weapon");
	if(! objectp(weapon))	{
		me->delete_temp("oldsix/kuaidao");
		return;
	}
	if(! objectp(vic))		{
		me->delete_temp("oldsix/kuaidao");
		return;
	}
	if(! vic->is_fighting(me))	{
		me->delete_temp("oldsix/kuaidao");
		return;
	}
	COMBAT_D->do_attack_now(me,vic,weapon,2,action,limb);
	}
}

void do_reset(object me)
{
	if(! objectp(me))	return;
	me->delete_temp("oldsix/kuaidao");
}

