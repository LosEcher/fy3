// Room: /d/kaifeng/tinyuan.c

inherit ROOM;

void create()
{
	set("short", "��ͤ԰");
	set("long", @LONG
һƬ��ľ������԰�֡�԰�ֵ��ϱ����߷ֱ�����Һ����˼Һ�����
�б̲����������ߴ����������������𡣴Ӵ��򶫣�����ͤ����
��������ֵ�.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/youke.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"longting",
  "west" : __DIR__"wroad3",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
