// Room: /d/new/huanhua/yxiangge.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����ˮ���ԵĹ����������ٶ��꣬ȴ������ٶ������ʷ����ͤ�� 
��ӳ����ˮ��ͽ��ڹ��֮��,����Ʈ��. 
LONG
	);
	set("objects", ([ /* sizeof() == 3 */
  __DIR__"npc/3yue3.c" : 1,
  __DIR__"npc/3yue2.c" : 1,
  __DIR__"npc/3yue1.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"hqiuqiao1",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
