// Room: /d/emei/danshi.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���������������ճ������ĵط�,���е�һ������¯������ȼ��,��
������Сͯ���Ű���������һ��,ûһ�������,��˵�������������ĵ�
����������֮Ч,������֮�˸��Ǵ�������.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"tianju",
  "north" : __DIR__"liangong",
]));

	setup();
	replace_program(ROOM);
}
