// shijie5.c ʯ��


inherit ROOM;

void create()
{
	set("short", "ʯ��");
	set("long", @LONG
	����һ�������ʯ��·����ɽ����������ɽ�Ƶ������������ۡ���
��ɽ�ƶ��ˣ������޽�����ʯ��ʱ�϶����˲�С�Ĺ����ߵ�����Ѿ���
�Կ���ȫ��������۵��ܽ��ˡ�
LONG
	);

	set("exits", ([
		"northup" : __DIR__"banshanting",
		"southdown" : __DIR__"shijie4",
	]));

set("outdoors","/d/quanzhen");
	//set("objects",([
	//	__DIR__"npc/youke" : 1,
	//	__DIR__"npc/xiangke" : 1,
	//]));

	setup();
	replace_program(ROOM);
}
