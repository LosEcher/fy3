// xiaolu12.c ��ɽС·


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
		"east" : __FILE__,
		"west" : __FILE__,
		"north" : __DIR__"xiaolu10",
		"south" : __FILE__,
		"enter" : __DIR__"shandong",
	]));

	setup();
	replace_program(ROOM);
}
