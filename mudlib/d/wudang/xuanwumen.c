// Room: /d/wudang/xuanwumen.c

inherit ROOM;

void create()
{
	set("short", "̫����");
	set("long", @LONG
	�������ǰ��һ���ߴ��ʯ��������д�š������š������ֽ���֣���
�������Զ���þ���ɹ���ܣ��Ѿ��Ե���Щ��������������һ��С�Ե꣬��ʱ��
�м������ڳԷ�����Ϣ����������һ��ʯ��·һֱͨ��ɽ�£�������һ������
���ۣ�ȴ���������ʣ����Ǹս��ɲ��á�
LONG
	);
	set("outdoors", "wudang");
	set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"shijie",
  "northup" : __DIR__"xiaochidian",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/daotong" : 2,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
