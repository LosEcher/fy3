// Room: /d/huanggon/muwangfu.c

inherit ROOM;

void create()
{
	set("short", "�׸�");
	set("long", @LONG
����������ͬ�׵�һ��լ��,����Ĵ������߹�����յ��ɫ����.��
������ɥ��,�����ڴ�����������.һ���Ϲܼ����ſ�͵͵��Ĩ����,��
�����Ͽɳ�������ͬ.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/laoguanjia.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"yanghutong1",
  "north" : __DIR__"neitang",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
