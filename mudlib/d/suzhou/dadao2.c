// Room: /d/suzhou/dadao1.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
�����������պ��Ĵ�����׻�˵���������ã������պ���������˵�����
��Ϣ���������֡����ڹٸ��Ķ����ˣ�·�˲����ٵ��İ�ȫ�����ˡ�������
·���Է羰�续����������ʱ�泩����ࡣ���������ݣ��������Ǻ��ݡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north" :__DIR__"dadao1",
	"south" :__DIR__"dadao3",
]));
	set("objects",([
		"/npc/man5":1,
	]));
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
