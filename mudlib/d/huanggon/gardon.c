// Room: /d/huanggon/gardon.c

inherit ROOM;

void create()
{
	set("short", "������԰");
	set("long", @LONG
�����۵��滨��ľ��,һ��С�ɵ���ͤ�ڼ���Ž�������,��������
�����ʯ�������ر�����.������ϲ���ڴ������ͻ�,��������Ϸ�����Գ�
ЩС��,�������İ���.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wangfuyahuan.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"tingyuan",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
