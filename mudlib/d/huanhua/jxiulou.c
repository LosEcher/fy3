// Room: /d/new/huanhua/jxiulou.c

inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
    ˮ�ӱ����г��� 
        �������������С� 
������ʤ�������ϵļ���¥,�ȿɹ��ͷ羰,�ֿ�Ʒ������. 
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "northdown" : __DIR__"jhongqiao",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/2jian2.c" : 1,
  __DIR__"npc/2jian1.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
