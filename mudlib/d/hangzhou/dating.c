// Room: /d/hangzhou/dating.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
ʯ���䳡�Ĵ�����ˮĥʯ�̾�.����Ĵ�������д�˸�����[��]��.
�����ƺ���·��ͨ.�м�ڵ�����ľ̫ʦ���������䳡����,���ߵı���
���ϰ����˸�������.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"back_yard",
  "south" : __DIR__"front_yard",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shilong.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
