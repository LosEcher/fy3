//hutong1
  

inherit ROOM;

void create()
{
	set("short", "С��ͬ");
	set("long", @LONG
	������һ��С��ͬ�����ڰ�������Ҳ�ǻ谵������ 
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		 
		"southwest" : __DIR__"hutong",
		"northeast" : __DIR__"hutong2", 		 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

