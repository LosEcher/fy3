//musix yangzhou's ����

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	������һ���ª��������ֻ�е���һ�Ų�ϯ��

LONG
	);

	set("sleep_room", 1);
	set("no_fight", "1");
//        set("hotel",1);

	set("exits", ([
		"south" : __DIR__"daxiongbaodian",
	]));

	setup();
}


