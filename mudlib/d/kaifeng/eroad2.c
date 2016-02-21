// Room: /d/kaifeng/eroad2.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������ǿ��⸮�ڶ���������Ҫͨ������·���˵��̸��ڲ��ϡ���
�����ƣ��۹�ģ�������ģ��ʽ���ģ����׷��ѵģ������ޱȡ�����
����ɽ�¸ʻ�ݡ��������ݵ����Ͻ�¥��
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qigai.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"eroad1",
  "north" : __DIR__"eroad3",
  "east" : __DIR__"huiguan",
  "westup" : __DIR__"jiaolou2",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
