//hutong 
  

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
		 
		"southwest" : __DIR__"wendingnan3",
		"northeast" : __DIR__"hutong1", 		 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

