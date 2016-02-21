// skill.c

#include <ansi.h>
#include <dbase.h>

mapping skills;
mapping learned;
mapping skill_map;

mapping query_skills() { return skills; }
mapping query_learned() { return learned; }

void set_skill(string skill, int val)
{
	if( !find_object(SKILL_D(skill))
	&&	file_size(SKILL_D(skill)+".c") < 0 )
		error("F_SKILL: No such skill (" + skill + ")\n");

	if( !mapp(skills) ) skills = ([ skill: val ]);
	else skills[skill] = val;
}

int delete_skill(string skill)
{
	if( mapp(skills) ) {
		map_delete(skills, skill);
		if( mapp(learned) ) {
			map_delete(learned, skill);
			return undefinedp(learned[skill]);
		}
		return undefinedp(skills[skill]);
	}
	return 0;
}

// This function 'map' a skill <skill> to another skill <mapped_to>.
// If 2nd argument not given, cancel the mapped skill <skill>.
varargs void map_skill(string skill, string mapped_to)
{
	if( !mapped_to && mapp(skill_map) ) {
		map_delete(skill_map, skill);
		return;
	}

	if( !find_object(SKILL_D(skill))
	&&	file_size(SKILL_D(skill)+".c") < 0 )
		error("F_SKILL: No such skill (" + skill + ")\n");

	if( !mapp(skills) || undefinedp(skills[mapped_to]) )
		return;
		
	if( !mapp(skill_map) ) skill_map = ([ skill: mapped_to ]);
	else skill_map[skill] = mapped_to;
}

string query_skill_mapped(string skill)
{
	if( mapp(skill_map) && !undefinedp(skill_map[skill]) )
		return skill_map[skill];
	return 0;
}

varargs int query_skill(string skill, int raw)
{
	int point;
	string enable_skill;
	if( enable_skill=query_skill_mapped(skill))	{
		if(! (point=SKILL_D(enable_skill)->power_point()))
			point=1;
	}
	if( !raw ) {
		int s;
		
		s = query_temp("apply/" + skill);
		if( mapp(skills) ) {
			s += skills[skill] / 2;
			if( mapp(skill_map) )
				s += skills[skill_map[skill]]*point;
		}
		return s;
	}
	if( mapp(skills) && !undefinedp(skills[skill]) ) return skills[skill];
	return 0;
}

mapping query_skill_map()
{
	return skill_map;
}

int skill_death_penalty()
{
	string *sk;
	int i;
	int point;

	if( wizardp(this_object()) || !mapp(skills) ) return 0;

	sk = keys(skills);
	if( !mapp(learned) )
		for(i = 0; i<sizeof(sk); i++) {
			skills[sk[i]]--;
			if( skills[sk[i]]<0 ) map_delete(skills, sk[i]);
		}
	else
		for(i = 0; i<sizeof(sk); i++) {
		        if(! (point=SKILL_D(sk[i])->hard_point()))  point=1;
			if( (int)learned[sk[i]] > (skills[sk[i]]+1) * (skills[sk[i]]+1) * point * point /2)
				map_delete(learned, sk[i]);
			else {
				skills[sk[i]]--;
				if( skills[sk[i]]<0 ) map_delete(skills, sk[i]);
			}
		}
	skill_map = 0;
	return 1;
}

varargs void improve_skill(string skill, int amount, int weak_mode)
{
	int spi;
	int point;
	int level,i;
	string *sk;

	if( !find_object(SKILL_D(skill))
	&&	file_size(SKILL_D(skill)+".c") < 0 )
		error("F_SKILL: No such skill (" + skill + ")\n");

	if( mapp(skills)&& (int)skills[skill]>=200)	return;
                if( !mapp(skills) ) skills = ([]);
                if( undefinedp(skills[skill]) ) skills[skill] = 0;
	sk=keys(skills);
	level=0;
	for(i=0;i<sizeof(sk);i++)
		level+=skills[sk[i]];
	if( level>=6000)	{
	tell_object(this_object(),HIY"��������书�ȼ��ܺ��Ѵ����ֵ��\n"NOR);
		return ;
	}

//        if( !weak_mode || !userp(this_object()) ) {
//                if( !mapp(skills) ) skills = ([]);
//                if( undefinedp(skills[skill]) ) skills[skill] = 0;
//        }

	// Give learning penalty to those learning too much skills.
	spi = query("spi");
	if( sizeof(learned) > spi )
		amount /= sizeof(learned) - spi;

	if( !amount ) amount = 1;

        if(! (point=SKILL_D(skill)->hard_point()))  point=1;
	if( !mapp(learned) ) learned = ([ skill : amount ]);
	else if((int)learned[skill]<=(skills[skill] + 1) * (skills[skill] + 1)*point*point)
		(int)learned[skill] += amount;

	if( (!weak_mode || !userp(this_object()) || skills[skill]<30)
	&&      learned[skill] > (skills[skill] + 1) * (skills[skill] + 1)* point*point)	{
	if(skills[skill]<200)	{
		skills[skill]++;
		learned[skill] = 0;
		tell_object(this_object(), HIC "��ġ�" + to_chinese(skill) + "�������ˣ�\n" NOR);
		SKILL_D(skill)->skill_improved(this_object());
	}
	}
}

