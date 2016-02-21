// Room: /d/suzhou/daoxiangcun.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����������ݲ�ʳ�ǹ�ҵ��һ���ϵ꣬�ഫ������Ǭ¡��䡣����������
֮���ɣ�һ˵�������ϲ������¥�Ρ��������еõ���ʾ�����ԡ�����塱������
���ڴ˵����������������ֶ�ȱ����˵��������й�һЩ������ǰ���ɻ��Ȼ
Ҳ��һ���ĳ��͡�
LONG
	);
	set("objects",([
		__DIR__"npc/changgong" :2,
		__DIR__"npc/shen" :1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengbeijie3",
]));
	set("no_clean_up", 0);

	setup();
}
void init()
{
	add_action("do_work","work");
}
int do_work()
{
	object me;
	me=this_player();
	if(!living(me))	return 0;
	if((int)query_temp("have_worked")>50)
	return notify_fail("�ܼ�̽��ͷ���������������ˣ��´�������ɡ�\n");
	if(me->query("sen")<11||me->query("gin")<11||me->query("kee")<11)	{
		write("����ǧ��ע�����塣\n");
		return 1;
	}
	tell_object(me,"�������ĸ����˻�����۵�Ҫ����\n");
	add_temp("have_worked",1);
	me->add("kee",-10);
	me->add("gin",-10);
	me->add("sen",-10);
	clone_object("/obj/money/silver.c")->move(me);
	return 1;
}
