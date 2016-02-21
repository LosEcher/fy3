// pixie-jian.c ��а����
// Jay 4/5/96

inherit SKILL;

string *dodge_msg = ({
        "ͻȻ֮�䣬��Ӱ���ϣ�$n��󻬳����࣬��ʱ�ֻص���ԭ�أ������$N��һ�С�\n",
        "$n�ֱۻ�ת����$N������һ�ƣ�˳������һ�ԡ�\n",
        "$n�����������$N������Ѹ���ޱȵ�һ����˳������һ�ԡ�\n",
        "$n����Ʈ����������ȣ�ת�˼�ת���Ʋ���$N����󣬶����$N��һ�С�\n",
        "$Nֻ����ǰһ�����ƺ�����$n����һ�ϣ����漴�ּ�$n�ص�ԭ�أ�ȴ�ƴ�δ�뿪��\n",
	"$N�۾�һ����$n��û����Ӱ��ͻȻ$n���������һ��$N��ͷ������Ծ����\n",
	"$n��ȻһЦ������֮����$N����֪����Ǻã�ͣס�˹�����\n",
});

mapping *action = ({
([      "action":"ͻȻ֮�䣬��Ӱ���ϣ�$N��󻬳����࣬��ʱ�ֻص���ԭ��",
	"damage":120,
        "damage_type":  "����"
]),
([      "action":"$N�����������$n������Ѹ���ޱȵ�һ����$n��Щ�����Լ�С��",
	"damage":120,
        "damage_type":  "����"
]),
([      "action":"�����$N�����ϣ��ڵ�$n�������Ծ��ԭ��",
	"damage":140,
        "damage_type":  "����"
]),
([      "action":"$NͻȻ���з�һ�䣬$w�����������ʽ������ס�$n����֮�з������",
	"damage":140,
        "damage_type":  "����"
]),
([      "action":"$N����Ʈ����������ȣ�ת�˼�ת���Ʋ���$n�����",
	"damage":160,
        "damage_type":  "����"
]),
([      "action":"$Nһ����Ц������Ｒ����ǰ��һ˲֮�䣬��$n����Ѳ���һ�ߣ�$w�漴�ݳ�",
	"damage":160,
        "damage_type":  "����"
]),
([      "action":"$N�ȵ������ã������㼴�γ�$w�����ִ̳�������ת����ȥ",
	"damage":180,
        "damage_type":  "����"
]),
([      "action":"$nֻ����ǰһ�����ƺ�����$N����һ�ϣ����漴�ּ�$N�ص�ԭ�أ�ȴ�ƴ�δ�뿪",
	"damage":180,
        "damage_type":  "����"
]),
([      "action":"$N����ˣ�$n��׷������ͻȻ��$N����$n��ǰ������$wֱָ$n��$l",
	"damage":200,
        "damage_type":  "����"
]),
([      "action":"$N��س嵽$n��ǰ������$wֱ��$n���ۣ�$n��æ�мܣ�����$N��$wͻȻת��",
	"damage":200,
        "damage_type":  "����"
]),
([      "action":"$N����Ծ��$ņ��һ����������$N����ֱ����£�����$w����$n��$l",
	"damage":100,
        "damage_type":  "����"
]),
([      "action":"$N��֦�Ͱڣ�$n��ǰ�·�ͻȻ�������߰˸�$N���߰�ֻ$wһ�����$n",
	"damage":100,
        "damage_type":  "����"
]),
});


int valid_enable(string usage) 
{ 
    return usage == "sword" || usage == "dodge"; 
}

mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int valid_learn(object me)
{
        return notify_fail("��а����ֻ��ͨ����ϰ���������䡷��ѧϰ��\n");
}
int power_point()	{	return 2;	}
int hard_point()	{	return 1.5;	}

