//HSQTING.C

inherit ROOM;

void create()
{
	set("short", "��ˮ�����");
	set("long", @LONG
�����Ǻ�ˮ��Ĵ���, 
LONG
	);

	set("exits", ([
//		"enter" : __DIR__"hsqchanglang",
		"south" : __DIR__"hsqchanglang",
	]));

//	set("outdoors", "mingjiao");
set("objects",([
__DIR__"npc/tangyang":1,
__DIR__"npc/menwei1":4,
           ]));
	setup();
//	replace_program(ROOM);
}
