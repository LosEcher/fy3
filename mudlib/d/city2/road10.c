
inherit ROOM;

void create()
{
	set("short", "С��");
	set("long", @LONG
������ͨ����֮����С������·��������������������֡�
LONG );
	set("exits", ([
		"east"  : __DIR__"haigang",
		"west" :__DIR__"road1",
	]));
	set("objects",([
		"/d/taishan/npc/tiao-fu" : 1,
	]));
//	set("no_clean_up", 0);
 	set("outdoors", "city2");
	setup();
	replace_program(ROOM);
}



