// combatd.c
// music 12.13

#pragma optimize all

#include <ansi.h>
#include <skill.h>
#include <weapon.h>
#include <combat.h>

inherit F_DBASE;

mapping armor=([
	"ǰ��"	:"head",
	"����" :"head",
	"�ؿ�"	:"armor",
	"����"	:"armor",
	"���"	:"armor",
	"�Ҽ�"	:"armor",
	"����"	:"hands",
	"����"	:"hands",
	"����"	:"armor",
	"С��"	:"armor",
	"���" :"boots",
	"�ҽ�" :"boots",

]);
string *guard_msg = ({
        CYN "$Nע����$n���ж�����ͼѰ�һ�����֡�\n" NOR,
        CYN "$N������$n��һ��һ������ʱ׼���������ơ�\n" NOR,
        CYN "$N�������ƶ��Ų�����Ҫ�ҳ�$n��������\n" NOR,
        CYN "$NĿ��ת���ض���$n�Ķ�����Ѱ�ҽ��������ʱ����\n" NOR,
        CYN "$N�������ƶ����Ų����Ż����֡�\n" NOR,
});

string *catch_hunt_msg = ({
        HIW "$N��$n������������ۺ죬���̴���������\n" NOR,
        HIW "$N����$n��ȣ����ɶ������㣡��\n" NOR,
        HIW "$N��$nһ���棬������˵�ʹ���������\n" NOR,
        HIW "$Nһ��Ƴ��$n�����ߡ���һ�����˹�����\n" NOR,
        HIW "$Nһ����$n�����һ㶣���У����������㣡��\n" NOR,
        HIW "$N�ȵ�����$n�����ǵ��ʻ�û���꣬���У���\n" NOR,
        HIW "$N�ȵ�����$n�����У���\n" NOR,});

string *winner_msg = ({
        CYN "\n$N������Ц��˵���������ˣ�\n\n" NOR,
        CYN "\n$N˫��һ����Ц��˵�������ã�\n\n" NOR,
        CYN "\n$Nʤ�����У�����Ծ�����ߣ�Ц�������ã�\n\n" NOR,
        CYN "\n$n��ɫ΢�䣬˵��������������\n\n" NOR,
        CYN "\n$n�������˼�����˵�����ⳡ�����������ˣ�����������\n\n" NOR,
        CYN "\n$n����һ�ݣ�������Ҿ˵�����������ղ�������Ȼ������\n\n" NOR,
});

varargs int do_attack_now(object me, object victim, object weapon, int attack_type,mapping action,string limb);


void create()
{
        seteuid(getuid());
        set("name", "ս������");
        set("id", "combatd");
}

string damage_msg(int damage, string type)
{
        string str;

//      return "��� " + damage + " ��" + type + "��\n";

        if( damage == 0 ) return "���û�����$p�κ��˺���\n";

        switch( type ) {
        case "����":
        case "����":
                if( damage < 10 ) return "���ֻ������ػ���$p��Ƥ�⡣\n";
                else if( damage < 20 ) return 
"�����$p$l����һ��ϸ����Ѫ�ۡ�\n";
                else if( damage < 40 ) return 
"������͡���һ������һ���˿ڣ�\n";
                else if( damage < 80 ) return 
"������͡���һ������һ��Ѫ���ܵ��˿ڣ�\n";
                else if( damage < 160 ) return 
"������͡���һ������һ���ֳ�������˿ڣ�����$N������Ѫ��\n";
                else return 
"���ֻ����$nһ���Һ���$w����$p$l����һ������ǵĿ����˿ڣ���\n";
                break;
        case "����":
                if( damage < 10 ) return "���ֻ������ش���$p��Ƥ�⡣\n";
                else if( damage < 20 ) return "�����$p$l�̳�һ�����ڡ�\n";
                else if( damage < 40 ) return 
"������ۡ���һ��������$n$l����\n";
                else if( damage < 80 ) return 
"������ۡ���һ���̽�$n��$l��ʹ$p�������������˼�����\n";
                else if( damage < 160 ) return 
"��������͡���һ����$w����$p$l�̳�һ��Ѫ��ģ����Ѫ������\n";
                else return 
"���ֻ����$nһ���Һ���$w����$p��$l�Դ���������Ѫ�������أ���\n";
                break;
        case "����":
                if( damage < 10 ) return 
"���ֻ����������������Ĳ�Ӭ��΢���˵㡣\n";
                else if( damage < 20 ) return "�����$p��$l���һ�����ࡣ\n";
                else if( damage < 40 ) return 
"���һ�����У�$n��$l��ʱ����һ���ϸߣ�\n";
                else if( damage < 80 ) return 
"���һ�����У�$n�ƺ���һ����Ȼ���˲�С�Ŀ���\n";
                else if( damage < 120 ) return 
"������项��һ����$n����������\n";
                else if( damage < 160 ) return 
"�����һ�¡��项��һ�����$n�����˺ü�������һ��ˤ����\n";
                else if( damage < 240 ) return 
"������صػ��У�$n���ۡ���һ���³�һ����Ѫ��\n";
                else return 
"���ֻ�������项��һ�����죬$n��һ�����ݰ���˳�ȥ����\n";
                break;
        default:
                if( !type ) type = "�˺�";
                if( damage < 10 ) str =  "���ֻ����ǿ���һ����΢";
                else if( damage < 20 ) str = "��������΢��";
                else if( damage < 30 ) str = "������һ��";
                else if( damage < 50 ) str = "������һ������";
                else if( damage < 80 ) str = "��������Ϊ���ص�";
                else if( damage < 120 ) str = "�������൱���ص�";
                else if( damage < 170 ) str = "������ʮ�����ص�";
                else if( damage < 230 ) str = "�����ɼ������ص�";
                else str =  "�����ɷǳ����µ�����";
                return str + type + "��\n";
        }
}

string eff_status_msg(int ratio)
{
        if( ratio==100 ) return HIG "��������Ѫ��ӯ����û�����ˡ�" NOR;
        if( ratio > 95 ) return HIG 
"�ƺ����˵����ˣ��������������������" NOR;
        if( ratio > 90 ) return HIY "�������������˵����ˡ�" NOR;
        if( ratio > 80 ) return HIY "���˼����ˣ������ƺ��������¡�" NOR;
        if( ratio > 60 ) return HIY "���˲��ᣬ������״������̫�á�" NOR;
        if( ratio > 40 ) return HIR 
"��Ϣ���أ�������ʼɢ�ң��������ܵ�����ʵ���ᡣ" NOR;
        if( ratio > 30 ) return HIR "�Ѿ��˺����ۣ���������֧����������ȥ��" 
NOR;
        if( ratio > 20 ) return HIR "�����൱�ص��ˣ�ֻ�»�������Σ�ա�" NOR;
        if( ratio > 10 ) return RED 
"����֮���Ѿ�����֧�ţ��ۿ���Ҫ���ڵ��ϡ�" NOR;
        if( ratio > 5  ) return RED "���˹��أ��Ѿ�����һϢ�����ڵ�Ϧ�ˡ�" 
NOR;
        return RED "���˹��أ��Ѿ�������в�����ʱ�����ܶ�����" NOR;
}

string status_msg(int ratio)
{
        if( ratio==100 ) return HIG "����������������һ��Ҳ���ۡ�" NOR;
        if( ratio > 95 ) return HIG "�ƺ���Щƣ����������Ȼʮ���л�����" NOR;
        if( ratio > 90 ) return HIY "������������Щ���ˡ�" NOR;
        if( ratio > 80 ) return HIY 
"�����ƺ���ʼ�е㲻̫��⣬������Ȼ�������ɡ�" NOR;
        if( ratio > 60 ) return HIY "�������꣬������״������̫�á�" NOR;
        if( ratio > 40 ) return HIR "�ƺ�ʮ��ƣ����������Ҫ�ú���Ϣ�ˡ�" NOR;
        if( ratio > 30 ) return HIR 
"�Ѿ�һ��ͷ�ؽ����ģ������������֧����������ȥ��" NOR;
        if( ratio > 20 ) return HIR "�������Ѿ����������ˡ�" NOR;
        if( ratio > 10 ) return RED 
"ҡͷ���ԡ�����бб��վ��վ���ȣ��ۿ���Ҫ���ڵ��ϡ�" NOR;
        return RED "�Ѿ���������״̬����ʱ������ˤ����ȥ��" NOR;
}

varargs void report_status(object ob, int effective)
{
        if( effective ) 
		message_vision( "( $N" + eff_status_msg(
                        (int)ob->query("eff_kee") * 100 / 
(int)ob->query("max_kee") ) 
                        + " )\n", ob);
        else
		message_vision( "( $N" + status_msg(
                        (int)ob->query("kee") * 100 / 
(int)ob->query("max_kee") ) 
                        + " )\n", ob);
}

// This function calculates the combined skill/combat_exp power of a certain
// skill. This value is used for A/(A+B) probability use.
varargs int skill_power(object ob, string skill, int usage)
{
        int status, level, power,i;
        object *enemy;

        if( !living(ob) ) return 0;

        level=0;
        enemy=ob->query_enemy();
        if( sizeof(enemy))		{
                for(i=0;i<sizeof(enemy);i++)	{
			if( !objectp(enemy[i]))	continue;
			if( !living(enemy[i]))	continue;
			if( (int)enemy[i]->query("combat_exp")<(int)ob->query("combat_exp")/5)	continue;
			level++;
			}
	}
	i=level;
	if( i<1)	i=1;

        level = ob->query_skill(skill);

        switch(usage) {
                case SKILL_USAGE_ATTACK:
                        level += ob->query_temp("apply/attack");
                        break;
                case SKILL_USAGE_DEFENSE:
                        level += ob->query_temp("apply/defense");
                        break;
        }

        if( !level ) return (int)ob->query("combat_exp") / 2 /i;

        if( (status = ob->query("max_sen")) > 0 )
//		power = (level*level*level) / 3 * (int)ob->query("sen") /
//status;
		power = (level*level*level) / 3 / status *(int)ob->query("sen");
        else
                power = (level*level*level) / 3;

        return  (power + ob->query("combat_exp"))/i;
}

// do_attack()
//
// Perform an attack action. This function is called by fight() or as an
// interface for some special utilize in quests.
//
varargs int do_attack(object me, object victim, object weapon, int attack_type,int type)
{
	mapping my,action;
	string limb,*limbs,enable_skill;
	mixed foo;
	my=me->query_entire_dbase();
        //
        // (1) Find out what action the offenser will take.
        //
	if(type)	action=me->query("actions2");
	else        action = me->query("actions");
        if( !mapp(action) ) {
                me->reset_action();
                action = me->query("action");
                if( !mapp(action) ) {
                        CHANNEL_D->do_channel( this_object(), "sys",
                                sprintf("%s(%s): bad action = %O",
                                        me->name(1), me->query("id"), 
me->query("actions", 1)));
                        return 0;
                }
        }
	if(action["limb"])	limb=action["limb"];
	else	{
	      if( victim->query("limbs") )
       	{
	        limbs = victim->query("limbs");
       	 limb = limbs[random(sizeof(limbs))];
       	}
	}
	enable_skill=victim->query_skill_mapped("parry");
	foo=0;
	if(enable_skill=="douzhuanxingyi" || enable_skill=="qiankundanuoyi")	{
		foo=SKILL_D(enable_skill)->parry_action(victim,me,weapon,attack_type,action,limb);
	}
	if(foo==0)	{
		do_attack_now(me,victim,weapon,attack_type,action,limb);
	}
}


varargs int do_attack_now(object me, object victim, object weapon, int attack_type,mapping action,string limb,int attack_power)
{
        int zengjia=0;
        mapping my, your;
        string result;
        string attack_skill, enable_skill;
        object you_armor,target_weapon;
        mixed foo;
        int ap, dp, pp;
        int damage, damage_bonus, defense_factor;
        int wounded = 0;
	string banghui;

        my = me->query_entire_dbase();
        your = victim->query_entire_dbase();

        result = "\n" + action["action"] + "��\n";
	 if(weapon)	result=replace_string(result,"$w",weapon->query("name"));

        //
        // (2) Prepare AP, DP for checking if hit.
        //
        if( objectp(weapon) )   attack_skill = weapon->query("skill_type");
        else                                    attack_skill = "unarmed";

        ap = skill_power(me, attack_skill, SKILL_USAGE_ATTACK);
	if(attack_power)	ap=attack_power;
        if( ap < 1) ap = 1;

        dp = skill_power(victim, "dodge", SKILL_USAGE_DEFENSE);
        if( dp < 1 ) dp = 1;
        if( victim->is_busy() ) dp /= 3;

        //
        // (3) Fight!
        //     Give us a chance of AP/(AP+DP) to "hit" our opponent. Since both
        //     AP and DP are greater than zero, so we always have chance to hit
        //     or be hit.
        //
        if( random(ap + dp) < dp ) {       // Does the victim dodge this hit?

                enable_skill = victim->query_skill_mapped("dodge");
                if( !enable_skill ) enable_skill = "dodge";
                result += SKILL_D(enable_skill)->query_dodge_msg(limb);

// ��ԭ���ж�GINΪ�ж�SEN�� 50-> 40

                if( dp < ap && (!userp(victim) || !userp(me)) 
                &&      random(your["sen"]*100/your["max_sen"] + your["int"]) > 40 ) {
                        your["combat_exp"] += 1;
				victim->improve_skill("dodge", 1,1);
				victim->improve_skill(enable_skill,1,1);
			
                }

    // This is for NPC only. NPC have chance to get exp when fail to hit.
                     if( (ap < dp) && !userp(me) ) {
                        if( random(my["int"]) > 10 ) my["combat_exp"] += 1;
                        me->improve_skill(attack_skill, random(my["int"]));
                }
                damage = RESULT_DODGE;

        } else {

                //
                //      (4) Check if the victim can parry this attack.
                //
                if( target_weapon=victim->query_temp("weapon") ) {
                        pp = skill_power(victim, "parry", 
SKILL_USAGE_DEFENSE);
                        if( !weapon ) pp *= 2;
                } else {
                        if( weapon ) pp = 0;
                        else pp = skill_power(victim, "unarmed", 
SKILL_USAGE_DEFENSE);
                }

                if( victim->is_busy() ) pp /= 3;
                if( pp < 1 ) pp = 1;

                if( random(ap + pp)< pp ) {

                        enable_skill = victim->query_skill_mapped("parry");
                        if( !enable_skill ) enable_skill = "parry";
           // change to SKILL_D(enable_skill) after added parry msg to those
                        // martial arts that can parry.
                        result += SKILL_D("parry")->query_parry_msg(weapon);
// 50->40
			if( pp < ap &&(!userp(victim) || !userp(me))
//	change by oldsix    ^^ dp->pp
                        &&      random(your["gin"]*100/your["max_gin"] + 
your["int"]) > 40 ) {
                                your["combat_exp"] += 1;
					victim->improve_skill("parry", 1,1);
					victim->improve_skill(enable_skill,1,1);
                        }
			// add by oldsix to see the two weapons action
			if(weapon && target_weapon)	{
				if(stringp (foo=weapon->weapon_action(me,victim)))
					result+=foo;
				else	{
					if(stringp (foo=target_weapon->weapon_action(victim,me)))
					result+=foo;
					}
			}
	                        damage = RESULT_PARRY;
                } else {
                        //
                 //      (5) We hit the victim and the victim failed to parry
                        //

                        //
                        //      (7) Give experience
                        //

	if( !userp(me) || !userp(victim) )	{
		if( ((ap<dp||ap<pp) &&(random( my["kar"]*5 + my["int"]) > 30))|| (my["combat_exp"]<your["combat_exp"]*5))	{
		zengjia=random((int)me->query_skill("literate")/10)+ random((int)(my["kar"]/5))+1;
		my["combat_exp"] += zengjia;
		me->improve_skill(attack_skill, zengjia,1);
		enable_skill= me->query_skill_mapped(attack_skill);
		if(! enable_skill)	enable_skill=attack_skill;
		me->improve_skill(enable_skill,zengjia,1);
		me->improve_skill("dodge",zengjia,1);
		enable_skill=me->query_skill_mapped("dodge");
		if(! enable_skill)	enable_skill="dodge";
		me->improve_skill(enable_skill,zengjia,1);
		me->improve_skill("parry",zengjia,1);
		enable_skill=me->query_skill_mapped("parry");
		if(! enable_skill)	enable_skill="parry";
		me->improve_skill(enable_skill,zengjia,1);
		me->improve_skill("force",zengjia,1);
		enable_skill=me->query_skill_mapped("force");
		if(! enable_skill)	enable_skill="force";
		me->improve_skill(enable_skill,zengjia,1);

             }
	}

				damage_bonus=0;
                        // Let force skill take effect.
                        if( my["force_factor"] && (my["force"] > 
my["force_factor"]) ) {
				me->add("force",-my["force_factor"]);
				damage = (int)me->query("force")/20 + my["force_factor"]- (int)victim->query("force")/25;
				if(damage<0) damage=1;
				damage_bonus += damage;
			   }
                        damage = me->query_temp("apply/damage");
                        damage = (damage + random(damage)) / 2;
                        if( action["damage"] )
                                damage += action["damage"] * damage / 100;

                        damage_bonus += me->query_str();


//			if( action["force"] )
//			damage_bonus += action["force"] * damage_bonus /100;
                        if( damage_bonus > 0 )
                                damage += (damage_bonus + 
random(damage_bonus))/2;
                        if( damage < 0 ) damage = 0;

                        // Let combat exp take effect
                        defense_factor = your["combat_exp"];
                        while( random(defense_factor) > my["combat_exp"] ) {
                                damage -= damage / 3;
                                defense_factor /= 2;
                        }

// add by oldsix to let armor to do somethings
	if(objectp (you_armor=victim->query_temp("armor/"+armor[limb])))	{
		if( ! (int) you_armor->query("oldsix/max_damage"))
			you_armor->set("oldsix/max_damage",10);
		if(! (int) you_armor->query("oldsix/protect"))	
			you_armor->set("oldsix/protect",2);
		if((you_armor->query("oldsix/damage")>=you_armor->query("oldsix/max_damage")&&objectp(weapon))||(objectp(weapon)&&weapon->query("oldsix/qjdy")&&!you_armor->query("oldsix/by")))	{
			result+=RED"ֻ���á�������һ����$n��"+you_armor->query("name")+"��$N��$w�����ڵأ�\n"NOR;
			you_armor->unequip();
			you_armor->move(environment(victim));
			you_armor->set("name", "���ò�����"+you_armor->query("name"));
			you_armor->set("value",0);
			you_armor->set("armor_prop",0);
			damage/=you_armor->query("oldsix/protect");
		}
		else	{
			result+=HIY"$N����һ������$n��"+you_armor->query("name")+"�ϣ�\n"NOR;
			if(objectp(weapon))		{
				you_armor->set("oldsix/damage",you_armor->query("oldsix/damage")+1);
			}	
			damage/=you_armor->query("oldsix/protect");
		}
	}
	if(objectp (you_armor=victim->query_temp("armor/"+armor[limb])) && mapp (foo=you_armor->armor_action(victim,me,damage)))    {
		result += foo["msg"];
		damage=foo["damage"];
	}
	if(damage>0&&(!weapon||!weapon->query("oldsix/qjdy")))	{
			// let victim force to action
			enable_skill=victim->query_skill_mapped("force");
			if(! enable_skill)	enable_skill="force";
			foo=SKILL_D(enable_skill)->force_action(victim,me,damage,your["force_factor"]);
			if(mapp(foo))		{	
				result +=foo["msg"];
				damage=foo["damage"];
			}
	}
			
                        //
                        //      (6) Inflict the damage.
                        //
                        damage = victim->receive_damage("kee", damage, me );

                        if( (me->is_killing(victim) || weapon)
                        && random(damage) > 
(int)victim->query_temp("apply/armor") ) {
    // We are sure that damage is greater than victim's armor here.
                                victim->receive_wound("kee",
                                        damage - 
(int)victim->query_temp("apply/armor"), me);
                                wounded = 1;
                        }

                        result += damage_msg(damage, action["damage_type"]);
                        if( enable_skill = me->query_skill_mapped(attack_skill) ) {
                                foo = SKILL_D(enable_skill)->hit_ob(me,victim, damage_bonus);
                                if( stringp(foo) ) result += foo;
				}

                        // Let weapon or monster have their special damage.
                        if( weapon ) {
                                foo = weapon->hit_ob(me, victim, damage_bonus);
                                if( stringp(foo) ) result += foo;
                        } else {
				if( enable_skill=me->query_skill_mapped("force"))	{
					foo=SKILL_D(enable_skill)->hit_ob(me,victim,damage_bonus,my["force_factor"]);	
					if( stringp(foo))	result +=foo;
				}
                                foo = me->hit_ob(me, victim, damage_bonus);
                                if( stringp(foo) ) result += foo;
				     
                        }
			    if( random(your["eff_kee"] + your["kee"]) < 
damage ) {
                                        your["combat_exp"] += 1;
                          		}
   }
}



        result = replace_string( result, "$l", limb );
        if( objectp(weapon) )
                result = replace_string( result, "$w", weapon->name() );
        else if( stringp(action["weapon"]) )
                result = replace_string( result, "$w", action["weapon"] );

	message_combat(result, me, victim );


        if( wizardp(me) && (string)me->query("env/combat")=="verbose" ) 
               {
                if( damage > 0 )
                        tell_object(me, sprintf( GRN 
"AP��%d��DP��%d��PP��%d���˺�����%d\n" NOR,
                                ap/100, dp/100, pp/100, damage));
                else
                        tell_object(me, sprintf( GRN 
"AP��%d��DP��%d��PP��%d\n" NOR,
                                ap/100, dp/100, pp/100));
                }

        if( damage > 0 ) {
                report_status(victim, wounded);
                if( victim->is_busy() ) victim->interrupt_me(me);
                if( (!me->is_killing(your["id"])) && 
                    (!victim->is_killing(my["id"])) && 
                    ( victim->query("kee")*3 <= victim->query("max_kee") ) ) 
                   {
			if(me->is_fighting(victim))	{
                        me->remove_enemy(victim);
                        victim->remove_enemy(me);
                        message_vision( 
                        winner_msg[random(sizeof(winner_msg))], me, victim);
			}
                   }
        }

        if( functionp(action["post_action"]) )
                evaluate( action["post_action"], me, victim, weapon, damage);

        // See if the victim can make a riposte.
        if( attack_type==TYPE_REGULAR
        &&      damage < 1
        &&      victim->query_temp("standing") ) {
                victim->set_temp("standing", 0);
                if( random(my["kar"]) < 5 ) {
			message_vision("$Nһ�����У�¶����������\n", me);
                        do_attack(victim, me, victim->query_temp("weapon"), 
TYPE_QUICK);
                } else {
		message_vision("$N��$n����ʧ�󣬳û�����������\n",
		victim, me);
                        do_attack(victim, me, victim->query_temp("weapon"), 
TYPE_RIPOSTE);
                }
        }
}

//      fight()
//
//This is called in the attack() defined in F_ATTACK, which handles fighting
//      in the heart_beat() of all livings. Be sure to optimize it carefully.
//
void fight(object me, object victim)
{
        object ob;

        if( !living(me) ) return;

//        if( !me->visible(victim)
//        && (random(100 + (int)me->query_skill("perception")) < 100) )
// mark by musix 7.25                 return;

// If victim is busy or unconcious, always take the chance to makeanattack.
        if( victim->is_busy() || !living(victim) ) {
                me->set_temp("standing", 0);
                if( !victim->is_fighting(me) ) victim->fight_ob(me);
             do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
		if(me->query_temp("secondary_weapon")
		&& me->is_fighting(victim))
		do_attack(me, victim, me->query_temp("secondary_weapon"),TYPE_QUICK,1);

        // Else, see if we are brave enough to make an aggressive action.
        } else if( random( (int)victim->query("kar") * 3 ) < 
((int)me->query("cor") + (int)me->query("bellicosity") / 50) ) {
                me->set_temp("standing", 0);
                if( !victim->is_fighting(me) ) victim->fight_ob(me);                		do_attack(me, victim, me->query_temp("weapon"), TYPE_REGULAR);
		if(me->query_temp("secondary_weapon")
		&& me->is_fighting(victim))
		do_attack(me, victim, me->query_temp("secondary_weapon"),TYPE_REGULAR,1);

        // Else, we just start standing.
        } else if( !me->query_temp("standing") ) {
                me->set_temp("standing", 1);
		message_combat( guard_msg[random(sizeof(guard_msg))], me,
victim);
                return;
        } else return;
}

//      auto_fight()
//
//      This function is to start an automatically fight. Currently this is
//      used in "aggressive", "vendetta", "hatred", "berserk" fight.
//
void auto_fight(object me, object obj, string type)
{
        // Don't let NPC autofight NPC.
        if( !userp(me) && !userp(obj) ) return;

 // Because most of the cases that we cannot start a fight cannot be checked
// before we really call the kill_ob(), so we just make sure we have no 
        // aggressive callout wating here.
        if( me->query_temp("looking_for_trouble") ) return;
        me->set_temp("looking_for_trouble", 1);

        // This call_out gives victim a chance to slip trough the fierce guys.
        call_out( "start_" + type, 0, me, obj);
}

void start_berserk(object me, object obj)
{
        int bellicosity;

        if( !me || !obj ) return;                               
// Are we still exist( not becoming a corpse )?

        me->set_temp("looking_for_trouble", 0);

        if(     me->is_fighting(obj)                            
// Are we busy fighting?
        ||      
!living(me)                                                     
// Are we capable for a fight?
        ||      environment(me)!=environment(obj)       
// Are we still in the same room?
        ||      environment(me)->query("no_fight")      
// Are we in a peace room?
        ||      obj->query("no_kill")
        )       return;

        bellicosity = (int)me->query("bellicosity");
        message_vision("$N��һ������������ɨ�����ڳ���ÿһ���ˡ�\n", me);

        if( ( (int)me->query("force")+ (int)me->query("mana") ) > 
             (random(bellicosity) + bellicosity)/2 ) return;

        if( bellicosity > (int)me->query("mingwang") 
        &&      !wizardp(obj) ) {
               if( (me->query("mingwang")>0) && (obj->query("mingwang")<0)) 
                 {
            message_vision("$N����$n�ȵ���" + RANK_D->query_self_rude(me)
                        + "����ƽ�������ˣ��������㣡\n", me, obj);
                me->kill_ob(obj);
                 } 
               if( (me->query("mingwang")<0)&& (obj->query("mingwang")>0))
                 {
            message_vision("$N����$n�ȵ���" + RANK_D->query_self_rude(me)
                        + "һ��ʹ���������ɵ��ˣ������ɣ�\n", me, obj);
                me->kill_ob(obj);
                 }

	} else if( !wizardp(obj))	{
                message_vision("$N����$n�ȵ���ι��" + RANK_D->query_rude(obj)
                        + "��" + RANK_D->query_self_rude(me) + 
"����������������������ɣ�\n",
                        me, obj);
                me->fight_ob(obj);
        }
}

void start_hatred(object me, object obj)
{
        if( !me || !obj ) return;                               
// Are we still exist( not becoming a corpse )?

        me->set_temp("looking_for_trouble", 0);

        if(     me->is_fighting(obj)                            
// Are we busy fighting?         
        ||      
!living(me)                                                     
// Are we capable for a fight?
        ||      environment(me)!=environment(obj)       
// Are we still in the same room?
        ||      environment(me)->query("no_fight")      
// Are we in a peace room?
        )       return;

        // We found our hatred! Charge!
        message_vision( catch_hunt_msg[random(sizeof(catch_hunt_msg))], me, 
obj);
        me->kill_ob(obj);
}

void start_vendetta(object me, object obj)
{
        if( !me || !obj ) return;                               
// Are we still exist( not becoming a corpse )?
	if(userp(me))	return;

        me->set_temp("looking_for_trouble", 0);

        if(     me->is_fighting(obj)                            
// Are we busy fighting?
        ||      
!living(me)                                                     
// Are we capable for a fight?
        ||      environment(me)!=environment(obj)       
// Are we still in the same room?
        ||      environment(me)->query("no_fight")      
// Are we in a peace room?
        )       return;

        // We found our vendetta opponent! Charge!
	message_vision(HIC"$Nŭ���������������$n��ɱ���ۣ�\n"NOR,me,obj);
	tell_object(obj,HIR "������" + me->name()+"��ɱ���㣡\n" NOR);
	me->fight_ob(obj);
	obj->kill_ob(me);
}

void start_aggressive(object me, object obj)
{
        if( !me || !obj ) return;                               
// Are we still exist( not becoming a corpse )?

        me->set_temp("looking_for_trouble", 0);

        if(     me->is_fighting(obj)                            
// Are we busy fighting?
        ||      
!living(me)                                                     
// Are we capable for a fight?
        ||      environment(me)!=environment(obj)       
// Are we still in the same room?
        ||      environment(me)->query("no_fight")      
// Are we in a peace room?
        )       return;

        // We got a nice victim! Kill him/her/it!!!
        me->kill_ob(obj);
}

// This function is to announce the special events of the combat.
// This should be moved to another daemon in the future.
void announce(object ob, string event)
{
        switch(event) {
                case "dead":
            if(environment(ob)->query("biwuchang"))
                  message_vision("\n$N����������Ȧ�⹰��˵��: ����"+
                              "���ո�ǿ����������\n\n",ob);
                   else
                        message_vision("\n$N���ˡ�\n\n", ob);
                        break;
                case "unconcious":
                        
message_vision("\n$N����һ�����ȣ����ڵ���һ��Ҳ�����ˡ�\n\n", ob);
                        break;
                case "revive":
                        message_vision("\n$N���������۾��������˹�����\n\n", 
ob);
                        break;
        }
}

void winner_reward(object killer, object victim)
{
        killer->defeated_enemy(victim);
}

void killer_reward(object killer, object victim)
{
        int bls,lv;
        string vmark;

//modify by musix , to ��������������ʧ

        // Call the mudlib killer apply.
        killer->killed_enemy(victim);

        if( userp(victim) ) {
        if(environment(victim)->query("biwuchang") && userp(killer))
          {
                  message("biwuchang",HIR"��������Ϣ��"HIG": "
                          +HBCYN+ victim->name() +NOR+HIG+ "�ڱ����б�"
                          +HBYEL+ killer->name()+NOR+HIG+ "����ˡ�\n"NOR,users());
                return;
            }
                killer->add("PKS", 1);
                victim->clear_condition();
                // Give the death penalty to the dying user.
           victim->add("be_killed",1);
           victim->set("last_kill",killer->query("name") );       
           victim->set("betrayer",(int)(victim->query("betrayer")/2));
           victim->set("bellicosity", (int)(victim->query("bellicosity")/2) ); 
           if( victim->query("age") >14 ) {
                 victim->add("combat_exp", -(int)victim->query("combat_exp") /50 );
                               }
		victim->delete("vendetta");

                if( victim->query("thief") )
                        victim->set("thief", (int)victim->query("thief") / 2);
if( victim->query("age") >14 ) {
                if( (int)victim->query("potential") > 
(int)victim->query("learned_points"))
                        victim->add("potential",
                                ((int)victim->query("learned_points") - 
(int)victim->query("potential"))/4 );
                victim->skill_death_penalty();
// �� test_char ��������⴦�� 
                if ( killer->query("test_char") )
                  {              
                    killer->skill_death_penalty();
                    killer->skill_death_penalty();
                    killer->skill_death_penalty();
                    killer->skill_death_penalty();
                    killer->skill_death_penalty();
                    killer->skill_death_penalty();
                    killer->skill_death_penalty();
                    killer->skill_death_penalty();
                    killer->skill_death_penalty();
                    killer->skill_death_penalty();
                  }

                               }
else                           {
                if( (int)victim->query("potential") >
(int)victim->query("learned_points"))
                        victim->add("potential",
                                ((int)victim->query("learned_points") -
(int)victim->query("potential"))/10 );
                                }
                bls = 10;
                CHANNEL_D->do_channel(this_object(), "rumor",
                        sprintf("%s��%sɱ���ˡ�", victim->name(1), killer->name(1)));
                victim->add("mingwang",(-1) *(victim->query("mingwang"))/5);  
                killer->add("mingwang",(-1) *(victim->query("mingwang"))/10); 
	if(userp(killer))	{
                killer->add("bellicosity",100) ;
// kill player will down foxuexinde and max_mana;
		lv=(int)killer->query_skill("foxuexinde",1);
		lv--;
		killer->delete_skill("foxuexinde");
		if( lv>=1)	killer->set_skill("foxuexinde",lv);
		lv=(int)killer->query("max_mana");
		lv-=10;
		if( lv<=0)	lv=0;
		killer->set("max_mana",lv);
		if( killer->query("mana")>lv)
			killer->set("mana",lv);			
	}

        } else {
                killer->add("MKS", 1);

if(( killer->query("combat_exp") > (int)(victim->query("combat_exp") /10) )
   && ( (killer->query("combat_exp")*8) > killer->query("mingwang") )  )
   {
     if( victim->query("mingwang") )
       {
         if(victim->query("mingwang") >0)
           {
           killer->add("mingwang",(-1) *(int)(victim->query("combat_exp")/100) );
           if(killer->query("mingwang")>0 && userp(killer)) killer->add("bellicosity",20);
           }
         if(victim->query("mingwang") <0)
           {
           killer->add("mingwang",(int)(victim->query("combat_exp")/100) );
           if(killer->query("mingwang")<0 && userp(killer)) killer->add("bellicosity",20);
           }
       }
     else if ( victim->query("shen_type") )
      {
         if(victim->query("shen_type") >0)
           {
           killer->add("mingwang",(-1) * (int)(victim->query("combat_exp")/100) );
           if(killer->query("mingwang")>0 && userp(killer)) killer->add("bellicosity",20);
           }
         if(victim->query("shen_type") <0)
           {
           killer->add("mingwang",(int)(victim->query("combat_exp")/100) );
           if(killer->query("mingwang")>0 && userp(killer)) killer->add("bellicosity",20);
           }

      } 

    }

               bls = 1;
        }

        // NPC got 10 --> change to 25 muisx times of bellicosity than user.
//        killer->add("bellicosity", bls * (userp(killer)? 2: 50));
	if(userp(killer))	killer->add("bellicosity",bls*2);

        if( stringp(vmark = victim->query("vendetta_mark")) )
                killer->add("vendetta/" + vmark, 1);
}
 
