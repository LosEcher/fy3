// Room: /d/huanggon/wyshanzhuang.c

inherit ROOM;

void create()
{
	set("short", "����ɽׯ");
	set("long", @LONG
ׯǰ��ƬС����,�ü������¶��Ź⻬�ľ�ʯ,���Ǽȹ��˹���,�ֿ�
Ъ��.���ϴ�ɨ�úܸɾ�,�������˾����ڴ�����.����ׯԺ�ſ����˸���
��,���滹����յ����.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"shulin",
  "north" : __DIR__"dating",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
