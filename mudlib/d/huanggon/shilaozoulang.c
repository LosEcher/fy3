// Room: /d/huanggon/shilaozoulang.c

inherit ROOM;

void create()
{
	set("short", "ʯ������");
	set("long", @LONG
ʯ������������,һ������ͨ�򱱱ߵ�һ��С��,����֮�����һ��
����,һ���Ϻ�������,�ӱ���С���д��������������������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shaolaohan.c" : 1,
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"shilaoxiaotang",
  "south" : __DIR__"shiwu",
]));

	setup();
	replace_program(ROOM);
}
