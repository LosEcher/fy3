// Room: /u/uuui/xuedao/xuedao1.c

inherit ROOM;

void create()
{
	set("short", "�յ�");
	set("long", @LONG
�ߵ������ƺ���������࣬�յ�����Ҳ����Щ����
ͨ�Ļ��ݣ���ȴ��ܳ�ʱ��û����������������ǰ����
����һ��ʯ����
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"xuedao0",
  "south" : __DIR__"xuedao2",
  "west" : __DIR__"xuedao4",
]));

	setup();
	replace_program(ROOM);
}
