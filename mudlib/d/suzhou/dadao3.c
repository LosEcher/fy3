// Room: /d/suzhou/dadao3.c

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
	set("outdoors", "suzhou");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"dadao2",
  "south" : "/d/hangzhou/lu3",
]));

	setup();
	replace_program(ROOM);
}
