// xiaolu9.c ��ɽС·


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
		"east" : __DIR__"xiaolu10",
		"west" : __DIR__"xiaolu5",
		"north" : __FILE__,
		"south" : __FILE__,
	]));

set("outdoors","/d/quanzhen");
	setup();
	replace_program(ROOM);
}

