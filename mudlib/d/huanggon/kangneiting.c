// Room: /d/huanggon/kangneiting.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
�����ǿ������д��������,�ۻ�ĵط�,���а���������ĵ���,��
��ǽ��ʮ��֧�߽������ƴ�Ź���.�߰˸�Ѿ�߶���������������.�ϱ�
���쾮,���߶����Ǻ�԰.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/kangqingwang.c" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"hougardon",
  "south" : __DIR__"tianjin",
  "west" : __DIR__"shufang",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
