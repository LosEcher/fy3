// Room: /u/oldsix/room1/yuemen.c

inherit ROOM;

void create()
{
	set("short", "�¶���");
	set("long", @LONG
һ��С�ɾ��µ����ţ�͸������ˮ��ĵ������š����ߴ����ݴ�������ĵ�
������һ��������������������ʱ��ȴ�˽����Ķ�Թ��
    �����ǿ���������ͨ�������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"keting2",
		"east" :__DIR__"huatan",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
