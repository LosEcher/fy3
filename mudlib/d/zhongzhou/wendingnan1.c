//wendingnan1
  

inherit ROOM;

void create()
{
	set("short", "�Ķ��Ͻ�");
	set("long", @LONG
�������ݳ��Ķ��Ͻ֣����Ľֵ������˲�������һ�����ֵ��Ķ���
������������һ���˳��������һ�ҵ��棬һ���������������֪����һ
�Ҳ�С��Ǯׯ��
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"east" : __DIR__"canchang",
		"south" : __DIR__"wendingnan2",
		"west" : __DIR__"bank",
		"north" : __DIR__"shizhongxin",
	]));
	set("objects", ([
		__DIR__"npc/liumang" : 1,
		__DIR__"npc/xiaohai" : 1,
	]));

	setup();
	replace_program(ROOM);
}

