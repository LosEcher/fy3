// xiaoyao-you.c
//��ң��
inherit SKILL;

string *dodge_msg = ({
	"$nһ�С�հ����ǰ���������ɵر��˿�ȥ��\n",
	"ֻ��$n����һת��һʽ���������á���������$N�Ĺ�����\n",
	"$nʹ����΢��������������΢����$N�����˸��ա�\n",
	"$n����һ�ˣ�����һ�֣�һ�С��������ޡ��ѱ��˿�ȥ��\n",
	"����$nʹһ�С��������ˡ�����������ɴһ��Ʈ�˿�ȥ��\n",
	"$n��������������࣬�Ѿ���һ�С��������ӡ�����������\n",
	"����$nһ�С�հ���ں�ʹ������Ȼ�Ƶ�$N���ᣡ\n"
});

string *dodge_msg_low = ({
	"$nһ�С�հ����ǰ�����������ĵر��˿�ȥ��\n",
	"ֻ��$n����һת�����������ʹһʽ���������á�����������$N�Ĺ�����\n",
	"$nʹ����΢�������������λ�����ȥ��ȴ����һƬ������$N�����˸��ա�\n",
	"����$nʹһ�С��������ˡ�����Ҳ�Ƶ��ӵ�Զ��ȥ�ˡ�\n",
	"$n�����������������һſ��һ�С��������ӡ������ö㿪�ˡ�\n",
	"$n�۵ؾ���һ�����³�ͻȻ��ֻ��ʹ������ʺ���Һ�û��$N���У�\n",
// above item is not dodge skill in lingbo-steps, but is ���ܷ�Ӧ
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 40 )
		return notify_fail("�������̫���ˣ��޷���ϰ��ң�Ρ�\n");
		me->receive_damage("kee",30);
        return 1;
}

