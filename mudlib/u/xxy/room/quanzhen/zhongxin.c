// zhongxin.c ���Ĺ㳡


inherit ROOM;

void create()
{
	set("short", "���Ĺ㳡");
	set("long", @LONG
	�����ǳ���������Ĺ㳡���������Ǹ�С��ֻ���������--��
���Ƕ��֣����֣��Ͻֺͱ��֣����������ϡ��ߵ����·�ϵ����˶�
��Щ�������㶼�ͺ������ع���Ϊ��
LONG
	);

	set("exits", ([
		"east" : __DIR__"dongjie",
		"west" : __DIR__"xijie",
		"north" : __DIR__"beijie",
		"south" : __DIR__"nanjie",
	]));

	set("objects", ([
		__DIR__"npc/liumang" : 2,
	]));

	setup();
	replace_program(ROOM);
}