// guandao2.c �ٵ�


inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
	����һ���ٸ��޽��Ĵ����������Լ���Կ���������Ķ��š�Զ
��������Կ���Ρ��ĳ�ǽ��������ͨ����ԭ��·������������ƺ���
��һ�֡�Ȱ������һ���ƣ����������޹��ˡ��ĸо���
LONG
	);

	set("exits", ([
		"east" : __DIR__"guandao1",
		"west" : __DIR__"dongmen",
	]));

	setup();
	replace_program(ROOM);
}