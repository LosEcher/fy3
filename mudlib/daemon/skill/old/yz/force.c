// force.c

#include <ansi.h>

inherit SKILL;

int valid_learn(object me) { return 1; }

string exert_function_file(string func)
{
	return "/force/" + func;
}

void skill_improved(object me)
{
        int s;

        s = me->query_skill("force", 1);
// s/4 --> s/8  by musix
        if( s%10==9 && (int)me->query("con") < s/8) {
                tell_object(me, HIW "�������ڹ������гɣ������������ˡ�\n" NOR);
                me->add("con", 1);
        }
}
