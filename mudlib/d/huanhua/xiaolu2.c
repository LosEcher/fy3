// Room: /d/new/huanhua/xiaolu2.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
��ľ�е�һ��С·,�����ǲ��������ͻ���,��ͷ����֯����һ��ƽ
���Ŀ�������,����ȥ�Ǵ���,���治Զ��һ�䷿������������������.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xiaolu3",
  "southeast" : __DIR__"9quqiao4",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
