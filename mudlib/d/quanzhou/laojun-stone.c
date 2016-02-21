// Room: /d/quanzhou/laojun-stone.c

inherit ROOM;

void create()
{
	set("short", "�Ͼ���");
	set("long", @LONG
����ɽ������˸���,����һ���޴��ʯ����������,����һ������ 
�ߵľ�ʯ,�����̳�̫���Ͼ���ģ��,��������,�̹��ǳ�����. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"qinyuan-hill",
  "southup" : __DIR__"yixiaot",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bodaoren.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
