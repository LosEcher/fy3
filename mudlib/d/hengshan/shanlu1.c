// Room: /d/hengshan/shanlu1.c

inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
һ��ɽ��С·��������ɽ���������治Զ�����Ǻ�ɽ������
��ͨ�����⡣
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"shanlu2",
  "west" : __DIR__"jinlongxia",
]));
	set("outdoors", "hengshan");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
