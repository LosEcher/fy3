// Room: /d/huanggon/baohedian.c

inherit ROOM;

void create()
{
	set("short", "���͵�");
	set("long", @LONG
���͵��Ǹ������Ĵ�,���Ӽ����͵ĵ���.�����Ҵ�������ѽ�,��
���ڴ��������ʹ�ں�������������,���Կ�ԱҲ���ڴ�.������Ǭ����,
�ϱ����к͵�.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/qiluonuofu.c" : 1,
  __DIR__"npc/huabosiji.c" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"zhonghedian",
  "north" : __DIR__"qianqinmen",
  "east" : __DIR__"shiweifang",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
