// Room: /d/huanhua/jt_cave1.c

inherit ROOM;

void create()
{
	set("short", "���춴��");
	set("long", @LONG
���춴��ƫ��,����ռ�ܴ�,���������ٸ��ײ�,��ǽ��һ�ż�����,
���ų�����,������ɫ�����Ѿ�����Ϩ��.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/9arrow.c" : 3,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"injt_cave",
]));

	setup();
	replace_program(ROOM);
}
