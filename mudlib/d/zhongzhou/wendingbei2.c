//wendingbei2
  

inherit ROOM;

void create()
{
	set("short", "�Ķ�����");
	set("long", @LONG
�������ݳ��Ķ����֣����Ľֵ������˲�������һ�����ֵ��Ķ�
����һ��ҩ�̡��ߵ�����Ϳ����ż�һ��ŨŨ��ҩζ�������������У�
ԭ����һ��ϷԺ�ӡ�
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"east" : __DIR__"yaopu",
		"south" : __DIR__"wendingbei1",
		"west" : __DIR__"xiyuan",
		"north" : __DIR__"wendingbei3",
	]));
	set("objects", ([
	__DIR__"npc/xiashi.c" : 1,
	]));

	setup();
	replace_program(ROOM);
}

