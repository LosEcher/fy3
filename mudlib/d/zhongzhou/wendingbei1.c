//wendingbei1
  

inherit ROOM;

void create()
{
	set("short", "�Ķ�����");
	set("long", @LONG
�������ݳ��Ķ����֣����Ľֵ������˲�������һ�����ֵ��Ķ�
����һ����¥������ֲ�Զ�����滮ȭ�Ⱦ����������ڶ��������ڶ���
Ҳ������ȥʹ��һ�������氵���ĺ�����һ��С� 
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"east" : __DIR__"yinghao",
		"south" : __DIR__"shizhongxin",
		"west" : __DIR__"xiaoxiang",
		"north" : __DIR__"wendingbei2",
	]));
	set("objects", ([
	__DIR__"npc/xingren" : 1,
	__DIR__"npc/xiaohai": 1,
	]));

	setup();
	replace_program(ROOM);
}

