// Room: /d/kaifeng/eroad1.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������ǿ��⸮�ڶ���������Ҫͨ������·���˵��̸��ڲ��ϡ���
�����ƣ��۹�ģ�������ģ��ʽ���ģ����׷��ѵģ������ޱȡ�����
��Զ����ɽ�¸ʻ�ݡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/hanzi.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"eroad",
  "north" : __DIR__"eroad2",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
