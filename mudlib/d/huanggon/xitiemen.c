// Room: /d/huanggon/xitiemen.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�����Ÿ߸ߵ�����ɫ��ǽ��Ϧ����ʮ������.�������ŵĶ��ǵ��ؽ�
��������,���˴���,������˵���ܵ���ɽ,�˴���,����������.����ʿ
�����ĵĴ�����.
LONG
	);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/huizhu/to_bj",
  "east" : __DIR__"wchangan1",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chengweibin.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
