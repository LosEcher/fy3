// Room: /u/oldsix/room1/huan_2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
��ĿԶ����ֻ���̲����죬Զˮ���죬������ͷ�����߲�Զ����һ������
֦�ɵ�ľ�ݣ�������ͨ��ˮ�档һֻ[1;32mС��[2;37;0mϵ����֦֮�ϡ���������֦��һֻС
��ɯɯ��ɯ���Ľ���������������ࡣ
LONG
	);
	set("item_desc",([
		"С��" : "һ��С��(xiaochuan)�����з��ŶԽ��������������������¡�\n"
			+"�㿼����һ�£�����Ҫ��Ҫ�ϴ�(boat)��\n",
		"xiaochuan" :"һ��С�������з��ŶԽ��������������������¡�\n"
			+"�㿼����һ�£�����Ҫ��Ҫ�ϴ�(boat)��\n",
		]));
	set("exits", ([ /* sizeof() == 1 */
		"up":__DIR__"tuoman",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
}
void init()
{
	object me;
	me=this_player();
	add_action("do_boat","boat");
}
int do_boat()
{
	object me;
	me=this_player();
	message_vision("$NС�����������С�������û�з������⡣\n"
			+"$N����˫���������İ�С����(hua)���˺��С�\n"
			+"С���밶Խ��ԽԶ������\n",me);
	me->move("/d/suzhou/taihu/n2.c");
	return 1;
}
