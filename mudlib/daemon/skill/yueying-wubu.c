// tiyunzong.c ������
// written by Xiang

inherit SKILL;

string *dodge_msg = ({
	"$n����һ�Σ�����һŤ��һ�С��Ǻ����𡹣����ض���\n",
	"$nһ�С��辡�һ��ȵ׷硹��$Nֻ����ǰһ����������$n����Ӱ��\n",
	"$nһ�С�ɨ�����Ʒ粻����������΢�Σ��о����յرܿ���$N��һ�С�\n",
	"ֻ��$n�������һ����һ�С�����º�Ӱ�����󵴶�������һ�ԡ�\n",
	"$nһ�С�����Ū��Ӱ�������䷭�ɣ����$N��һ�С�\n",
	"ȴ��$n�����꽭��һ�طɡ����������һ�����ۣ��������ۡ�\n",
	"����$nһ������ˮ�仨��ȥҲ��������һ�ã�$N��һ�����˸��ա�\n",
	"$nϢ���������������һ�С���������Ӱ�ڲ���������ƮȻ����\n",
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if( (int)me->query("kee")<40)
		return notify_fail("�������̫���ˣ������������貽��\n");
	me->receive_damage("kee",30);
        return 1;
}

