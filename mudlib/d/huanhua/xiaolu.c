// Room: /d/huanhua/xiaolu.c

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
  "west" : __DIR__"dating",
  "east" : __DIR__"xiaolu1",
]));

	setup();
	replace_program(ROOM);
}
