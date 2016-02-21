inherit FORCE;

mapping *action = ({
        ([      "action":
"$Nʹ��һ�С��캮�ض�����һ��������������$n��$l",
                "force":                300,
        "dodge" : 0,
                "damage_type":  "����"
        ]),
        ([      "action":
"$Nʹ��һ�С��Ĺ��λ꡹��һ��������������$n��$l",
                "force":                500,
        "dodge" : -5,
                "damage_type":  "����"
        ]),
        ([      "action":
"$Nʹ��һ�С�ʯ���쾪����˫�ƻ���ǰ�ƣ�һ��ǿ�ҵ�������������$n��$l",
                 "force":                700,
        "dodge" : -10,
        "damage_type" : "����"
        ]),
        ([      "action":
"$Nʹ��һ�С��˹���;�����������棬���ֳ��죬����ǿ��Ĺ�������$n��$l",
                "force":                1000,
        "dodge" : -15,
        "damage_type" : "����"
        ]),
});
mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
        mixed foo;
        int force;

        foo = ::hit_ob(me, victim, damage_bonus, factor);
        if( intp(foo) && (damage_bonus + foo > 0) ) {
              if( random(4*(me->query_skill("jiuyin-shengong"))) > (damage_bonus ))
                 {
                        victim->receive_wound("kee", (damage_bonus + foo));
                        victim->receive_wound("gin", (damage_bonus + foo));
                        force = victim->query("force");
                        victim->set("force", 100);
                        me->add("neili",force-random(10)-1);
                        return
"$N�ľ����񹦴ݻ���$n����Ԫ��������\n";
                }
        }
        return foo;
}

int valid_enable(string usage) 
{ 
return
        usage=="unarmed" ||
        usage=="parry"||
        usage=="force";
}


int valid_learn(object me)
{
        int lvl = (int)me->query_skill("jiuyin-shengong", 1);
                            
        if ( me->query("gender") == "����" )
                return notify_fail("�Թ����޸�����֮���������������߻���ħ��\n");
       if ( me->query("gender") == "����" && lvl > 49)
                 return notify_fail("���޸����ԣ���������������������ľ����񹦡�\n");
        if ((int)me->query_skill("force", 1) < 30)
                return notify_fail("��Ļ����ڹ���򻹲������޷��������񹦡�\n");
        if ( me->query_skill("taiji-shengong",1)
        || me->query_skill("xiuluo-force",1)
        || me->query_skill("suiyu-force",1)
        || me->query_skill("kunlun-xinfa",1)
        || me->query_skill("xiantian-force",1)
        || me->query_skill("xuantian-neigong",1)
        || me->query_skill("xiake-shengong",1)
        || me->query_skill("murong-xinfa",1)
        || me->query_skill("tianlong-xinfa",1)
        || me->query_skill("taiji-shengong",1)
        || me->query_skill("bahuang-gong",1))
             return notify_fail("����������Ե����ڹ��ķ����㲻��ɢ�˱����书������ѧ�����񹦣���\n");
        return 1;

if ((int)me->query("max_force") < 500)
                return notify_fail("�������������\n");
     if ((int)me->query("combat_exp") < 100000)
                return notify_fail("���������û�ﵽѧ�����񹦵ĵز��� \n");
         if ((int)me->query_skill("daoxuexinde") < 120)
            return notify_fail("�������ǵ��������������ؾ�����ĵ�ѧ�������� \n");
        return 1;
}
int practice_skill(object me)
{
        return 
notify_fail("������ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\\n");

}

int effective_level() { return 21; }

string *absorb_msg = ({
        "$n������ת��˫��΢�����޿ײ���ľ���������ȫ��\n",
        "$nʩչ�������񹦣���������翲�����\n",
        "$n����΢չ������������ͭǽ���ڡ�\n",
});

string query_absorb_msg()
{
        return absorb_msg[random(sizeof(absorb_msg))];
}
mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}
string *unarmed_parry_msg = ({
        "$n�������ȣ��������飬$N�������ɽ���\n",
        "$n����һ˦��һ�ɴ�����$N�ͳ����⡣\n",
        "$nʩչ���������޻ԡ������赭д�Ļ�����$N�Ĺ��ơ�\n",
});
string *parry_msg = ({
        "$n�������ȣ��������飬$N�������ɽ���\n",
        "$n����һ˦��һ�ɴ�����$N�ͳ����⡣\n",
        "$nʩչ�����������𡹣����赭д�Ļ�����$N�Ĺ��ơ�\n",
});
string query_parry_msg(object weapon)
{
        if( weapon )
                return parry_msg[random(sizeof(parry_msg))];
        else
                return unarmed_parry_msg[random(sizeof(unarmed_parry_msg))];
}
string exert_function_file(string func)
{
        return __DIR__"jiuyin-shengong/" + func;

}
string perform_action_file(string action)
{
        return __DIR__"jiuyin-shengong/" + action;

}
int bounce_ratio()
{
        return 40;
}

int learn_bonus()
{
        return -100;
}
int practice_bonus()
{
        return -500;
}
int black_white_ness()
{
        return 200;
}
