// houshan.c ��ɽ


inherit ROOM;

void create()
{
	set("short", "��ɽ");
	set("long", @LONG
	�����Ѿ���������������������ɽ�ĺ�ɽ���������ﻨ�㣬��
�����£�ɽ��Ҳƽ���ö��ˡ�
LONG
	);

	set("exits", ([
		"west" : __DIR__"jingxiushi",
		"northeast" : __DIR__"xiaolu1",
	]));

	setup();
	replace_program(ROOM);
}

