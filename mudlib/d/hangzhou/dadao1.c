// Room: /d/hangzhou/dadao1.c

inherit ROOM;

void create()
{
	set("short", "���ִ�� ");
	set("long", @LONG
һ������ϱ��Ĵ��.����ʮ��������.���Ա�ֲ����.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("item_desc", ([ /* sizeof() == 1 */
  "w" : "",
]));
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"ximen",
  "east" : __DIR__"shuangf",
  "south" : __DIR__"jiufang",
  "north" : __DIR__"quyuan",
]));

	setup();
	replace_program(ROOM);
}
