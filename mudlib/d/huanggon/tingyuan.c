// Room: /d/huanggon/tingyuan.c

inherit ROOM;

void create()
{
	set("short", "����ͥԺ");
	set("long", @LONG
������ͥԺ,һ��ֱ��ͨ����Ĵ���,�����ǻ�ľ�����Ļ�԰,����
��Ѿ���͸��ҴҶ���.�ϱ߾��Ǵ���,ƽ��ʱ��ֻ������,���Ž���.��ͥ
Ժ�����һЩ������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"majiu",
  "south" : __DIR__"kangwangfu",
  "north" : __DIR__"kangdating",
  "west" : __DIR__"gardon",
]));

	setup();
	replace_program(ROOM);
}
