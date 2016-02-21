// Room: /d/new/huanhua/xiaolu3.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
��ľ�е�һ��С·,�����ǲ��������ͻ���,��ͷ����֯����һ��ƽ
���Ŀ�������,����ȥ�Ǵ���,���治Զ��һ�䷿������������������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/baidu-mo.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xiaolu2",
  "north" : __DIR__"xiaoyuan",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
