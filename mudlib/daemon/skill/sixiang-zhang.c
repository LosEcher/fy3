inherit SKILL;
#include <ansi.h>
mapping *action = ({
([      "action" : "$N��$nңңһ�ϣ�һʽ��������̩����˫�ƴ󿪴��أ�����$n�Ľ�����",
        "damage_type" : "����",
	"damage":50,
]),
([      "action" : "������$N�溬΢Ц��һʽ���������项��˫���Ʋ����ƣ�ͬʱ����$nȫ�������",
        "damage_type" : "����",
	"damage":80,
]),
([      "action" : "$N�������һʽ��������ɳ����˫����£���У�����$n����磡",
        "damage_type" : "����",
	"damage":110,
]),
([      "action" : "$Nһʽ���׶���������˫����Ѹ�ײ����ڶ�֮�ƣ�����$n������̫��Ѩ��",
        "damage_type" : "����",
	"damage":140,
]),
([      "action" : "$Nʹһʽ��ժ�ǻ�����������������˫�����֣�һ������$n�ĺ��ȥ",
        "damage_type" : "����",
	"damage":170,
]),
([      "action" : "$Nһʽ�����Ľ�ħ����˫�����÷��ã��ƶ��Ƕ��������缱����ʹ$n�������У�",
        "damage_type" : "����",
	"damage":200,
]),
});

int valid_enable(string usage) { return usage=="unarmed" ||  usage=="parry"; }

int valid_learn(object me)
{
        return 1;
}


mapping query_action(object me)
{
        int i, level, force, ljz, sxz, unarmed;
        force = me->query("force");
        sxz = me->query_skill("sixiang-zhang", 1);
        ljz = me->query_skill("emei-xinfa", 1);
        unarmed = me->query_skill("unarmed", 1);
        if (ljz > 79 && sxz > 79 && unarmed > 79 && force > 500
            && random(me->query_int()) > 24 ){
                me->add("force", -60);
                if(random(10) < 2 )
                return ([
                "action":HIY
    "��ʱ��,�����羲���ƺ�ƽ�̣������Լ��������$N����б���������γɲ�ɫ�⻷��$N�����Լ�����Ӱ�����س�������ɫ�����ϡ�"HIC"���⻷���˶�����Ӱ�ڻ��С�"HIY",ʹ����"HIW"�����ƾ�ѧ"HIY"���𶥷�⡻"NOR,
		"weapon" : HIY"�𶥷��"NOR,
		"damage":300,
                "damage_type": "����"]);
          }
	return action[random(sizeof(action))];

}

int practice_skill(object me)
{
        if ((int)me->query("gin") < 30)
                return notify_fail("��ľ���̫���ˡ�\n");
        if ((int)me->query("kee") < 20)
                return notify_fail("������������������ơ�\n");
        me->receive_damage("gin", 15+random(10));
        me->add("force", -5+random(5));
        return 1;
}

string perform_action_file(string action)
{

    return "/daemon/class/emei/sixiang-zhang/" + action;

}
