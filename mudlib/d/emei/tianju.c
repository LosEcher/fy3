// Room: /d/emei/tianju.c

inherit ROOM;

void create()
{
	set("short", "���ľ�");
	set("long", @LONG
���Ǿ��������ĵľӴ�,����������ϲ�徲,��������ط��صر�
�˸�ʯ��,�����ڴ˱չ�����,������������,ϸ����,�Ǵӱڼ�һ��С
������ӿ����,��˵�ǵ�����ϷѾ�����,�������ľ�������.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"danshi.c",
  "south" : __DIR__"pubuding.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/su.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
