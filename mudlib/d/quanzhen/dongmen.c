// dongmen.c ����


inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	�����ǳ�����Ķ��ţ���ǰ��ǽ���ʣ�ǽ�ϵļ������������
������ȥ��������������ǽ�����������׹⣬�ƺ��Ǳ���������Ĺ⡣��
�������š����š��������֣��ſ�վ��һЩ�ٱ������ֱֳ�������������
�������ǡ�
LONG
	);

	set("exits", ([
		"east" : __DIR__"guandao2",
		"west" : __DIR__"dongjie",
	]));

	set("objects", ([
		__DIR__"npc/wujiang" : 1,
		__DIR__"npc/bing" : 2,
	]));
set("outdoors","/d/quanzhen");

	setup();
	replace_program(ROOM);
}
