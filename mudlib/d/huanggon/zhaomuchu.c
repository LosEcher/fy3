// Room: /d/huanggon/zhaomuchu.c

inherit ROOM;

void create()
{
	set("short", "̫����ļ��");
	set("long", @LONG
һ���լ��,��ɫ�Ĵ�����������ź�ֽ��,��д'̫����ļ��',ԭ
�����ǹ�����̫��Ĵ���,�гԲ������ȥ��,�������˱���.������
��������.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/xiaoguizi.c" : 1,
  __DIR__"npc/haidafu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"echangan",
]));

	setup();
	replace_program(ROOM);
}
