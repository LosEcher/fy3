// xiaolu2.c ��ɽС·


inherit ROOM;

void create()
{
	set("short", "��ɽС·");
	set("long", @LONG
	�����Ǻ�ɽ�ϵ�С·������С·�������˹������޳����ģ�
Ҳ��ֻ����ǰ�Ĳ�ҩ�˲ȶ��ˣ��ֳ�����һ��С·����
LONG
	);

	set("exits", ([
		"east" : __DIR__"xiaolu3",
		"southwest" : __DIR__"xiaolu1",
	]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}

