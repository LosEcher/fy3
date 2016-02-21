// Room: /d/suzhou/jianchiquan.c

inherit ROOM;

void create()
{
	set("short", "����Ȫ");
	set("long", @LONG
����������ǰ���Ǹ������ɵĳ�������أ������ͱ����������Ͽ��С�����
��Ȫ�����֣��ʷ�Բ���ഫ�˳�֮���˴��������������֮Ĺ�������������
��ʱ�Ա�����ǧѳ�ᡣ��ʼ�ʡ�������Ȩ��ǲ���ڴ���ʯ���޳ɣ�������ȪΪ
����Ȫ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"out" :__DIR__"yuanmen",
]));
	set("objects",([
	__DIR__"npc/youke" :1,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
}
void init()
{
	add_action("do_climb","climb");
}
int do_climb()
{
	object me;
	me=this_player();
	message_vision("$N˳���ͱ�С�������������ȥ��\n",me);
	tell_room(__DIR__"quanxia",me->query("name")+"����������������\n");
	me->move(__DIR__"quanxia");
	return 1;
}
