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
		"west":__DIR__"xiaolu5",
		"north":__FILE__,
		"south" : __FILE__,
		"enter" : __DIR__"shandong",
	]));
set("outdoors","/d/quanzhen");

	setup();
	replace_program(ROOM);
}

