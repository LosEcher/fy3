// Room: /d/tianxia/1guan8.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ���������������ȣ�������һ������С���䣬���ȵĶ��ܸߣ���
Ϊ����ԭ�������ղ������棬�������߱��ϸ�����Զ�����͵Ƶ��š�
���ߵķ����в�ʱ�������˴������
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"sleeproom",
  "west" : __DIR__"1guan7",
  "east" : __DIR__"1guan9",
]));

	setup();
	replace_program(ROOM);
}
