// Room: /d/kaifeng/jieying.c

inherit ROOM;

void create()
{
	set("short", "�������");
	set("long", @LONG
������������ǿ�����������ֵĵط���˭���뱻�������������
�ء����ڹ���������񣬷���ǰ������һյ�����ĵ�������ţ����ճ�
�����Ӵ˵��ȥ�����ܿ������������ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road6",
  "east" : __DIR__"tieta",
]));

	setup();
	replace_program(ROOM);
}
