//xiuxishi
  

inherit ROOM;

void create()
{
	set("short", "��Ϣ��");
	set("long", @LONG
һ��СС����Ϣ�ң�ûʲô���������ߵ�����ֻ�����ºú���Ϣһ��
����ͷ������С����õ�Ũ�衣
LONG
	);
	set("no_fight", 1);
set("sleep_room",1);

	set("exits", ([
		"east" : __DIR__"yinghaoup",
		
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));
set("no_steal",1);

	setup();
	replace_program(ROOM);
}

