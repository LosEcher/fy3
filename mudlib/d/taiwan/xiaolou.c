// Room: /d/taiwan/xiaolou.c

inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
����һ�������С¥,��������������,�����ﾲ���ĵ�,ûһ����
Ӱ,��紵��,���ƺ�����������Ů�Ŀ���.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"huayuan",
  "north" : __DIR__"tingtang",
]));
	set("outdoors", "/d/taiwan");

	setup();
	replace_program(ROOM);
}
