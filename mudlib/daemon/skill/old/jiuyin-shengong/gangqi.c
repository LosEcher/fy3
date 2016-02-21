inherit SKILL;

mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
        int damage;

        me->add("force", - factor );
        damage = (int)me->query("force")/20 + factor
                - (int)victim->query("force")/25;

        if( damage < 0 ) {
                if( !me->query_temp("weapon")
                &&      random(victim->query_skill("force")) > me->query_skill("force")/2 ) {
                        damage = - damage;
                        me->receive_damage( "kee", damage * 1.5 );
                        me->receive_wound( "kee", damage );
                        if( damage < 10 ) return "$n����������壬���ֵܵ�ס$N�����ҹ�����\n";
                        else if( damage < 20 ) return "$n��������񹦣������Ⱪ�ǣ��ֳ�΢�����⣬��$N�Ĺ������ˡ�\n";
                        else if( damage < 40 ) return "$n�þ�ȫ������������,$N��ôҲ������ȥ��\n";
                        else return "$n������֮�������������������������Ⱪ�֣���$N��ɳ�����֮�⡣\n";
                }
                if( damage_bonus + damage < 0 ) return - damage_bonus;
                return damage;
        }

        damage -= victim->query_temp("apply/armor_vs_force");
        if( damage_bonus + damage < 0 ) return - damage_bonus;
        if( random(me->query_skill("force")) < damage )
                return damage;
}
