// thd:jiuyin1.c
// 97.7.14 by Aug

inherit ITEM;

void create()
{
	set_name("�����澭�Ͼ�", ({ "jiuyin jing1","jing1" }) );
	set_weight(100);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 10000);
		set("long", "���Ǳ���ѧ���顣\n");
	}
	setup();
}

string valid_study(object me, string arg)
{
	if ( me->query_skill("literate") < 1 )	{
		notify_fail("�㻹����ȥ��ʶ�����ְɡ�\n");
		return;
	}
	if ( me->query_skill("force", 1) >49 ) {
		notify_fail("��������������ԣ�ʵ����̫��ǳ�ˡ�\n");
		return;
	}

	write("�������۾���ϸϸ���Ķ��������澭�Ͼ��ϵ�˵����\n");

	return "force";
}
