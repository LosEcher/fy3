// Room: /u/oldsix/room1/shuilu1.c

inherit ROOM;

void create()
{
	set("short","̫��");
	set("long", @LONG
�㷢������������һ��С���ϣ�����һƬˮɫ���ֲ��巽��ͷ����ǡ������
��ӡ�ֻ��ϧľ�����ѹ��ϣ�Ҫ����ȥ��ֱ�ǲ����ܵġ�������ֻ�û���ȥ������
���ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
}
void init()
{
	add_action("do_hua","hua");
}
int do_hua(string str)
{
	object me;
	me=this_player();
	if (!str)	{
		write("��Ҫ���Ķ�����\n");
		return 1;
			}
	if (str=="n"||str=="s"||str=="w"||str=="e"||
		str=="north"||str=="south"||str=="west"||str=="east")
						{
		me->move(__DIR__"shuilu2.c");
		return 1;
			}
	write("û���������\n");
	return 1;
}
