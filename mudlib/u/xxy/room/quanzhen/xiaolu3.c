// xiaolu3.c ��ɽС·


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
		"east" : __DIR__"xiaolu4",
		"west" : __DIR__"xiaolu2",
		"north" : __DIR__"xiaolu5",
		"south" : __DIR__"xiaolu7",
	]));

	setup();
	replace_program(ROOM);
}

