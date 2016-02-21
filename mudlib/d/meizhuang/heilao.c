// Room: /d/suzhou/meizhuang/laofang.c
inherit ROOM;
#include <ansi.h>
void create()
{
	set("short","���׺���");
	set("long", @LONG
СС��һ�����ң�û�а�˿��Ϣ��ʪ���ѵ��������ڵĽ����п����壬
���Ǹ�����֮��˯���ĵط��ɡ������ж�������Ҳ��֪��������Ӣ�ۺ��ܡ�
���ε��������и����ף�������ղ�������ĵط���
LONG
	);
	set("no_clean_up", 0);
	set("exits",([
]));
	set("item_desc",([
		"����": "���ߺܰ�������ʲô����֪�ܷ��꣨zuan����ȥ��\n",
		 "dongkong":"���ߺܰ�������ʲô����֪�ܷ��꣨zuan����ȥ��\n",
		"����":"�����΢���Ĺ��ߣ�����ȥ��\n"+
"�Ϸ���ƽ�������ɱ�����飬���Ӻ��ף�����Ӧ��֮����\n"+
"Ψ�Ϸ������б����ڴˣ�һ��ͨ�쳹���񹦣��������Ϸ�ݹ�ͬ�࣬\n"+
"����С�ӣ���֪�Ϸ�֮�ܣ��ຶ��Ҳ��\n"+
"�Ƚ��Ϸ��񹦾���Ҫּ�������ڴˣ�����С��ϰ֮���е��ݺ����£�\n"+
"�Ϸ����Ҳ����ӡ�........\n"+
CYN"��������ƺ�����ר��ר�У�zuanyan����\n"NOR,
]));
	setup();
}
void init()
{
        add_action("do_zuan","zuan");
		add_action("do_study","zuanyan");
}

int do_study(string str)
{
	object me;
	int level;

	me=this_player();
	if(str!="����"&&str!="tieban")  
		return notify_fail("��Ҫר��ʲô��\n");
	if( !me->query_skill("literate", 1) )
		return notify_fail("���Ǹ���ä��������ѧ���Ļ��ɡ�\n");
		message_vision(CYN"$N����ר���ж�ʯ���ϼ��صĹ���\n"NOR,me);
	if(!me->query_skill("xixing-dafa",1))	level=0;
	else level=me->query_skill("xixing-dafa",1);
	if( level>=(int)me->query_skill("force",1))
		return notify_fail("������������Ļ����ڹ��ɡ�\n");
	if(level>=200)
	return notify_fail("���ж���һ��������Ƿ���������˵�Ķ�����Զ�̫ǳ�ˣ�û��ѧ���κζ�����\n");
	if(me->query("combat_exp")<level*level*level/10)
	return notify_fail("���ʵս���鲻��������ôר��Ҳû�ã�\n");
	if(me->query("sen")<50||me->query("gin")<50)
	return notify_fail("�����ھ��񲻼ѣ�û�취ר�������ϵ���ѧ��\n");
	me->receive_damage("sen",25+random(25));
	me->receive_damage("gin",25+random(25));
	if(random(me->query_int())<15)	{
	 message_vision(RED"ͻȻ֮��$N����һ�������ۡ���һ���³�һ�����Ѫ��\n"NOR,me);
	me->receive_wound("kee",20+random(20));
		return 1;
	}
	if(!me->query_skill("xixing-dafa",1))
		me->set_skill("xixing-dafa",0);
	me->improve_skill("xixing-dafa",random(me->query_int()));
	tell_object(me,"��ġ����Ǵ󷨡�������ߣ�\n");
	return 1;
}
int do_zuan()
{
        object me;
        me=this_player();
        if(me->query_encumbrance()>5000)        {
                return notify_fail("�����ϴ��Ķ���̫���ˣ������겻��ȥ��\n");
        }
        message_vision(CYN"$N����΢���������Ŷ��������˽�ȥ��\n"NOR,me);
		me->move(__DIR__"tiemen");
        return 1;
}
