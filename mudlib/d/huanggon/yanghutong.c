// Room: /d/huanggon/yanghutong.c

inherit ROOM;

void create()
{
	set("short", "������ͬ");
	set("long", @LONG
������ͬ����������С��ͬ,���϶���ʯ��·,��������,�����
�����ƾ�,���Ӻܰ�С,Ҫ���ŵĻ�һ��Ҫ����ͷ����,�������˵��ӵ�
С��������߾���.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"xidan1",
  "northwest" : __DIR__"yanghutong1",
]));

	setup();
	replace_program(ROOM);
}
