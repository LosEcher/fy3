// Room: /d/huanggon/majiu.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
��Ƿֳ�����������,������Ƭ�ճ�,�Ա���������,��������ˮ�۱�
˩��ʮ��ƥ��,��ǽ����жѷ���Щ���,һ�ߵļ�����ƤͰ���ݵ��Ǵ�
��,ǽ�Ϲ��ż�����������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wangfumafu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"tingyuan",
]));

	setup();
	replace_program(ROOM);
}
