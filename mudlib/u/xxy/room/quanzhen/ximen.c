// ximen.c ����


inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	�����ǳ���������ţ���ǰ��ǽ���ʣ�ǽ�ϵļ������������
������ȥ��������������ǽ�����������׹⣬�ƺ��Ǳ���������Ĺ⡣��
�������š����š��������֣��ſ�վ��һЩ�ٱ������ֱֳ�������������
�������ǡ��������۶��򱱣���������ɽ���ˡ�
LONG
	);

	set("exits", ([
		"east" : __DIR__"xijie",
		"northeast" : __DIR__"shanlu1",
	]));

	set("objects", ([
		__DIR__"npc/wujiang" : 1,
		__DIR__"npc/bing" : 2,
	]));

	setup();
	replace_program(ROOM);
}