// Room: /d/huanggon/yongdingmen.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�������Ǿ��ǵ��ϴ���,�ߴ�ĳ�¥��'������'������Զ���ܿ���.
���������ϱ���Ľֵ�,�ϱ߳�������,���������ݺ;��ǵ�Ҫ��,�ſ�
�ľ�ʿ�̲�����.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road5",
  "north" : __DIR__"sdajie1",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chengweibin.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
