// Room: /d/hangzhou/xiaolu.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
����԰���һ��С·,·�߳�����Ұ��.һֱ�����ɽ����ľ��ȥ.
ʱ�ܿ�������СҰ�޴ӵ���ͻȻ�ڳ���.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"huagang",
  "southwest" : __DIR__"xiaolu1",
]));

	setup();
	replace_program(ROOM);
}
