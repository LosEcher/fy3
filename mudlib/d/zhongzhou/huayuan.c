//huayuan	
  

inherit ROOM;

void create()
{
	set("short", "С��԰");
	set("long", @LONG
������̫ү��ǰ��С��԰��������ľ�����ﻨ�㡣��һ�����еĵ�
����͸��һ��ĵ�������������������̫ү�ĸ�ۡ��������᷿��΢�¾�
һ�㡣�����Ǹ������˵����ӡ�
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"west" : __DIR__"xiaren",
		"north" : __DIR__"taiyefu",
		"east" :__DIR__"zoulang", 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

