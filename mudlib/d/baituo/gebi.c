//gebi

inherit ROOM;

void create()
{
	set("short", "���");
	set("long",
	     "�������ٽ�ɳĮ�ĸ��̲���������̡�������һ���޼ʵĴ�ɳĮ��\n"
	 "���������Կ���һ��С��\n"
	);
	set("outdoors", "baituo");
	set("exits", ([
		"east":__DIR__"shamo1",
		"northwest" : __DIR__"dongjie",
	]));
	setup();
	replace_program(ROOM);
}
