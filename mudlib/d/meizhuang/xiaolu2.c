// Room: /d/meizhuang/xiaolu2.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
������һ���ľ���С·�ϣ�����÷����������Ȼ��û�����������ӣ�
�����ܸо���÷���ĵ��������ˣ���پ�����ٱ���
LONG
	);
	set("outdoors", "meizhuang");
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xingren" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"xiaolu3",
  "east" : __DIR__"xiaolu1",
]));

	setup();
	replace_program(ROOM);
}
