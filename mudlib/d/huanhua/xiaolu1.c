// Room: /d/new/huanhua/xiaolu1.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
��ľ�е�һ��С·,�����ǲ��������ͻ���,��ͷ����֯����һ��ƽ
���Ŀ�������,����ȥ�Ǵ���,���治Զ��һ�䷿������������������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"xiaolu",
  "east" : __DIR__"river_room",
]));

	setup();
	replace_program(ROOM);
}
