// Room: /d/chengdu/wenzai/houyuan.c

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG
�����Ǹ����ĺ�Ժ���������죬֪�������ϲ�ͣ�ؽ��ţ��и�
������������ɨ�ŵ��档
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/atu" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"zoulang3",
  "east" : __DIR__"zoulang5.c",
  "north" : __DIR__"zoulang4",
]));
	set("outdoors", "city3");

	setup();
	replace_program(ROOM);
}
