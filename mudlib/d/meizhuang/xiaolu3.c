// Room: /d/meizhuang/xiaolu3.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
������һ���ľ���С·�ϣ�·�Ի���ïʢ������䡣̧ͷ��ȥ������
�����������ƣ���Ӱ�´£��ƺ��Ǹ����֡�
LONG
	);
	set("outdoors", "meizhuang");
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yetu" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"xiaolu2",
  "west" : __DIR__"xiaolu4",
]));

	setup();
	replace_program(ROOM);
}
