// Room: /d/huanggon/ciqinggon.c

inherit ROOM;

void create()
{
	set("short", "̫���޹�");
	set("long", @LONG
��̫���޹����������غ�ɫγ��,����ڼ�һ����ڳ����Ǹ��Ÿ��
�Ĺ���,���ߵ�����һ֦������򻹵�����,�ıߵĴ����������˴���.��
��ͨ������԰.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/huangtaihou.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"cininggon",
]));

	setup();
	replace_program(ROOM);
}
