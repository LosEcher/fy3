// Room: /u/o/oldsix/room/bigdoor.c

inherit ROOM;

void create()
{
	set("short","���ݸ�");
	set("long", @LONG
һ��������װ�Ĵ��ź�Ȼ�����������ǰ��������צ��ʯʨ�����ŵ����ԡ�
�������ż��Ž�������Ĵ�ͭ����̧ͷ��ȥ���Ŷ��ĺ�����������Ŀ�Ĵ��֡���
�ݸ������߸ߵ�̨��ͨ����ɭɭ�����ڣ����߻���ʱת���ҽ�����
LONG
	);
        set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"chengdongjie2",
	"east" :__DIR__"ermen",
]));
	set("objects",([
		__DIR__"npc/yayi" :2,
]));
	set("outdoors","room");
	set("no_clean_up",0);
	setup();
}
int valid_leave(object me, string dir)
{
	object yayi;
	yayi=present("yayi");
	if(!userp(me))	{
		if (dir=="east")	return 0;
			else return 1;
	}
	if(!yayi)	return 1;
	if(me->query_temp("oldsix_flag/enter")==1)	{
		me->set_temp("oldsix_flag/enter",0);
		return 1;
	}
	if(dir!="east")	return 1;
	notify_fail("���۴����ȵ��������˵ȣ���ֹ���ڣ���\n");
	return 0;
}
