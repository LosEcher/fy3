// Room: /d/huanggon/cininggon.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�������ǻ�̫��ľӴ�,�������������Ǹ���Ժ��,Ժ�г�����ֲ��
����,Ժ�м�ɽ֮���Ǽ�����÷.�����Ǹ��¶���ͨ������԰,�����ǻ�̫
����޹�.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ruichu.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"yuhuayuan2",
  "east" : __DIR__"ciqinggon",
]));

	setup();
	replace_program(ROOM);
}
