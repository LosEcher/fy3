// Room: /u/uuui/xuedao/xuedao84.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����ǹ�ľ�Ӿ�ͷ��һ��С��������������ǰ����
���������¿�ȥ����Χ����һƬ�����ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"xuedao83",
  "south" : __DIR__"xuedao85",
  "east" : __DIR__"xuedao87",
  "west" : __DIR__"xuedao82",
]));

	setup();
	replace_program(ROOM);
}
