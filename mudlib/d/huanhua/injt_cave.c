// Room: /d/huanhua/injt_cave.c

inherit ROOM;

void create()
{
	set("short", "���춴��");
	set("long", @LONG
���춴�ڲ���ɨ��һ����Ⱦ,����������ڸ����а��˽�ȥ�ĵط�����
����һ������������������ǰ�����ǵƻ𣬹���ݼ���������ƣ�̳ǰ
����һ�ѽ�.�Ա���һ����С�Ķ���.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"jt_cave1",
  "out" : __DIR__"jt_cave",
]));

	setup();
	replace_program(ROOM);
}
