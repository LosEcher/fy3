//hutong2
  

inherit ROOM;

void create()
{
	set("short", "С��ͬ");
	set("long", @LONG
������һ��С��ͬ�����ڰ�������Ҳ�ǻ谵�����������ƺ����˺�ͬ
�ľ�ͷ����һ���Ž����š�
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		 
		"southwest" : __DIR__"hutong1",
		 		 
	]));
      set("objects", ([
		__DIR__"npc/liumang" : 1,
	]));

	setup();
	replace_program(ROOM);
}

