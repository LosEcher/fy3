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
		"east" : __DIR__"xiaolu9",
		"west" : __FILE__,
		"north" : __DIR__"xiaolu6",
		"south" : __DIR__"xiaolu3",
	]));

	setup();
	replace_program(ROOM);
}

