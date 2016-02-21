// Room: /d/suzhou/zhuozhengmen.c

inherit ROOM;

void create()
{
	set("short", "׾��԰");
	set("long", @LONG
��԰���Ĵ���԰֮һ���ഫ�����ƴ�ĳλʫ�˵�סլ��������Ϊ��Ժ������
����ͥ����Ĵ�Ա���£���˵��λ��Ա�������Ļ����䣬��Ϊ��ׯ԰ȡ����׾����
�������´�����һ�£�ֻ��Χǽ���ƴ��Ž��գ�Ҳ��֪��λ��Ա�����Ƿ��ڼҡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengbeijie4",
]));
	set("item_desc",([
		"Χǽ"	: "Χǽ����Լ��Щ��ӡ����֪˭�����������\n",
		"weiqiang":"Χǽ����Լ��Щ��ӡ����֪˭�����������\n",
]));
	set("objects",([
		__DIR__"npc/jieba":2,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
}

void init()
{
	add_action("do_climb","climb");
}

int do_climb(string dir)
{
	object me=this_player();

	if( !living(me))	return 0;
	if( ! dir || (dir!="weiqiang"&&dir!="Χǽ"))
		return notify_fail("��Ҫ��ʲô��\n");
	if( (int)me->query("kee")<50)
		return notify_fail("���������������������\n");
	if( (int)me->query_skill("dodge")<50)
		return notify_fail("����Ṧ̫���ˡ�\n");
	message_vision("$N����Χǽ���˽�ȥ��\n",me);
	me->move(__DIR__"yuannei1");
	return 1;
}

