// Room: /d/kaifeng/road6.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ǻ�Ὺ���ϱ�����Ҫ�ֵ���Ҳ�ǻ��ϳ�Ѳ��Ҫ�����ֵ�����
����̨ͤ���ϣ�С����������������������������һ�ɷ���������һ��
�ߵ��������������Ŀ���������
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"jieying",
  "south" : __DIR__"road5",
  "north" : __DIR__"xuandemen",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
