// shanlu3.c ɽ·


inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
	ǰ�������һ����ɽ�ȣ��ߵ������ľ����Щ��ȫ���ǰ�������
����һ��������ɽ·��������ɽ�䣬Ҫ��ҹ�ﻹ�濴��������
LONG
	);

	set("exits", ([
		"southwest" : __DIR__"shanlu2",
		"northup" : __DIR__"cuipingu",
	]));

	setup();
	replace_program(ROOM);
}