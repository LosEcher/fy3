//wendingnan4
  

inherit ROOM;

void create()
{
	set("short", "�Ķ��Ͻ�");
	set("long", @LONG
�������ݳ��Ķ��Ͻ֣����Ľֵ������˲�������һ�����Ϳ쵽����
���ϳ����ˡ�·����һ����վ��
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		 "south" : __DIR__"nanmeng",
		"west" : __DIR__ "shuyuan",
		 "north" : __DIR__"wendingnan3",
		"east" : __DIR__"yizhan",
]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

