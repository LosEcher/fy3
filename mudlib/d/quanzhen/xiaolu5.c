// xiaolu5.c ��ɽС·

inherit ROOM;

void create()
{
	set("short", "��ɽС·");
	set("long", @LONG
	�����Ǻ�ɽ�ϵ�С·������С·�������˹������޳����ģ�
Ҳ��ֻ����ǰ�Ĳ�ҩ�˲ȶ��ˣ��ֳ�����һ��С·�����ߵ������
������·�ˡ�
LONG
	);

	set("exits", ([
		"east":__DIR__"xiaolu12",
		"west":__DIR__"xiaolu4",
		"north":__FILE__,
		"south":__FILE__,
	]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}

